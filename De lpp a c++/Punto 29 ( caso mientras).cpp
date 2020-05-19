#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

main()
{
	float gasto,ganancia, valor;
	int opcion, salida = 1;
	cout<<"Programa para calcular ganancia o gasto"<<endl;
	while (salida == 1)
	{
		cout<<"Si es un gasto ingrese 1 \n si es una ganancia 2"<<endl;
		cin>>opcion;
		if (opcion == 1)
		{
			cin>>valor;
			gasto = gasto + valor;
		}
		else if(opcion == 2)
		{
			cin>>valor;
			ganancia = ganancia + valor;
		}
		else
		{
			cout<<"El numero digitado es incorrecto"<<endl;
		}
		cout<<"El gasto total hasta el momento es "<<gasto<<endl;
		cout<<"La ganancia total hasta el momento es "<<ganancia<<endl;
		cout<<"Para finalizar digite 0"<<endl;
		cin>>salida;
	}
	if (gasto>ganancia)
	{
		gasto = gasto - ganancia;
	}
	else
	{
		ganancia = ganancia-gasto;
	}
}
