/*
Libreria Personal

*/

#include <iostream>

using namespace std;

//variables globales
int Eleccion();
int suma();
int CalculoSalario(int pago);
void SalarioNuevo(int *salario);
void Titulo()
{
	cout<< "Bienvenido al programa de calculo de Salarios"<<endl;
	cout<< "Version 2.0"<<endl;
	cout<< "Creado por: Bravo Garin Jonathan Alejandro"<<endl;
}

int Eleccion()
{
	int op;
	cout << "Ingresa tu puesto de trabajo "<< endl;
	cout << "1 para Intendencia "<< endl;
	cout << "2 para Asistente "<< endl;
	cout << "3 para Administrativo "<< endl;
	cout << "4 para Directivo "<< endl;
	cout << "5 para Gerente "<< endl;
	cin >> op;
	return op;
}

int CalculoSalario(int pago)
{
	int horas, sal;
	cout << "Ingresa horas trabajadas "<< endl;
	cin >> horas;
	sal= horas*pago;
	cout << endl << " Tu salario a cobrar por dia es de "<< sal<< endl;
	SalarioNuevo(&sal);
	cout << endl << " Tu salario a cobrar por semana es de "<< sal<< endl;	
}

void SalarioNuevo(int *salario)
{
	*salario= *salario * 7;
}




