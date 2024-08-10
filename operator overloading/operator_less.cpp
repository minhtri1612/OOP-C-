#include <iostream>
#include <string>
using namespace std;

class Square {
private:
    double side;

public:
    Square(int x = 0) : side(x) {}
    double getSide() const {
        return side;
    }
    double getArea() const {
        return side * side;
    }
    bool operator>(const Square& other) const;
    bool operator==(const Square& other) const;

};
//a.operator>(b)
bool Square::operator>(const Square& other) const {
    return getArea() > other.getArea();
}

bool Square::operator==(const Square& other) const {
//a.operator==(b)
    return getArea() == other.getArea();
}

int main() {
    Square a(5);
    Square b(3);
    Square c(23);
    Square d(23);
    Square e(2);
    Square f(4);
    if (a >b) {
        cout << "a is greater than b" << endl;
    } 
    
    if(f>e){
        cout<<"f is large than e"<<endl;
    }

    
    if (c==d){
        cout<<"a=b";
    }

    return 0;
}
