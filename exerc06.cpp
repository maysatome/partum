// Make a program that receives the base salary (minimum wage/ monthly remuneration) of an employee,
// calculate and show the salary to receive,
// knowing that the employee has a bonus (gain more money) of 5% on the base salary and
// pays 7% tax (interest rate) on this salary.

#include<iostream>
using namespace std;
int main()
{
    // Next line definse and initializes all used variables
    float salario(0.0), novo_salario(0.0), bonus(0.05), taxe(.07);
    // Next line informes user about asked value and provide the example of user input
    printf("Please input from keyboard your base salary (example: 1234.56): ");// C-style
    // Next line interrumpt the execution of code it is waiting of user input
    scanf("%f",&salario);// C-style
    novo_salario = salario*(1+bonus);
    printf("Your gross salary with bonus is: %.2f.\n",novo_salario);// C-style
    novo_salario -= novo_salario*taxe;
    printf("Your net salary after taxes is: %.2f.\n",novo_salario);// C-style
    return 0;
}

/* Compiling and launching and output are depicted:
gitpod /workspace/partum $ make exerc06
g++     exerc06.cpp   -o exerc06
gitpod /workspace/partum $ ./exerc06
Please input from keyboard your base salary (example: 1234.56): 1234.56
Your gross salary with bonus is: 1296.29.
Your net salary after taxes is: 1205.55.
gitpod /workspace/partum $
*/
