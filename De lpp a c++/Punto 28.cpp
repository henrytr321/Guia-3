#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
main()
{
	
	int base,exponente,resultado;
	
	cout<<"Programa para hallar cualquier potencia de cualquier numero"<<endl;
	cout<<"Digite la base"<<endl;
	cin>>base;
	cout<<"Digite el exponente "<<endl;
	cin>>exponente;
	resultado = pow (base,exponente);
	
	cout<<"El resultado de la operacion es "<<resultado;
	
}
