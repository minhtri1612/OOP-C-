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
    //Data*data(100);
    //should use
    Data*data=new Data(100);
    data->describe();
    return 0;
}