#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Salary{
    private:
    int pay;
    int bonus;
    int annual_salary(){
        return pay*12+bonus;
    }
};
class Employee{
    private:
    string name;
    int age;
    Salary luong_nv;
    public:
    Employee(int pay, int bonus,Salary luong_nv){
        this->name=name;
        this->age=age;
    }
};