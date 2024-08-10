#include <iostream>
#include <string>
using namespace std;
class Data{
    private:
    int value;
    public:
    //default constructor
    Data():value(0){}
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
    //operator overloading
    void operator=(const Data&other){
        cout<<"3";
    }
};
int main(){
    Data data;
    return 0;
}

//explaination:
//when the "data" object is called, no argument are passed to the constructor
// so the default constructor is called.
//when the code is end, "data" go out, we call the destructor->print 1
//output is:1