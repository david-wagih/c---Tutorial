#include <iostream>
#include <string>
using namespace std;

class Shape
{
    // any class can't see this, only my children can see this
protected:
    int width;
    int height;

public:
    Shape(){};
    Shape(int w, int h) : width(w), height(h){};
    ~Shape(){};
    virtual string getArea() const
    {
        return "coming from shape";
    }
    string getPerimeter() const
    {
        return "coming from shape";
    }
};