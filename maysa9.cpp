#include <iostream>
//Make a program that calculates and shows the area of a triangle. 
//It is known that: Area = (base * height) / 2 or A= b.h/2.
using namespace std;
int main ()
{
float area (0.0), base (0.0), heigh (0.0);

cout << "Digite base do triangulo e press Enter ";
cin >> base;
cout<< "Digite altura do triangulo e press Enter ";
cin >> heigh;

//area= base*area/2; VERY BAD FORMULA
area=  0.5*base*heigh;
printf ("A area do triangulo sera %f", area);
return 0;
}
