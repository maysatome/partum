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
   // cout << "Seu novo salário será ";
   // cout << novo_salario << "."<<endl;
    
    printf("Seu novo salário será %.2f.\n",novo_salario);
   cout << "Tenha um bom dia."<<endl;
    return 0;
}
/* Compiling and launching and output are depicted:
gitpod /workspace/partum $ make exerc05
make: 'exerc05' is up to date.
gitpod /workspace/partum $ make exerc05
g++     exerc05.cpp   -o exerc05
gitpod /workspace/partum $ ./exerc05
Por favor, digite seu salário anterior e clique em Enter 55
Por favor, digite seu percentual de aumento e clique em Enter 100
Seu novo salário será 110.
Tenha um bom dia.
gitpod /workspace/partum $
*/
