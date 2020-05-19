#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

main()
{
	float numero, porcentaje;
	cout<<"Programa para hallar el 20% de un numero"<<endl;
	cout<<"Digite el numero"<<endl;
	cin>>numero;
	porcentaje = (numero * 20)/100;
	cout<<"El porcentaje de " << numero << " es "<<porcentaje<<endl;
}
