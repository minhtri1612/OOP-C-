#include <iostream>
#include <string>
using namespace std;
class Beverage {
    private:
    float price;
    float topping_price;
    float condiment_price;
    public:
    //a default constructor (set value of data members to zero)
    Beverage(float price=0.0,float topping_price=0.0,float condiment_price=0.0){
        this->price=price;
        this->topping_price=topping_price;
        this->condiment_price=condiment_price;
    }
    void describe(){
        cout<<"price:"<<price<<" -"<<" topping_price:"<<topping_price<<" -"<<" condiment_price:"<<condiment_price;
    }
    //copy constructor
    Beverage(const Beverage&other){
        price=other.price;
        topping_price=other.topping_price;
        condiment_price=other.condiment_price;
    }
    Beverage operator+(Beverage m){
        Beverage temp;
        temp.price=price+m.price;
        temp.topping_price=topping_price+m.topping_price;
        temp.condiment_price=condiment_price+m.condiment_price;
        return temp;
    }
    bool operator==(const Beverage&other) const;
};
bool Beverage::operator==(const Beverage&other) const{
    return price==other.price;
    return topping_price==other.topping_price;
    return condiment_price==other.condiment_price;
}
int main(){
    Beverage b1(2.3,4.5,1.8);
    b1.describe();
    Beverage b2(2.9,10.3,7.0);
    b2.describe();
    
    Beverage b3=b1+b2;
    b3.describe();
    cout<<endl;
    cout<<"is b3=b1?"<<(b3==b1)<<endl;

}