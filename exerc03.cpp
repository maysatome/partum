// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.


#include<iostream>
using namespace std;
int main()
{
    int n1(1), n2(2), n3(3);
    float pesos_n1(1), pesos_n2(1), pesos_n3(1);
    float media_ponderada(0);
    media_ponderada =(pesos_n1*n1+pesos_n2*n2+pesos_n3*n3)/(pesos_n1+pesos_n2+pesos_n3) ;
    cout << "e mostre a média ponderada est ";
    cout << media_ponderada<<endl;
    return 0;
}
/* Compiling and launching and output are depicted:
gitpod /workspace/partum $ make exerc03
g++     exerc03.cpp   -o exerc03
gitpod /workspace/partum $ ./exerc03
e mostre a média ponderada est 2
gitpod /workspace/partum $
*/

