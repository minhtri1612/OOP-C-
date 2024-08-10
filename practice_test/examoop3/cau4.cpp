#include <iostream>
#include <string>
using namespace std;
class IceCream{
    private:
    float ice_price;
    float topping_price;
    float flavor_price;
    public:
    // Default constructor
    IceCream():ice_price(0.0),topping_price(0.0),flavor_price(0.0){}
    // Constructor with parameters
    IceCream(float pri_ice,float top_price,float fla_price):ice_price(pri_ice),topping_price(top_price),flavor_price(fla_price){}
    // Copy constructor
    IceCream(const IceCream&other):ice_price(other.ice_price),topping_price(other.topping_price),flavor_price(other.flavor_price){}
    void describe(){
        cout<<"ice price:"<<ice_price<<" "<<"topping price:"<<topping_price<<" "<<"flavor price:"<<flavor_price<<endl;
    }
    IceCream operator-(IceCream m){
        IceCream temp;
        temp.ice_price=ice_price-m.ice_price;
        temp.topping_price=topping_price-m.topping_price;
        temp.flavor_price=flavor_price-m.flavor_price;
        return temp;
    }
    bool operator<=(const IceCream&other) const;

};
bool IceCream::operator<=(const IceCream&other) const{
    return ice_price <= other.ice_price &&
               topping_price <= other.topping_price &&
               flavor_price <= other.flavor_price;
}
int main(){
    IceCream ic0;
    ic0.describe();
    IceCream ic1(10.5,2.3,1.2);
    ic1.describe();
    IceCream ic2(15,5.2,7.5);
    ic2.describe();
    IceCream ic3(ic1);
    ic3.describe();
    ic3=ic2-ic1;
    ic3.describe();
    cout<<"is ic2<=ic3?"<<(ic2<=ic3)<<endl;
    ic3=ic1;
    ic3.describe();
    cout<<"is ic3<=ic1?"<<(ic3<=ic1)<<endl;
}