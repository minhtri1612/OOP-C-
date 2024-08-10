#include <iostream>
#include <string>
using namespace std;
class Point{
private:
int x;
int y;
public:
Point(int x=0, int  y=0):x(x),y(y){}
Point operator-(const Point&other){
    Point p;
    p.x=x+other.x;
    p.y=y-other.y;
    return p;
}
void print(){
    cout<<x<<" "<<y;
}
};
int main(){
    Point p1(1,3);
    Point p2(4,5);
    Point p3=p1-p2;
    p3.print();
}