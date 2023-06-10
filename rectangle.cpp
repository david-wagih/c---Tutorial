#include "shape.cpp"
#include "student.h"

// example for multiple inheritance
class Rectangle : public Shape
{
private:
    int color;

public:
    Rectangle(){};
    Rectangle(int w, int h) : Shape(w, h){};
    ~Rectangle(){};
    string getArea() const
    {
        return "coming from rectangle";
    }
    string getPerimeter() const
    {
        return "coming from rectangle";
    }
};