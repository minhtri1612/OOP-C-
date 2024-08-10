#include <iostream>
#include <string>
using namespace std;
class Marks{
    private:
    int intmark;
    int extmark;
    public:
    Marks(){
        intmark=0;
        extmark=0;
    }
    Marks(int im, int em){
        intmark=im;
        extmark=em;
    }
    void display(){
        cout<<intmark<<endl<<extmark<<endl;
    }

    Marks operator+(Marks m){
        Marks temp;
        temp.intmark=intmark+m.intmark;
        temp.extmark=extmark+m.extmark;
        return temp;
    }
    Marks operator-(Marks m);
 
};

Marks Marks:: operator-(Marks m){
    Marks temp;
        temp.intmark=intmark-m.intmark;
        temp.extmark=extmark-m.extmark;
        return temp;
}


int main(){
    Marks m1(10,20);
    Marks m2(80,40);
    Marks m3=m1+m2;
    m3.display();
    Marks m4=m2-m1;
    m4.display();

}