#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

main()
{
	float numero1, numero2;
		cout << "Programa para hallar el mayor de dos numeros"<<endl; 
		cout << "Digite el primer numero"<<endl;
		cin >> numero1;
		cout << "Digite el segundo numero"<<endl;
		cin >> numero2;
		if (numero1>numero2)
		{
			cout<<"El mayor es el "<<numero1<<endl; 
		}
		else
		{
			cout<<"El mayor es el "<<numero2<<endl;
		}
}
