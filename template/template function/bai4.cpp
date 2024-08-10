#include <iostream>
#include <string>
using namespace std;
template <typename T>
T find_max(T a, T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
template <typename T1,typename T2>
int find_MAX(T1 A,T2 B){
    if(sizeof(A)>sizeof(B)) {
        return sizeof(A);
    }
    else{
        return sizeof(B);
    }
}
// double find_max(int a, int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
int main(){
    int a1=6;
    int b1=2;
    int so_max=find_max(a1,b1);
    cout<<so_max;
    int max_size=find_MAX(a1,b1);
    cout<<max_size;
}