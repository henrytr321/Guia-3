#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

main()
{
	float numero1,numero2, suma,resta,multiplicacion,division;
	int opcion;
	cout<<"El siguiente programa es una calculadora"<<endl;
	cout<<"Digite lo que quiere hacer a continuacon"<<endl;
	cout<< "1.digite uno para suma \n 2.Digite dos para resta \n 3.Digite tres para multiplicacion \n"
	"4. Digite cuatro para division"<<endl;
	cin>>opcion;
	cout<<"Digite El primer numero"<<endl;
	cin>>numero1;
	cout<<"Digite el segundo numero"<<endl;
	cin>>numero2;
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	cout<<"El resultado de la suma es: "<<suma<<endl;
	cout<<"El resultado de la resta es: "<<resta<<endl;
	cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
	cout<<"El resultado de la division es: "<<division<<endl;
}
