#include <iostream>
#include <string>
using namespace std;
class Shape{
    public:
    virtual Shape*add(int value)=0;
    virtual void describe()=0;
};
class Circle:public Shape{
    private:
    int radius;
    public:
    Circle(int radius){
        this->radius=radius;
    }
    
};
