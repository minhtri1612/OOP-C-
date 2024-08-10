#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Shape {
    public:
        virtual float area()=0;
};
class Square : public Shape {
    private:
        int side;
    public:
        Square(int side):side(side) {}
        float area() {
            return side*side;
        }
};
class Rectangle : public Shape {
    private:
        int width;
        int height;
    public:
        Rectangle(int width, int height):width(width),height(height) {}
        float area() {
            return width*height;
        }
};

class Canvas {
    private:
        vector<Shape*> listOfShapes;
    public:
        void addShape(Shape* shape) {
            listOfShapes.push_back(shape);
        }
        void describe() {
            for (int i=0; i<listOfShapes.size(); i++) {
                cout << listOfShapes[i]->area() << endl;
            }
        }       
};
int main() {
    Square square(5);
    Rectangle rectangle(3, 4);
    
    Canvas canvas;
    canvas.addShape(&square);
    canvas.addShape(&rectangle);
    
    canvas.describe();
    
    return 0;
}
