#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, width;

public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }

    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    Rectangle(const Rectangle &r)
    {
        length = r.length;
        width = r.width;
    }

    float area()
    {
        return length * width;
    }

    float perimeter()
    {
        return 2 * (length + width);
    }

    ~Rectangle()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Rectangle r1;

    Rectangle r2(10, 5);

    Rectangle r3(r2);

    cout << "Area of Rectangle = " << r2.area() << endl;
    cout << "Perimeter of Rectangle = " << r2.perimeter() << endl;

    cout << "\nArea of copied Rectangle = " << r3.area() << endl;
    cout << "Perimeter of copied Rectangle = " << r3.perimeter() << endl;

    return 0;
}
