include <iostream>
//Make a program that receives the base salary (minimum wage/ monthly remuneration) of an employee, calculate and show the salary to receive, 
//knowing that the employee has a bonus (gain more money) of 5% on the base salary and pays 7% tax (interest rate) on this salary.
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main   ()  


{
float base_salario(0.0);
float novo_salario(0.0);
float salario_after(0.0);
float salario_geral(0.0);
 
//novo_salario= (base_salario*0.05)*0.07;

cout<< "Digite o base_salario e clique em Enter";
cin << base_salario; 
cout<<"digite o percentual de aumento e clique em Enter";
cin<< salario_after;
cout<<"digite o percentual de desconto e clique em Enter";
cin<<salario_geral;

salario_geral= (base_salario*0.05)*0.07;



	return 0;
}
