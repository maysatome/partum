// Faça um programa que receba o salário de um funcionário e o percentual de aumento,
// calcule e mostre o valor do aumento e o novo salário.


#include<iostream>
using namespace std;
int main()
{
    float salario(0.0), novo_salario(0.0);
    float sofreu(0.0);
    cout<<"Por favor, digite seu salário anterior e clique em Enter ";
    cin >>salario;
    cout<<"Por favor, digite seu percentual de aumento e clique em Enter ";
    cin >>sofreu;
    novo_salario = 0.01*salario*(100+sofreu);
    cout << "Seu novo salário será ";
    cout << novo_salario << "."<<endl;
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