#include<iostream>
using namespace std;


int main(){
	double capital_invertir=0, inversion=0, inversion_final=0;
	int mes=2, cantidad_meses;
	
	cout<<"Inversion de capital en el Banco \n";
	cout<<"ingresa el capital a invertir ";cin>>capital_invertir;cout<<"\n";
	do{
		cout<<"Ingresa la cantidad de meses de tu inversion :"	;cin>>cantidad_meses;
		if(cantidad_meses<=0){
			cout<<"Solo numeros positivos.\n";
		}else if(cantidad_meses>60){
			cout<<"Exedes el tiempo maximo de inversion!.\n";
		}
	}while(cantidad_meses<=0||cantidad_meses>=60);
	

	inversion = (capital_invertir*(mes*(cantidad_meses)))/100;
	inversion_final=inversion+capital_invertir;
	cout<<"Tus ganancias por la inversion de "<<capital_invertir <<" con "<<cantidad_meses<<"Meses es :"<<inversion_final ;
	
	return 0;
}