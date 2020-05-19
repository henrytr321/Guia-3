	#include <iostream>
	#include <math.h>
	#include <stdio.h>
	#include <string.h>
	using namespace std;

main()
{
	int mes;
	cout<<"Seleccione el mes que desea en numero"<<endl;
	cin>>mes;
	 switch(mes)
	 {
	 	case 1: cout<<"El mes es Enero y tiene "<<27<<" Dias habiles"<<endl;break;
	 	case 2: cout<<"El mes es Febrero y tiene "<<24<<" Dias habiles"<<endl;break;
	 	case 3: cout<<"El mes es Marzo y tiene "<<20<<" Dias habiles"<<endl;break;
	 	case 4: cout<<"El mes es Abril y tiene "<<22<<" Dias habiles"<<endl;break;
	 	case 5: cout<<"El mes es Mayo y tiene "<<22<<" Dias habiles"<<endl;break;
	 	case 6: cout<<"El mes es Junio y tiene "<<19<<" Dias habiles"<<endl;break;
	 	case 7: cout<<"El mes es Julio y tiene "<<22<<" Dias habiles"<<endl;break;
	 	case 8: cout<<"El mes es Agosto y tiene "<<20<<" Dias habiles"<<endl;break;
	 	case 9: cout<<"El mes es Sebtiembre y tiene "<<21<<" Dias habiles"<<endl;break;
	 	case 10: cout<<"El mes es Octubre y tiene "<<22<<" Dias habiles"<<endl;break;
	 	case 11: cout<<"El mes es Noviembre y tiene "<<19<<" Dias habiles"<<endl;break;
	 	case 12: cout<<"El mes es Diciembre y tiene "<<21<<" Dias habiles"<<endl;break;
	}
}
