#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Date{
    private:
    int day;
    int month;
    int year;
    public:
    Date(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void display(){
        cout<<"ngay:"<<day<<" thang:"<<month<<" nam:"<<year<<endl;
    }
};
class Person{
    private:
    string name;
    Date date_of_birth;
    public:
    Person(string name,int day,int month,int year):date_of_birth(day,month,year)
    {
        this->name=name;
    }
    void display(){
        cout<<"ho ten:"<<name<<endl;
        date_of_birth.display();
    }
};

int main(){
    Date a(16,12,2004);
    Person tri("tri",16,12,2004);
    tri.display();
}