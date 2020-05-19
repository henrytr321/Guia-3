#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

main ()
{
	int nota,serie,cant_notas, promedio,maxima,minima,pasar;
	float resultado,total_notas;
	int i=1;
	cout<<"Programa para hallar el promedio y con cualquier cantidad de notas"<<endl;
	cout<<"Digite la nota maxima y minima que se puede tener en numeros enteros"<<endl;
	cout<<"Ingrese la nota minima para pasar el semestre"<<endl;
	cin>>pasar;
	cout<<"Nota maxima"<<endl;
	cin>>maxima;
	cout<<"Nota minima"<<endl;
	cin>>minima;
	cout<<"Ingrese la cantidad de notas que tiene"<<endl;
	cin>>serie;
	for (i=-1; i <= serie; i++)
	{
		cout<<"Ingrese la nota"<<endl;
		cin>>nota;
		if (nota <= maxima)
		{
			if (nota >= minima)
			{
			total_notas = total_notas + nota;
			i=i+1;
			}
		}
		
		else
		{
			cout<<"La nota es incorrecta "<<nota<<endl;
		}
		
	}
	resultado = total_notas/serie;
	
	if (resultado >= pasar)
	{
		cout<<"Pasa la materia con "<<resultado<<endl;
	}
	else
	{
		cout<<"Tiene que recuoerar la materia"<<resultado<<endl;
	}
}
