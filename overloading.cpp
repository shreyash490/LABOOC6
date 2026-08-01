//Function area() is overloded thre times
#include <iostream>
using namespace std;
//Declaration of function prototypes
int area (int);
int area (int,int);
float area (float);

int main()
{
 cout << "Calling the area() function for computing the area of square (side=5)-" <<area(5)  <<"\n";           
 cout << "Calling the area() function for computing the area of rectangle (length=5,bradth=10-)" <<area(5,10) <<"\n";
 cout << "Calling the area() function for computing the area of circle (radius=5.5)-" <<area(5.5f) <<"\n";
 return 0;
}
// Area of Square
int area(int side)
{
    return side*side;
}

// Area of Rectangle
int area(int length, int breadth)
{
    return length*breadth;
}

// Area of Circle
float area(float radius)
{
    return 3.14f*radius*radius;
}