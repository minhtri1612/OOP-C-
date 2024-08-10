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
    Date dateofBirth;
    public:
    Person(string name,int day, int month, int year):dateofBirth(day,month, year){
        this->name=name;
    }
    void display(){
        cout<<name;
        dateofBirth.display();
    }
};

int main(){

    Person tri("tri",16,12,2004);
    tri.display();
}