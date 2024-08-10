#include <iostream>
#include <string>
using namespace std;

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        Date(int day, int month, int year) {
            this->day = day;
            this->month = month;
            this->year = year;
        }
        void display(){
            cout<<day<<"/"<<month<<"/"<<year;
        }
};

class Person{
    private:
        string name;
        Date& dateOfBirth;
        
    public:
        Person(string name, Date& dateOfBirth):dateOfBirth(dateOfBirth) {
            this->name = name;
        }
        void display(){
            cout<<name;
            dateOfBirth.display();
        }

};

int main() {
    Date date(10, 1, 2000);
    Person peter("peter", date);
    peter.display();
}