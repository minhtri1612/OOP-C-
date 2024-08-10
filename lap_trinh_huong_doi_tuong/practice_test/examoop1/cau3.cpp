#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y) {}
    void display() {
        cout << "x:" << x << endl;
        cout << "y:" << y << endl;
    }
    int getX() const{
        return x;
    }
    int getY() const {
        return y;
    }
};

class TwoDShape {
protected:
    Point centerPoint;
    TwoDShape(int x, int y) : centerPoint(x, y) {}
    virtual double perimeter() const = 0;
    virtual double area() const = 0;
    virtual void print() const = 0;
};

class Rectangles : public TwoDShape {
private:
    int width;
    int height;

public:
    Rectangles(int width, int height, int x, int y) : TwoDShape(x, y) {
        this->width = width;
        this->height = height;
    }
    double perimeter() const {
        return (width + height) * 2;
    }
    double area() const {
        return width * height;
    }
    void print() const override {
        cout << "Width: " << width << ", Height: " << height << ", Center Point (x, y): (" << centerPoint.getX() << ", " << centerPoint.getY() << ")" << endl;
    }
};

class Squares : public TwoDShape {
private:
    int side;

public:
    Squares(int side, int x, int y) : TwoDShape(x, y) {
        this->side = side;
    }
    double perimeter() const override {
        return side * 4;
    }
    double area() const override {
        return side * side;
    }
};

class Circles : public TwoDShape {
private:
    int radius;

public:
    Circles(int radius, int x, int y) : TwoDShape(x, y) {
        this->radius = radius;
    }
    double area() const override {
        return M_PI * radius * radius;
    }
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

int main() {

    Rectangles hcn(4, 3, 2, 6);
    cout << "Chu vi va dien tich hcn lan luot la: " << hcn.perimeter() << " va " << hcn.area() << endl;
    hcn.print();

    return 0;
}
