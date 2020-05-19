#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

main()
{
	int opcion, horas;
	cout<<"Programa para saber si va a pasar el examen"<<endl;
	cout<<"Ha estudiado mucho \n si = 1 \n no = 0"<<endl;
	cin>>opcion;
	if (opcion == 1 )
	{
		cout<<"Cuantas horas estudio"<<endl;
		cin>>horas;
		if (horas>4)
		{
			cout<<"Pasara en un 50% el examen con esas "<<horas<<" horas, ";
			cout<<"pero puede aumentarlo estudiando mas horas"<<endl;
		} 
		else
		{
			cout<<"Puede pasar el examen estudiando más horas"<<endl;
		}
	}
	else
	{
		cout<<"Perdera el examen sino estudia"<<endl;
	}
}
