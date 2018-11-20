#include <iostream>
using namespace std;

// Shape is a "pure abstract class" (aka interface)
// which means all members are "pure virtual" (aka abstract)
class Shape
{
  public:
    virtual int area() = 0; // "= 0" makes this method "pure virtual" (aka abstract)
};

// Polygon is abstract, since it does not implement area()
class Polygon : public Shape
{
  protected:
    int width;
    int height;
  public:
    void setValues(int width, int height)
    {
        this -> width = width;
        this -> height = height;
    }
};

// public = "the most accessible level" inherited members will have.
// If set to protected, all inherited members will be "at most" protected.
// (public members will be "downgraded" to protected)
class Rectangle: public Polygon 
{
  public:
    int area() // implicit virtual
    {
        return width * height;
    }
};

class Triangle: public Polygon
{
  public:
    int area() // implicit virtual
    {
        return width * height / 2;
    }
};

int main()
{
    Polygon *rectangle = new Rectangle();
    rectangle -> setValues(2,3);

    Shape *shape = rectangle;
    // shape -> setValues(4,6); // Does not compile. Shape has no setValues() method
    cout << shape -> area() << endl; // 6
}