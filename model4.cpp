#include <iostream>
using namespace std;
class Rectangle {
protected:
    float length;
    float width;
public:
    Rectangle(float l = 0, float w = 0) : length(l), width(w) {}
    
    float area() {
        return length * width;
    }
};
class Square {
protected:
    float side;
public:
    Square(float s = 0) : side(s) {}
    
    float area() {
        return side * side;
    }
};

class Cuboid : public Rectangle, public Square {
private:
    float height;
public:
    Cuboid(float l, float w, float s, float h) 
        : Rectangle(l, w), Square(s), height(h) {}
    float volume() {
        return Rectangle::area() * height;
    }

    void display() {
        cout << "Volume of the Cuboid: " << volume() << endl;
    }
};

int main() {
    Cuboid cuboid(4, 5, 4, 10);
    cuboid.display();
    
    return 0;
}
