#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

main()
{
	float faren=0,celcius;
	cout<<"Programa para cambiar la temperatura de f a celcius"<<endl;
	cout<<"Solo se pueden leer las temperaturas hasta 999"<<endl;
	do
	{	
		cout<<"Digite la temperatura en farenheit"<<endl;
		cin>>faren;
		celcius = (faren-32)*0.5555555;
		cout<<"El resultado es "<<celcius<<"° celcius"<<endl;
	}while (faren<999);
}
