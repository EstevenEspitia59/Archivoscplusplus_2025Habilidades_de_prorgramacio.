#include<iostream>
using namespace std;


int main(){
	string nombre;
	double examen_matematicas=0,tarea_1=0, tarea_2=0,tarea_3=0,promedio_tareas_mat=0,nota_mate=0,examen_fisica=0,
	tarea_1_fisica=0, tarea_2_fisica=0,promedio_tareas_fisica=0,nota_fisica=0,examen_quimica=0,tarea_1_quimica=0,tarea_2_quimica=0,
	tarea_3_quimica=0,promedio_tareas_quimica=0,nota_quimica=0,promedio_general=0;
	cout<<"------------Promedio de asignaturas ------------\n";
	cout<<"Ingresa tu nombre :";getline(cin,nombre);
	
	cout<<"\n------------Matematicas ------------\n";
	cout<<"\nIngresa la nota del examen :";cin>>examen_matematicas;
	cout<<"\ningresa la nota de la tarea 1:";cin>>tarea_1;
	cout<<"\ningresa la nota de la tarea 2:";cin>>tarea_2;
	cout<<"\ningresa la nota de la tarea 3:";cin>>tarea_3;
	promedio_tareas_mat=(tarea_1+tarea_2+tarea_3)/3;
	nota_mate=examen_matematicas*0.90+promedio_tareas_mat*0.10;
	cout<<"\nNota de matematicas ="<<nota_mate;
	
	cout<<"\n------------Fisica------------\n";
	cout<<"\nIngresa la nota del examen :";cin>>examen_fisica;
	cout<<"\ningresa la nota de la tarea 1:";cin>>tarea_1_fisica;
	cout<<"\ningresa la nota de la tarea 2:";cin>>tarea_2_fisica;
	promedio_tareas_fisica=(tarea_1_fisica+tarea_2_fisica)/2;
	nota_fisica=examen_fisica*0.80+promedio_tareas_fisica*0.20;
	cout<<"\nNota de fisica ="<<nota_fisica;
	
	
	cout<<"\n------------Quimica ------------\n";
	cout<<"\nIngresa la nota del examen :";cin>>examen_quimica;
	cout<<"\ningresa la nota de la tarea 1:";cin>>tarea_1_quimica;
	cout<<"\ningresa la nota de la tarea 2:";cin>>tarea_2_quimica;
	cout<<"\ningresa la nota de la tarea 3:";cin>>tarea_3_quimica;
	promedio_tareas_quimica=(tarea_1_quimica+tarea_2_quimica+tarea_3_quimica)/3;
	nota_quimica=examen_quimica*0.85+promedio_tareas_quimica*0.15;
	cout<<"\nNota de Quimica="<<nota_quimica;
	
	promedio_general=(nota_mate+nota_fisica+nota_quimica)/3;
	cout<<nombre<<"\n Tu Promedio general de las 3 materias :"<<promedio_general;
	return 0;
}