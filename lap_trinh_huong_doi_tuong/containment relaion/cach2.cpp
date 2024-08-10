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
void display(){
    cout<<day<<"/"<<month<<"/"<<year;
}
};
class Person{
    private:
    string name;
    Date birthOfDate;
    public:
    Person(string name,  Date birthOfDate):name(name),birthOfDate(birthOfDate){
        this->name=name;
    }
    void  display(){
        cout<<name;
        birthOfDate.display();
    }
};

int main(){
    Date birthOfDate(16,12,2004);
    Person tri("tri",birthOfDate);
    tri.display();
}