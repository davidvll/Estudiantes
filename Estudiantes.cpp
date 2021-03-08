#include<iostream>

using namespace std;

struct Estudiante{
	int *codigo;
	string *nombre;
};

int main(){
Estudiante estudiante;
int fila=0,columna=0,**pm_notas;

cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>fila;	
cout<<"Cuantas Notas Desea Ingresar: ";
cin>>columna;
estudiante.codigo = new  int [fila];
estudiante.nombre = new string[fila];	
pm_notas = new  int *[fila];
for (int i=0;i<fila;i++){
pm_notas[i] = new int[columna]; 	
}
cout<<"--------------Ingrese Notas--------------"<<endl;
for (int i=0;i<fila;i++){
	cout<<"Codigo: ";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<"Nombre: ";
	getline(cin,estudiante.nombre[i]);
for (int ii=0;ii<columna;ii++){
	cout<<"Ingrese Nota " <<ii + 1<< ": ";
	cin>>*(*(pm_notas+i)+ii);
	}
	cout<<"------------------------------------"<<endl;
}
	cout<<"--------------Mostrar Notas--------------"<<endl;
for (int i=0;i<fila;i++){
	cout<<"Codigo: " <<estudiante.codigo[i]<< " Nombre: " <<estudiante.nombre[i]<< "." <<endl;
for (int ii=0;ii<columna;ii++){
	cout<<"Nota [" <<ii + 1<< "]: " <<*(*(pm_notas+i)+ii)<<endl;
	}
	cout<<"------------------------------------"<<endl;
}
// Liberar el espacio reservado en memoria
for (int i=0;i<fila;i++){
	delete [] pm_notas[i];
}

delete [] pm_notas;

	system("PAUSE");
	return 0;
	
	
}

