#include <iostream>

using namespace std;


int main ()
{

float valor (0.0);
int dec (0), cen(0), mil(0);



cout <<"Por favor, digite o metro e clique em Enter: ";
cin >> valor;


dec= valor*10;
cen=valor*100;
mil=valor*1000;


 printf ("O valor sera %f * 10 = %d\n", valor, dec); // eu sei que é um valor interiro, mas e quando eu não sei??
 printf ("O valor sera %f * 100 = %d\n", valor, cen);
 printf ("O valor sera %f * 1000 = %d\n", valor, mil);
 
 
 return 0; 
}
