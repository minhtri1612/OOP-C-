#include <iostream>
#include <string>
using namespace std;
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int day, int month, int year){
            this->day=day;
            this->month=month;
            this->year=year;
        }
        bool isEqual(const Date&other) const{
            return (day==other.day&&month==other.month&&year==other.year);
        }
};

class Person{
    private:
        string name;
        Date date;
    public:
        Person(string name,Date date):name(name),date(date){}
        
            bool hasSameName(const Person& other) const {
                return (name == other.name);
            }
            bool hasSameDateOfBirth(const Person& other) const {
                return date.isEqual(other.date);
            }
};

int main() {
    Date dob1(15, 6, 1990);
    Date dob2(15, 6, 1990);
    Date dob3(20, 8, 1985);

    Person person1("John", dob1);
    Person person2("Alice", dob2);
    Person person3("John", dob3);

    cout << "Do person1 and person2 have the same name? " << (person1.hasSameName(person2) ? "Yes" : "No")<<endl ;
    cout << "Do person1 and person3 have the same name? " << (person1.hasSameName(person3) ? "Yes" : "No")<<endl ;

    cout << "Do person1 and person2 have the same date of birth? " << (person1.hasSameDateOfBirth(person2) ? "Yes" : "No")<<endl ;
    cout << "Do person1 and person3 have the same date of birth? " << (person1.hasSameDateOfBirth(person3) ? "Yes" : "No")<<endl ;

    return 0;
}