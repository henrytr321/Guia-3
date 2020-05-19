#include <iostream>
#include <string.h>
using namespace std;


main()
{
	#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void mensaje();
void pedirDatos();
void suma(float numero1,float numero2);
void resta(float numero1,float numero2);
void multiplicacion(float numero1,float numero2);
void division(float numero1,float numero2);
void menu();
float numero1, numero2,resultado;

int main()
{
	int numero1,numero2, resultado,imprimir,opcion;
	cout<<"Seleccione lo que desea hacer"<<endl;
	menu();
	cin>>opcion;
	pedirDatos();
	switch (opcion)
	{
	case 1: suma(numero1,numero2);break;
	case 2: resta(numero1,numero2); break;
	case 3: multiplicacion(numero1,numero2); break;
	case 4: division(numero1, numero2); break;
	}
}
void menu()
{
	cout<<"Suma=1\n Resta=2 \n Multiplicacion=3 \n Division=4"<<endl;
}
void pedirDatos()
{
	cout<<"Digite dos numeros"<<endl;
	cout<<"Digite primer numero"<<endl;
	cin>>numero1;
	cout<<"Digite segundo numero"<<endl;
	cin>>numero2;
	
}

void suma(float x, float y)
{
	resultado=numero1+numero2;
	cout<<"El resultado de la suma es "<<resultado<<endl;
}

void resta(float x, float y)

{
	resultado=numero1-numero2;
	cout<<"El resultado de la resta es "<<resultado<<endl;
}
void multiplicacion(float x, float y)
{
	resultado = numero1 * numero2;
	cout<<"El resultado de la multiplicacion es "<<resultado<<endl;
}
void division(float x, float y)
{
	resultado=numero1/numero2;
	cout<<"El resultado de la division es "<<resultado<<endl;
}
}
