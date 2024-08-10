#include <iostream>
#include <string>
using namespace std;
class Manufacturer{
    private:
    int id;
    string location;
    public:
    Manufacturer(int id,string location){
        this->id=id;
        this->location=location;
    }
    void describe(){
        cout<<"Id:"<<id<<"-"<<"Location:"<<location;
    }
};
class Device{
    private:
    string name;
    double price;
    Manufacturer *manufacturer;
    public:
    Device(string name,double price,Manufacturer *manufacturer){
        this->manufacturer=manufacturer;
        this->name=name;
        this->price=price;
    }
    void describe(){
        cout<<"Name:"<<name<<"-"<<"Price:"<<price;
        manufacturer->describe();
    }
    ~Device(){
        delete manufacturer;
    }
};
int main(){
    Manufacturer abc(9725,"Vietnam");
    Device mouse("mouse",2.5,&abc);
    mouse.describe();
}