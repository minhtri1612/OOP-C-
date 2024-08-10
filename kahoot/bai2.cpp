#include <iostream>
#include <string>
using namespace std;
class Data{
    private:
    int value;
    public:
    //default constructor
    Data(){}
    Data(int value){
        cout<<"0";
    }
    //destructor
    ~Data(){
        cout<<"1";
    }
    Data(const Data&other){
        cout<<"2";
    }
    void operator=(const Data&other){
        cout<<"3";
    }
};
int main(){
    Data data1(100);
    return 0;
}

