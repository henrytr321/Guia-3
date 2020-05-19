#include <iostream>
using namespace std;

main()
{
	int anoencurso, diacurso, diasvividos, mescurso;
	int anonacimiento, mesnacimiento,dianacimiento;
	
	cout<<"Digite el ano en curso"<<endl;
	cin>>anoencurso;
	
	cout<<"Digite el mes en curso"<<endl;
	cin>>mescurso;
	
	cout<<"Digite el dia en curso"<<endl;
	cin>>diacurso;
	
	cout<<"Digite el ano nacimiento"<<endl;
	cin>>anonacimiento;
	
	cout<<"Digite el mes nacimiento"<<endl;
	cin>>mesnacimiento;
	
	cout<<"Digite el dia nacimiento"<<endl;
	cin>>dianacimiento;
	
	diasvividos = (((anoencurso-anonacimiento)*365)+(diacurso-dianacimiento)+((mescurso-mesnacimiento)*30));
	
	cout<<"Sus dias vividos son: "<<diasvividos<<endl;
	
}
