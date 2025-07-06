#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double presupuesto_anual=0, presupuesto_ginecologia=0, presupuesto_traumatologia=0, presupuesto_pediatria=0;
	
	
	do{
		cout<<"Ingresa el presupuesto anual del hospital : ";cin>>presupuesto_anual;
		if(presupuesto_anual<=0){
			cout<<"Numero negativo o cero, please try again...\n";
		}
	}while(presupuesto_anual<=0);
	
	presupuesto_ginecologia=presupuesto_anual*0.40;
	presupuesto_traumatologia=presupuesto_anual*0.30;
	presupuesto_pediatria=presupuesto_anual*0.30;
	
	
	cout<<"presupuesto_ginecologia "<<presupuesto_ginecologia;cout<<"\n";
	cout<<"presupuesto_traumatoligia "<<presupuesto_traumatologia;cout<<"\n";
	cout<<"presupuesto_pediatria "<<presupuesto_pediatria;
	
	return 0;
}