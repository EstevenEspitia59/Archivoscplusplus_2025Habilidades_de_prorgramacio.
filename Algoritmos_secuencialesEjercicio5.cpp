#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int numero_mujeres=0, numero_hombres=0, total_personas=0;
	double total_mujeres=0,total_hombres=0;
	do{
		cout<<"Ingresa el numero de mujeres :";cin>>numero_mujeres;
		if(numero_mujeres<=0){
			cout<<"Este dato no debe ser 0 o menor\n";
		}else{
			cout<<"Guardado...\n\n";
		}	
	}while(numero_mujeres<=0);
	do{
		cout<<"Ingresa el numero de hombres :";cin>>numero_hombres;
		if(numero_hombres<=0){
			cout<<"Este dato no debe ser 0 o menor\n";
		}else{
			cout<<"Guardado...\n\n";
		}
			
	}while(numero_hombres<=0);
	
	total_personas=numero_mujeres+numero_hombres;
	
	total_hombres=(static_cast<double>(numero_hombres)*100)/total_personas;
	total_mujeres=(static_cast<double>(numero_mujeres)*100)/total_personas;
	
	cout<<"Total estudiantes :"<<total_personas;cout<<"\n";
	cout<<"El porcentaje de hombres es "<<total_hombres<<"%";cout<<"\n";
	cout<<"El porcentaje de mujeres es "<<total_mujeres<<"%";
	
	
	return 0;
}