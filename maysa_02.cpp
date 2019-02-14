#include<iostream>

//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.
using namespace std;
int main () 

{
	
int n1(5), n2(5), n3(5);
float peso_n1(2), peso_n2(2), peso_n3(1); 
float media_ponderada = (peso_n1*n1+peso_n2*n2, peso_n3*n3) / (peso_n1+peso_n2+peso_n3);


//cout << "mostre a media_ponderada est";
//cout << media_ponderada<<endl;

printf ("media_ponderada e:  (%d * %f + %d* %f + %d * %f ) / (%f + %f + %f) = %f", n1,peso_n1, n2,peso_n2, n3, peso_n3, peso_n1, peso_n2, peso_n3, media_ponderada);

return 0; 
	
	
}
