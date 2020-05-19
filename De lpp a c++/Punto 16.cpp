#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

main()
{
	int numero,respuesta;
	cout<<"programa para sumar a un numero menor de 40"<<endl;
	cin>>numero;
	if (numero<40)
	{
		respuesta = numero + 15;
		cout<<"La respuesta es "<<respuesta<<endl;
	}
}
