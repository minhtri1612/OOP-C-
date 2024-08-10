#include <iostream>
#include <string>
using namespace std;
class Marks{
private:
int subjects[3];
public:
Marks(int sub1, int sub2, int sub3){
    subjects[0]=sub1;
    subjects[1]=sub2;
    subjects[2]=sub3;
}
int operator[](int position){
    return subjects[position];
}
};

int main(){
    Marks anni(2,3,4);
    cout<<anni[0]<<endl;
    cout<<anni[1]<<endl;
    cout<<anni[2]<<endl;

}