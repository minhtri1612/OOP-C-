#include <iostream>
#include <string>
using namespace std;
// class IntArray{
//     public:
//     int array[10];
//     void fill(int value){
//         for(int i=0;i<10;i++){
//             array[i]=value;
//         }
//     }
//     int &at(int index){
//         return array[index];
//     }

// };

// class StringArray{
//     public:
//     string array[10];
//     void fill(string value){
//         for(int i=0;i<10;i++){
//             array[i]=value;
//         }
//     }
//     string &at(int index){
//         return array[index];
//     }
// };

template<typename T>
class Array
{
    public:
    T array[10];
    void fill(T value){
        for(int i=0;i<10;i++){
            array[i]=value;
        }
    }
    T &at(int index){
        return array[index];
    }
};

int main(){
    Array<int> intArr;
    intArr.fill(2);
    cout<<intArr.at(4);
}
