#include <iostream>
#include <string>
using namespace std;
class Data{
    private:
    int value;
    public:
    Data(){}
    Data(int value){
        cout<<"0";
    }
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
    Data data;
    return 0;
}