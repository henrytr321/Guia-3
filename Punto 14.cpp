#include <iostream>
#include <string.h>
using namespace std;

main()
{
	float numero1, numero2, resultado;
	int opcion;
	cout<<"Digite un numero"<<endl;
	cin>>numero1;
	cout<<"Digite un numero"<<endl;
	cin>>numero2;
	cout<<"   MENU     "<<endl;
	cout<<"1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir"<<endl;
	cin>>opcion;
	switch (opcion)
	{
		case 1: resultado = numero1 + numero2;break;
		case 2: resultado = numero1 - numero2;break;
		case 3: resultado = numero1 * numero2;break;
		case 4: resultado = numero1 / numero2;break;
		default: cout<<"La opcion no es resultado"<<endl;
	}
	cout<<"El resultado es "<<resultado<<endl;
}
