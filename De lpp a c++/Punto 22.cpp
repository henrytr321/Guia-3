#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
using namespace std;

main()
{
	int numero, i;
	cout<<"Programa para los numeros descendentes hasta el 50"<<endl;
	cout<<"Digite el numero par"<<endl;
	cin>>numero;
	while (numero>=50)
	{
		cout<<numero<<endl;
		numero=numero-2;
	}
	return 0;
}
