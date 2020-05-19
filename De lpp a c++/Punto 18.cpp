#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

main ()
{
	float numero1, numero2;
	cout<<"Programa para hallar dos numeros iguales"<<endl;
	
	cout<<"Digite el primer numero"<<endl;
	cin>>numero1;
	
	cout<<"Digite el segundo numero"<<endl;
	cin>>numero2;
	
	if (numero1 == numero2)
	{
		cout<<"Los numeros son iguales "<<endl;
	}
	else
	{
		cout<<"Los numeros son diferentes"<<endl;
	}
}
