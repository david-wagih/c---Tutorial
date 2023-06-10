#include <iostream>
#include "rectangle.cpp"
using namespace std;

int main(void)
{
    // this is normal casting (static casting)
    Shape *r = new Rectangle();
    // this is static cast (it is not safe, it is not checked at run time)
    Rectangle *r2 = static_cast<Rectangle *>(r);
    // this is dynamic cast (it is safe as it returns nullptr if any issue happens, it is checked at run time)
    Rectangle *r3 = dynamic_cast<Rectangle *>(r);
    // it used the function from the Rectangle class because it is a virtual function (run time polymorphism / dynamic binding)
    cout << r->getArea() << endl;
    // it used the function from the Shape class because it is not a virtual function (compile time polymorphism / static binding)
    cout << r->getPerimeter() << endl;
    cout << "Hello World!" << std::endl;
    return 0;
}