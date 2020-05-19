#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

main()
{
	float mayor,menor,numero1;
	
	cout<<"Programa para hallar numero mayor o menor de 20 numeros"<<endl;
	
	for (int i=1;i<=5;i++ )
	{
		cout<<"Digite el numero"<<endl;
		
		cin>>numero1;
		if (numero1>=mayor)
		{
			mayor=numero1;
		}
		else
		{
			menor=numero1;
		}
	}
	cout<<"El numero mayor es "<<mayor<<endl;
	cout<<"El numero menor es "<<menor<<endl;
}
