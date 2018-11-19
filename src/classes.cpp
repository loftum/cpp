#include <iostream>
using namespace std;

class Car 
{
    int speed;
    double orientation;
  public:
    // methods declared directly, are considered inline by the compiler
    void setSpeed(int speed){ this -> speed = speed; }
    int getSpeed(){ return speed; }
    void setOrientation(double orientation);
    Car(){speed = 0; orientation = 0;}
};

// methods declared outside of the class is not considered inline.
// These will behave the same way, but not be inline optimized byt the compiler
void Car::setOrientation(double orientation)
{
    this -> orientation = orientation;
}

int main()
{
    Car car;
    car.setSpeed(42);
    cout << car.getSpeed() << endl;
}
