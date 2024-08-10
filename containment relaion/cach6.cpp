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
        int getDay(){
            return day;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
        }
};

class Person{
    private:
        string name;
        Date*dateofBirth;
    public:
        Person(string name,Date*dateofBirth){
            this->name=name;
            this->dateofBirth=dateofBirth;
        }
        void display(){
            cout<<"name:"<<name<<endl;
            cout<<dateofBirth->getDay()<<"/"<<dateofBirth->getMonth()<<dateofBirth->getYear();

        }
};

int main(){
    Date date(16,12,2004);
    Person tri("tri",&date);
    tri.display();
}