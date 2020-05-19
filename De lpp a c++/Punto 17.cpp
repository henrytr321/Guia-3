#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace  std;

main()
{
	int nota;
	cout<<"Programa para saber si un alumno pasa o no"<<endl;
	cout<<"Digite su nota"<<endl;
	cin>>nota;
	if (nota>65 && nota<100)
	{
		cout<<"Paso la materia con "<<nota<<endl;
	}
	else
	{
		if (nota>0 && nota<100)
		{
			cout<<"Lo siento debe repetir la materia"<<endl;
		}
		else 
		{
			cout<<"La nota digitada es incorrecta"<<endl;
		}
	}
}
