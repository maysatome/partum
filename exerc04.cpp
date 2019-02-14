// Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário,
// sabendo-se que este sofreu um aumento de 25%.


#include<iostream>
using namespace std;
int main()
{
    float salario(0.0);
    float sofreu(1.25);
    cout<<"Por favor, digite seu salário anterior e clique em Enter ";
    cin >>salario;
    salario*=sofreu;//Tricky
    //cout << "Seu novo salário será ";
    //cout << salario<< "."<<endl;
   printf("Seu novo salário será %.2f.", salario);
    cout << "Tenha um bom dia."<<endl;
    return 0;
}
/* Compiling and launching and output are depicted:
gitpod /workspace/partum $ make exerc04
g++     exerc04.cpp   -o exerc04
gitpod /workspace/partum $ ./exerc04
Por favor, digite seu salário anterior e clique em Enter 1234.56
Seu novo salário será 1543.2.
Tenha um bom dia.
gitpod /workspace/partum $
*/
