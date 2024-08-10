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
    Manager peter;
    cout<<peter.getSalary();
}