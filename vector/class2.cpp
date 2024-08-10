#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Square{
    private:
    string name;
    int side;
    public:
    Square(string name,int side){
        this->name=name;
        this->side=side;
    }
    void describe(){
        cout<<name<<"-"<<side<<"cm"<<endl;
    }
    int getSide(){
        return side;
    }
};
bool compare(Square s1,Square s2){
    return (s1.getSide()<s2.getSide());
}
int main(){
    vector<Square> listSquare;
    Square s1("tam giac 1",3);
    Square s2("tam giac 2",1);
    Square s3("tam giac 3",10);
    Square s4("tam giac 1",7);
    listSquare.push_back(s1);
    listSquare.push_back(s2);
    listSquare.push_back(s3);
    listSquare.push_back(s4);
    sort(listSquare.begin(),listSquare.begin()+4,compare);
    for(int i=0;i<listSquare.size();i++){
        listSquare[i].describe();
    }
}