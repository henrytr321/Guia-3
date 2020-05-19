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
			cout<<"Puede pasar el examen"<<endl;
	}
	else
	{
		cout<<"Perdera el examen sino estudia"<<endl;
	}
}
