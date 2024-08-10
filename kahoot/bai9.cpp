#include <iostream>
#include <string>
using namespace std;
class Employee{
    protected:
    float salary=5.0;
};
class Manager:public Employee{
    public:
    float getSalary(){
        return salary;
    }
};
int main(){
    Manager peter;
    cout<<peter.getSalary();
}