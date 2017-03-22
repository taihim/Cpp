#ifndef RECTANGLE
#define RECTANGLE

class Rectangle
{

double length = 2.0; //default values
double width = 1.0;  //default values


public:

Rectangle();
Rectangle(double, double);
void setLength(double);
void setWidth(double);
double area();
double perimeter();
const double& getLength();
const double& getWidth();

};

#endif
