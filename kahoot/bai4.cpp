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
    //copy constructor
    Data(const Data&other){
        cout<<"2";
    }
    void operator=(const Data&other){
        cout<<"3";
    }
};
int main(){
    Data data2(200);
    Data data4(data2);// copy constructor,the same as Data data4=data2
    return 0;
}

