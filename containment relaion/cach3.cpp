#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year) : day(day), month(month), year(year) {}
    void display() const {
        cout << day << "/" << month << "/" << year;
    }
};

class Person {
private:
    string name;
    Date* dateOfBirth;
public:
    Person(string name, Date* dateOfBirth) : name(name), dateOfBirth(dateOfBirth) {}
    void display() const {
        cout << "Name: " << name << ", Date of Birth: ";
        dateOfBirth->display();
    }
};

int main() {
    Date date(10, 1, 2000);
    Person peter("peter", &date);
    peter.display();
    return 0;
}
