Make a program that receives the value of a deposit and the value of the interest rate, calculate and show the value of the yield and the total value after the yield. ##“That’s seems confusing to me. Maybe it’s better to give up this”##.

#include<iostream>
using namespace std;
int main()
{
    // Next line definse and initializes all used variables
    float salario(0.0), novo_salario(0.0), bonus(50.0), taxe(0.10);
    // Next line informes user about asked value and provide the example of user input
    printf("Please input from keyboard your base salary (example: 1234.56): ");// C-style
    // Next line interrumpt the execution of code it is waiting of user input
    scanf("%f",&salario);// C-style
    novo_salario = salario * (1-taxe);
    printf("Your net salary without the bonus is: %.2f.\n",novo_salario);// C-style
    novo_salario +=bonus;
    printf("Your net salary with bonus is: %.2f.\n",novo_salario);// C-style
    return 0;
}

/* Compiling and launching and output are depicted:

*/
