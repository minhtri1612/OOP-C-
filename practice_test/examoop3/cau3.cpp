#include <iostream>

template<typename T>
class Data {
private:
    T data1;
    T data2;
public:
    Data(T d1, T d2) : data1(d1), data2(d2) {}

    T sum() {
        return data1 + data2;
    }
};

class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double getRadius() const {
        return radius;
    }

    void describe() const {
        std::cout << "Circle with radius " << radius << std::endl;
    }
};

template<>
class Data<Circle> {
private:
    Circle circle1;
    Circle circle2;
public:
    Data(Circle c1, Circle c2) : circle1(c1), circle2(c2) {}

    Circle sum() {
        double sumRadius = circle1.getRadius() + circle2.getRadius();
        return Circle(sumRadius);
    }
};

int main() {
    Data<int> intData(5, 6);
    std::cout << "sum = " << intData.sum() << std::endl;

    Circle cir1(3);
    Circle cir2(7);
    Data<Circle> circleData(cir1, cir2);
    Circle sumCircle = circleData.sum();
    sumCircle.describe();

    return 0;
}
