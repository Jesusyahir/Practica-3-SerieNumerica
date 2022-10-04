#include "Serie.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * arg[]){
	
	int Limite,opc,n1,salir=1;
	do{
		Serie Sr(n1);
		cout<<"Programa para saber la sucesion numerica"<<endl;
		cout <<"Sucession numerica en Iterativo y Recursivo"<<endl;
		cout<<"Limite de la sucession numerica"<<endl;
		cin>>Limite;
		cout<<"Seleccione una opcion del menu por favor"<<endl;
		cout<<"1- Sucession numerica en Recursivo"<<endl;
		cout<<"2- Sucession numerica en Iterativo"<<endl;
		cin>>opc;
	switch (opc){
		case 1:
				cout<<"Sucession Recursiva"<<endl;
			for (int i=1;i<=Limite; i++)
			cout<<Sr.CalcularSerieRecursiva (i)<<"\t";
			break;
		case 2:
				cout<<"Sucession Iterativo"<<endl;
				Sr.CalcularSerieIterativa (Limite);
			break;
			default:
		cout<<"Error ... Porfavor seleccione una opcion que se muestra"<<endl;
	}
		cout<<"¿Desea continuar con el programa?"<<endl;
		cout<<"Si es asi por favor presione el numero 1"<<endl;
		cout<<"No entonces por favor presione cualquier numero"<<endl;
		cin>>salir;
	}while(salir == 1);
	
	getchar();
	system("pause");
	return 0;
}
