#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

main()
{
	int num_hombre, num_mujeres,total_personas,porce_hombre,porce_mujeres;
	cout<<"Programa para hallar el porcentaje de hombres y mujeres"<<endl;
	cout<<"Digite el numero de hombres"<<endl;
	cin>>num_hombre;
	cout<<"Digite el numero de mujeres"<<endl;
	cin>>num_mujeres;
	total_personas = num_hombre + num_mujeres;
	porce_hombre = (num_hombre*100)/total_personas;
	porce_mujeres = (num_mujeres*100)/total_personas;
	cout<<"El total de personas es "<<total_personas<<endl;
	cout<<"El porcentaje de hombres es "<<porce_hombre<<"%"<<endl;
	cout<<"El porcentaje de mujeress es "<<porce_mujeres<<"%"<<endl;
}
