#include<iostream>
using namespace std;


int main(){
	float pesos= 0,dolares=0, taza_intercambio=0;
	cout<<"Convertir pesos a dolares.\n";
	do{
		cout<<"Ingresa la cantidad de pesos$ COP :";cin>>pesos;cout<<"\n";
		if(pesos<=0){
			cout<<"Valor negativo o cero.\n";
		}else{
			cout<<"Guardado...\n";
		}
	}while(pesos<=0);
	
	do{
		cout<<"Ingresa la taza de invercambio de hoy$ USD :";cin>>taza_intercambio;
		if(pesos<=0){
			cout<<"Valor negativo o cero.";
		}else{
			cout<<"Guardado...\n";
		}
	}while(pesos<=0);
	
	dolares=pesos/taza_intercambio;
	cout<<pesos<<" pesos colombianos son:"<<dolares<<" dolares";
	
	
	
	return 0;
}