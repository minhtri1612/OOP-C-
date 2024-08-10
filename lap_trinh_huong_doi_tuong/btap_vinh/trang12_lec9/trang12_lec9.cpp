#include <iostream>
#include <string>
using namespace std;
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int day, int month,int year){
            this->day=day;
            this->month=month;
            this->year=year;
        }
        void display() {
            cout<<day<<"/"<<month<<"/"<<year;
        }
};

class Person{
    private:
        string name;
        Date date;
    public:
        Person(string name,Date date ):name(name),date(date){}

        void display(){
            cout<<name;
            date.display();
        }
};

int main(){
    Date date(16,12,2004);
    Person tri("tri",date);
    tri.display();
}