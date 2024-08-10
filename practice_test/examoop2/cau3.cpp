#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
protected:
    string name;
    int yearOfBirth;

public:
    Person(string name, int yearOfBirth) : name(name), yearOfBirth(yearOfBirth) {}
    virtual void display() const = 0; 
    int getYearOfBirth() const {
        return yearOfBirth;
    }
};

class Student : public Person {
private:
    string grade;

public:
    Student(string name, int yearOfBirth, string grade) : Person(name, yearOfBirth), grade(grade) {}
    void display() const override {
        cout << "Student Name: " << name << ", Year of Birth: " << yearOfBirth << ", Grade: " << grade << endl;
    }
};

class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string name, int yearOfBirth, string subject) : Person(name, yearOfBirth), subject(subject) {}
    void display() const override {
        cout << "Teacher Name: " << name << ", Year of Birth: " << yearOfBirth << ", Subject: " << subject << endl;
    }
};

class Doctor : public Person {
private:
    string specialist;

public:
    Doctor(string name, int yearOfBirth, string specialist) : Person(name, yearOfBirth), specialist(specialist) {}
    void display() const override {
        cout << "Doctor Name: " << name << ", Year of Birth: " << yearOfBirth << ", Specialist: " << specialist << endl;
    }
};

class Ward {
private:
    string name;
    vector<Person*> people;

public:
    Ward(string name) : name(name) {}
    void addPerson(Person* person) {
        people.push_back(person);
    }
    void displayPeople() const {
        cout << "Ward: " << name << endl;
        for (const auto& person : people) {
            person->display();
        }
    }
    int countDoctor() const {
        int count = 0;
        for (const auto& person : people) {
            if (dynamic_cast<Doctor*>(person) != nullptr) {
                count++;
            }
        }
        return count;
    }
    static bool compareByAge(const Person* a, const Person* b) {
        return a->getYearOfBirth() < b->getYearOfBirth();
    }
    void sortAge() {
        sort(people.begin(), people.end(), compareByAge);
    }
    double aveTeacherYearOfBirth() const {
        int sum = 0;
        int count = 0;
        for (const auto& person : people) {
            if (dynamic_cast<Teacher*>(person) != nullptr) {
                sum += person->getYearOfBirth();
                count++;
            }
        }
        if (count == 0) return 0; // Avoid division by zero
        return static_cast<double>(sum) / count;
    }
};

int main() {
    Ward ward("Pediatrics");
    Student student("John", 2005, "Grade 7");
    Teacher teacher("Mr. Smith", 1978, "Mathematics");
    Doctor doctor("Dr. Johnson", 1965, "Pediatrician");

    ward.addPerson(&student);
    ward.addPerson(&teacher);
    ward.addPerson(&doctor);

    ward.displayPeople();
    cout << "Number of Doctors: " << ward.countDoctor() << endl;

    ward.sortAge();
    cout << "Sorted by Age:" << endl;
    ward.displayPeople();

    cout << "Average Year of Birth of Teachers: " << ward.aveTeacherYearOfBirth() << endl;

    return 0;
}
