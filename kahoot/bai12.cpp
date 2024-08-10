#include <iostream>
#include <string>
using namespace std;
class Employee{
    public:
    float getSalary(){
        return 5.0;
    }
};
class Manager:public Employee{
    public:
    float getSalary(){
        return 6.0;
    }
};
int main(){
    Employee john;
    cout<<john.getSalary();
    Manager peter;
    cout<<peter.getSalary();
}