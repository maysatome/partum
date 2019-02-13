//Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

#include<iostream>
using namespace std;
int main()
{
    int n1(1), n2(0), n3(1);
    float media_aritmetica(0);
    media_aritmetica =(n1+n2+n3)/3 ;// types are not correct
    cout << media_aritmetica<<endl; // result is false
    return 0;
}
/* Compiling and launching and execution are depicted:
gitpod /workspace/partum $ make exerc02
g++     exerc02.cpp   -o exerc02
gitpod /workspace/partum $ ./exerc02
0
gitpod /workspace/partum $
*/

