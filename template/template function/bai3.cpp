#include <iostream>
#include <string>
using namespace std;
class Square{
    private:
    int side;
    public:
    Square(int side){
        this->side=side;
    }
    Square operator+(const Square&other){
        Square result(this->side+other.side);
        return result;
    }
    void describe(){
        cout<<side;
    }
};
template <typename T>
T add(T a, T b){
    return a+b;
} 
int main(){
    int i1=2;
    int i2=4;
    cout<<add(i1,i2)<<endl;
    string a1="tran nguyen ";
    string a2="minh tri";
    cout<<add(a1,a2);
}

