/*
	
	fecha:04/04/2022
	autor: Jonathan Alejandro Bravo Garin
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Lib22A.h"
using namespace std;

int main()
{
	int bandsex=0, bandcod=0, emplea=0;
	int codigo[10], edad[10];
	string nombre[10], area[10], nombreb;
	char sexo[10];
	int op, op2, op3, mod, posicion=0, encontrado=0;
        int list =0;
	do
	{
		op2=0;
		system("cls");
		cout<< "Weyes en la lista: "<< list<<endl;	
		titulo1("Menu Principal");
		cout<< "Bienvenido a la base de datos"<<endl;
		cout<< "Ingrese la opcion correspondiente a la solicitud: "<<endl<<endl;
		cout<< "1- Ingresar un nuevo empleado"<<endl;
		cout<< "2- Eliminar a un empleado"<<endl;
		cout<< "3- Modificar a un empleado"<<endl;
		cout<< "4- Buscar a un empleado"<<endl;
		cout<< "5- Mostrar lista de empleados"<<endl;
		cout<< "6- Salir del programa"<<endl;
		cout<< "Opcion: ";
		cin>> op;
		switch(op)
		{
			case 1:
				system("cls");
				titulo1("Solicitud de ingreso de nuevo empleado");
				bandcod=0;
				bandsex=0;
				emplea=0;
				if(list<10)
				{
					cout<< "Ingrese el nombre del empleado"<<endl;
					cin>> nombre[list];
					
					while(bandcod!=1 || emplea!=1)  // si el cod es malo  o  el codigo se repite
					{
						cout<< "Ingrese el codigo del empleado -- RANGO [1000 - 9999]"<<endl;
						cin >> codigo[list];
						if(codigo[list]>999 && codigo[list]<10000 )
						{
							bandcod=1;
							for(int f=0; f < list; f++){
								if(codigo[list]==codigo[f])
								{
									cout<< "chupas: "<< bandcod<<endl;
									cout<< "emplea: "<< emplea<<endl;
									cout<< "Ya existe un empleado con este codigo"<<endl;
									emplea=0;
                                                                        bandcod = 0;    // hace que la condicion del while sea tru
								}
                                                        }
                                                        if(emplea == 0) //despues del FOR
                                                            emplea = 1;   //El nuevo codigo no se repitio nunca
						}
						else
						  {
					      		cout<< "FAVOR DE INGRESAR UN CODIGO VALIDO [1000 - 9999]"<<endl;
						  }
					}
						cout<< "chupas: "<< bandcod<<endl;      //??
						cout<< "emplea: "<< emplea<<endl;
					while(bandsex!=1)
					{
						cout<< "Ingrese el sexo del empleado -- SOLO SE INGRESA F o M --"<<endl;
						cin>>sexo[list];
						if(sexo[list]=='F')
						{
							bandsex=1;
						}
						else if(sexo[list]=='M')
						{
							bandsex=1;
						}
						else
							cout<< "Favor de ingresar un sexo valido ( F o M )"<<endl;
					}
					
					cout<< "Ingrese edad del empleado"<<endl;
					cin>> edad[list];       
					cout<< "Seleccione area de trabajo del empleado"<<endl;
					cin>> area[list];
					list++; // aumenta el N de empleados
					system("cls");
				}
				else
				{
					cout<< "La base de datos esta llena"<<endl;
				}
				break;
			case 2:
				do
				{
					system("cls");	
					Eliminar(codigo,edad,nombre,area,sexo,list);
					cout<< "Ingresa 1 para volver al menu principal"<<endl;
					cout<< "Si desea seguir eliminando ingresa otro numero"<<endl;
					cout<< "Opcion: ";
					cin>>op3;
				}while(op3!=1);	
				break;
			case 3:
				do
				{
					system("cls");	
					Modificar(codigo, edad,nombre,area,sexo);
					cout<< "Ingresa 1 para volver al menu principal"<<endl;
					cout<< "Si desea seguir buscando ingresa otro numero"<<endl;
					cout<< "Opcion: ";
					cin>>op3;
				}while(op3!=1);	
				break;
			case 4:
				do
				{
					system("cls");	
					Buscar(codigo, edad,nombre,area,sexo);
					cout<< "Ingresa 1 para volver al menu principal"<<endl;
					cout<< "Si desea seguir modificando ingresa otro numero"<<endl;
					cout<< "Opcion: ";
					cin>>op3;
				}while(op3!=1);	
				break;
			case 5:
				do
				{
					system("cls");
					ImprimirEmpleados(codigo,edad,nombre,area,sexo,list);
					cout<< "Ingresa 1 para volver al menu principal"<<endl;
					cout<< "Opcion: ";
					cin>>op2;
				}while(op2!=1);
				break;			
		}
		cout<< list<<endl;
	}while(op!=6);

        return 0;
}
