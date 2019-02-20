#include <stdio.h>

int main ()
{

double valor=0.0;
double dec=0.0, cen=0.0, mil=0.0;

 printf("%s", "Por favor, digite o metro e clique em Enter: ");
scanf("%f",&valor);

dec= valor*10.0;
cen=valor*100.0;
mil=valor*1000.0;


 printf ("O valor sera %f * 10 = %f\n", valor, dec); // eu sei que é um valor interiro, mas e quando eu não sei??
 printf ("O valor sera %f * 100 = %f\n", valor, cen);
 printf ("O valor sera %f * 1000 = %f\n", valor, mil);
 
 
 return 0; 
}
