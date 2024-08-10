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
    Data data(100);
    Data*data_ptr;
    data_ptr=&data;
    data_ptr->describe();
    delete data_ptr;
    return 0;
}