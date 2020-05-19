#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
using namespace std;

main ()
{
	float valor, valor_total, descuento;
	int cantidad;
	cout<<"Valor de las fotocopias"<<endl;
	cout<<"Digite la cantidad de la fotocopia"<<endl;
	cin>>cantidad;
	
	valor=cantidad*100;
	
	if (cantidad<100 && cantidad>=0)
	{
		valor_total=valor;
	}
	else
	{
		if (cantidad<=200)
		{
			descuento = valor*0.12;
			valor_total =valor - descuento;
		}
		else
		{
			if (cantidad<=400)
			{
				descuento = valor*0.15;
				valor_total =valor - descuento;
			}
			else
			{
				if (cantidad>400)
				{
					descuento = valor*0.18;
					valor_total =valor - descuento;
				}
			}
		}
	}
	cout<<"El valor total es "<<valor_total<<endl;
	return 0;
}
