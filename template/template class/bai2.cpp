#include <iostream>
#include <string>
using namespace std;

class Square {
private:
    int side;
public:
    Square(){}
    Square(int side) {
        this->side = side;
    }
    Square operator+(const Square& other) {
        Square result(this->side + other.side);
        return result;
    }
    void describe() {
        cout << "Side: " << side;
    }
};

template<class T>
class Data {
private:
    T value1;
    T value2;
public:

    Data(T value1, T value2) {
        this->value1 = value1;
        this->value2 = value2;
    }
    T sum() {
        return value1 + value2;
    }
};

int main() {
    Data<int> intData(5, 6);
    cout << "sum 1: " << intData.sum() << endl;

    string s1 = "C++";
    string s2 = "Programming";
    Data<string> stringData(s1, s2);
    cout << "sum 3: " << stringData.sum() << endl;

    Square square1(5);
    Square square2(7);
    Data<Square> squareData(square1, square2);
    Square sumSquare = squareData.sum();
    sumSquare.describe();

    return 0;
}
