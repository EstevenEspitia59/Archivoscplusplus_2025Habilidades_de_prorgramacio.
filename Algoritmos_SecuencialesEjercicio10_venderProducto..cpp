#include<iostream>

using namespace std;

int main(){
	double costo_producto=0, valor_vender=0, porcentaje=0;
	
	do{
		cout<<"Ingresa el costo del producto :";cin>>costo_producto;
		if(costo_producto<=0){
			cout<<"El valor no puede se negativo o cero.\n";
		}else{
			cout<<"Guardado...\n";
		}
	}while(costo_producto<=0);
	
	porcentaje=costo_producto*0.30;
	valor_vender=costo_producto+porcentaje;
	cout<<"\nEl porcentaje que aumenta es :"<<porcentaje;cout<<"\n";
	cout<<"El valor a vender el producto es :"<<valor_vender;
	
	
	
	return 0;
}