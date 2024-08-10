#include <iostream>
#include <string>
using namespace std;
class Marks{
private:
int mark;
public:
Marks(){
    mark=0;
}
Marks(int m){
    mark=m;
}
void yourMark(){
    cout<<"your mark is:"<<mark<<endl;
}
Marks operator++(){
    mark+=1;
    return *this;
}
friend Marks operator--(Marks&);
};
Marks operator--(Marks&m){
    m.mark-=1;
    return m;
}
int main(){
    Marks anni(6);
    anni.yourMark();
    ++ anni;
    anni.yourMark();
    ++ anni;
    anni.yourMark();
    -- anni;
    anni.yourMark();

}