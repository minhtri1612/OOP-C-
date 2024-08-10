#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Shape{
    public:
    virtual double area()=0;
};
class Circle:public Shape{
    private:
    int radius;
    public:
    Circle(int radius){
        this->radius=radius;
    }
    double area(){
        return 3.14*radius*radius;
    }
};
class Square:public Shape{
    private:
    int side;
    public:
    Square(int side){
        this->side=side;
    }
    double area(){
        return side*side;
    }
};
int main(){
    Circle circle(3);
    Square square(5);
    vector<Shape*>v;
    v.push_back(&circle);
    v.push_back(&square);
    for(int i=0;i<v.size();i++){
        cout<<v[i]->area()<<endl;
    }
}