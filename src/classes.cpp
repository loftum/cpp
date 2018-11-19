#include <iostream>
using namespace std;

class Car 
{
    // Every member without accessor are private
    int speed;
    double orientation;
  public:
    // methods declared directly, are considered inline by the compiler
    void setSpeed(int speed){ this -> speed = speed; }
    int getSpeed(){ return speed; }
    double getOrientation();
    // Members are NOT initialized (to 0) automatically.
    // Uninitialized members have unpredictable values.
    Car(){speed = 0; orientation = 0;}
    Car(int speed) {this -> speed = speed; orientation = 0;}
};

// methods declared outside of the class is not considered inline.
// These will behave the same way, but not be inline optimized byt the compiler
double Car::getOrientation()
{
    return orientation;
}

int main()
{
    Car car;
    car.setSpeed(42);
    cout << car.getSpeed() << endl; // 42

    auto car2 = Car(43);
    cout << car2.getSpeed() << endl; // 43


    // Different ways to new up car:
    Car functionalForm (42);    
    Car assignment = 42;

    Car *car3 = new Car(42);
    delete car3;

}
