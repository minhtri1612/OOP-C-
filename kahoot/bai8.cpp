#include <iostream>
#include <string>
using namespace std;
class Data{
    private:
    int value;
    public:
    Data(int value){
        this->value=value;
    }
    void describe(){
        cout<<value;
    }
};
int main(){
    Data*data_ptr=new Data(100);
    data_ptr->describe();
    delete data_ptr;
}