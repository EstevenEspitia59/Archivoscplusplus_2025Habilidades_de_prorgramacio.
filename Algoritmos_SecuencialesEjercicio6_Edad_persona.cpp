#include<iostream>

using namespace std;

int main(){
	int fecha_nacimiento=0, edad_total=0;
	
	cout<<"----Calcula tu edad -----\n";
	do{
		cout<<"Ingresa tu fecha de nacimiento :"; cin>>fecha_nacimiento;
		if(fecha_nacimiento<=0){
			cout<<"Valor negativo o cero\n";
		}else if(fecha_nacimiento<1900){
			cout<<"Demasiada longevidad.\n";
		}else if(fecha_nacimiento>2025){
			cout<<"fecha mayor a la actual\n";
		}
			
	}while(fecha_nacimiento<=0||fecha_nacimiento<1900||fecha_nacimiento>2025);
	edad_total=2025-fecha_nacimiento;                
	cout<<"Tu edad es :"<<edad_total;
	
	
	return 0;
}