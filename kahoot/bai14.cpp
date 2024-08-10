#include <iostream>
#include <string>
using namespace std;
class Employee{
    public:
    virtual float getSalary()=0;
};
class Manager:public Employee{
    public:
    float getSalary(){
        return 6.0;
    }
};
int main(){
    // Employee john; // Cannot instantiate an abstract class
    // cout << john.getSalary();
    Manager peter;
    cout<<peter.getSalary();
}