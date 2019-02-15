//Make a program that calculates and shows the area of a triangle. It is known that: Area = (base * height) / 2 or A= b.h/2.


#include<iostream>

int main()
{
    double base = 0.1, height = 0.1;// C-style
    printf("Area of triangle is: %.6f\n", 0.5*base*height);// C-style
    // N.B.: Please avoid if possible division operation base*height/2 is risquy ant less fast
    return 0;
}