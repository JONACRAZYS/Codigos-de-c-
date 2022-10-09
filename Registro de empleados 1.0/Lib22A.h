/*
Libreria Personal

*/

#include <iostream>

using namespace std;

//variables globales
int a, b;
int Options();

void ImprimirEmpleados(int codigo[10],int edad[10],string nombre[10],string area[10],char sexo[10]);
void Buscar(int codigo[10],int edad[10],string nombre[10],string area[10],char sexo[10]);
void Modificar(int codigo[10],int edad[10],string nombre[10],string area[10],char sexo[10]);
//con prototipo Solo se pone en memoria cuando la mandas llamar
void IngresaTrabajador(int *list);
int suma();
void titulo1(string s);
void abccliente();
void ListaProducto(string pro[20]);
//sin prototipo la funcion siempre esta disponible en memoria
void Titulo()
{
	cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<< "Explicacion de funciones"<<endl;
	cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
//se escribe el codigo de las funciones con prototipo
int suma()
{
	return a+b;
}
void titulo1(string s)
{
	cout<< "Base de datos Empresa --SOLANIN--"<<endl;
	cout<< "---" << s << "---"<<endl;
	cout<< "Autor: Bravo Garin Jonathan Alejandro ;-;"<<endl<<endl;
}

void menuabccliente()
{
	cout<< "ABC Clientes"<<endl;
	cout<< "1.- Alta de clientes"<<endl;
	cout<< "2.- Baja de clientes"<<endl;
	cout<< "3.- Cambio de clientes"<<endl;
}
void Buscar(int codigo[10],int edad[10],string nombre[10],string area[10],char sexo[10])
{
	string nombreb;
	int posicion=0;
	int encontrado=0;
	cout<< "Ingresa el nombre del empleado: "<<endl;
	cin>> nombreb;
	for(int f =0;f<10;f++)
	{
		if(nombre[f]==nombreb)
		{
		encontrado=1;//encontrar el elemento
		posicion = f;//posicion donde se encuentra el cliente
		}
	}
	if(encontrado!=0)
	{	
		cout << "El empleado "<< nombreb <<" ha sido encontrado con exito "<<endl<<endl;
		cout<< "Informacion del empleado: "<<endl<<endl;
		cout << "Nombre: "<< nombre[posicion]<<endl;
		cout << "Codigo: "<< codigo[posicion]<<endl;
		cout << "Sexo: "<< sexo[posicion]<<endl;
		cout << "Edad: "<< edad[posicion]<<endl;
		cout << "Area: "<< area[posicion]<<endl<<endl;
	}
	else 
		cout << "El empleado "<< nombreb <<" no existe "<<endl<<endl;
}

void ImprimirEmpleados(int codigos[10],int edades[10],string nombres[10],string areas[10],char sexos[10], int list)
{
	cout<< "Lista de empleados Empresa --SOLANIN--"<<endl<<endl;
	cout<< "Nombre \t Codigo \t Sexo \t Edad \t Area"<<endl;
	for(int f=0;f<list;f++)
	{
		cout<<nombres[f]<<"\t"<<codigos[f]<<"\t"<<sexos[f]<<"\t"<<edades[f]<<"\t"<<areas[f]<<endl;
	}
	cout<<"\n";	
}

void Modificar(int codigo[10],int edad[10],string nombre[10],string area[10],char sexo[10])
{
	int mod, auxcod, auxedad;
	char auxsex;
	string nombreb, auxn, auxa;
	int posicion=0;
	int encontrado=0;
	cout<< "Ingresa el nombre del empleado: "<<endl;
	cin>> nombreb;
	for(int f =0;f<10;f++)
	{
		if(nombre[f]==nombreb)
		{
		encontrado=1;//encontrar el elemento
		posicion = f;//posicion donde se encuentra el cliente
		}
	}
	if(encontrado!=0)
	{	
		cout << "El empleado "<< nombreb <<" ha sido encontrado con exito "<<endl<<endl;
		cout<< "Informacion del empleado: "<<endl<<endl;
		cout << "Nombre: "<< nombre[posicion]<<endl;
		cout << "Codigo: "<< codigo[posicion]<<endl;
		cout << "Sexo: "<< sexo[posicion]<<endl;
		cout << "Edad: "<< edad[posicion]<<endl;
		cout << "Area: "<< area[posicion]<<endl<<endl;
		cout<< "Seleccione la opcion a modificar"<<endl;
		cout<< "1- Nombre"<<endl;
		cout<< "2- Codigo"<<endl;
		cout<< "3- Sexo"<<endl;
		cout<< "4- Area"<<endl;
		cin>>mod;
		switch(mod)
		{
		case 1:
			cout<< "Ingrese el nuevo nombre del empleado: "<<endl;
			cin>>auxn;
			nombre[posicion]= auxn;
			cout<<"\n"<< "El nombre ha sido modificado con exito "<<endl;
			break;
		case 2:	
			cout<< "Ingrese el nuevo codigo del empleado: "<<endl;
			cin>>auxcod;
			codigo[posicion]= auxcod;
			cout<<"\n"<< "El codigo ha sido modificado con exito "<<endl;
			break;
		case 3:	
			cout<< "Ingrese el sexo del empleado: "<<endl;
			cin>>auxsex;
			sexo[posicion]= auxsex;
			cout<<"\n"<< "El sexo ha sido modificado con exito "<<endl;	
			break;
		case 4:		
			cout<< "Ingrese la nueva area de trabajo del empleado: "<<endl;
			cin>>auxa;
			area[posicion]= auxa;
			cout<<"\n"<< "La area de trabajo ha sido modificado con exito "<<endl;
			break;
		}
	}
	else 
		cout << "El empleado "<< nombreb <<" no existe "<<endl<<endl;
}

void Eliminar(int codigo[10],int edad[10],string nombre[10],string area[10],char sexo[10],int& list)
{
	string nombreb;
	int posicion=0;
	int encontrado=0;
	cout<< "Ingresa el nombre del empleado a eliminar: "<<endl;
	cin>> nombreb;
	for(int f =0;f<10;f++)
	{
		if(nombre[f]==nombreb)
		{
		encontrado=1;//encontrar el elemento
		posicion = f;//posicion donde se encuentra el cliente
		}
	}
	if(encontrado!=0)
	{	
		cout << "El empleado "<< nombreb <<" ha sido eliminado con exito "<<endl<<endl;
		for(int f=0;f<list;f++)
		{
			nombre[posicion+f]=nombre[posicion+f+1];
			codigo[posicion+f]=codigo[posicion+f+1];
			sexo[posicion+f]=sexo[posicion+f+1];
			edad[posicion+f]=edad[posicion+f+1];
			area[posicion+f]=area[posicion+f+1];
			//codigo[posicion]=0;
			//sexo[posicion]="";
			//area[posicion]"0";
		}
		list--;
	}
	else 
		cout << "El empleado "<< nombreb <<" no existe "<<endl<<endl;
}
int Options()
{
	
}
