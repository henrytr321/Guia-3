	#include <iostream>
	#include <math.h>
	#include <stdio.h>
	#include <string.h>
	using namespace std;

	main()
	{
		int opcion;
		cout<<"Ingrese el numero"<<endl;
		cin>>opcion;
		switch (opcion)
		{
			case 1:cout<<"Uno"<<endl; break;
			case 2:cout<<"Dos"<<endl; break;
			case 3:cout<<"Tres"<<endl; break;
			case 4:cout<<"Cuatro"<<endl; break;
			case 5:cout<<"Cinco"<<endl; break;
			case 6:cout<<"Seis"<<endl; break;
			case 7:cout<<"Siete"<<endl; break;
			case 8:cout<<"Ocho"<<endl; break;
			case 9:cout<<"Nueve"<<endl; break;
			case 10:cout<<"Diez"<<endl; break;
			default: cout<<"No esta dentro del rango de 1-10"<<endl;break;
		}
	
	}
