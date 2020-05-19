#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

main()
{
	float numero1=0,numero2=1,i,numero3;
	cout<<"Numeros fibonacci"<<endl;
	cout<<numero1<<endl;
	cout<<numero2<<endl;
	for (i=1;i<=98;i++)
	{
		numero3=numero1+numero2;
		cout<<numero3<<endl;
		numero1=numero2;
		numero2=numero3;
	}
}
