#include <iostream>
#include <string>
using namespace std;
template<typename T>
T add(T a,T b){
    return a+b;
}
int main(){
    int i1=2;
    int i2=4;
    cout<<add<int>(i1,i2)<<endl;
    string a1="tran nguyen ";
    string a2="minh tri";
    cout<<add(a1,a2);
}