// viết chương trình cho phép nhập vào 3 đỉnh của 1 tam giác. 
// Sau đó, chương trình sẽ kiểm tra xem đây có phải là 1 tam giác hợp lệ hay không.
// Biết rằng 1 tam giác là hợp lệ khi nó thoải mãn điều kiện sau: 
// tổng độ dài của 2 cạnh bất kỳ luôn lớn hơn độ dài của cạnh còn lại.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Tamgiac{
    private:
    int canh1;
    int canh2;
    int canh3;
    public:
    Tamgiac(int canh1, int canh2,int canh3){
        this->canh1=canh1;
        this->canh2=canh2;
        this->canh3=canh3;
    }
    void describe(){
        cout<<"canh 1:"<<canh1<<endl;
        cout<<"canh 2:"<<canh2<<endl;
        cout<<"canh 3:"<<canh3<<endl;
    }
    bool trueTamGiac(){
        if(canh1+canh2>canh3 &&canh2+canh3>canh1&&canh1+canh3>canh2){
            return true;
        }
        else{
            return false;
        }
    } 

};
int main(){
    Tamgiac tamgiac1(3,4,5);
    tamgiac1.describe();
    Tamgiac tamgiac2(5,4,10);
    tamgiac2.describe();
    if(tamgiac1.trueTamGiac()){
       cout<<"tam giac nay dung";
    }
    else{
        cout<<"tam giac sai";
    }
    if(tamgiac2.trueTamGiac()){
       cout<<"tam giac nay dung";
    }
    else{
        cout<<"tam giac sai";
    }
}