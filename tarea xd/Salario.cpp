//Bravo Garin Jonathan Alejandro
#include <iostream> 
#include "libreria.h"
/* Programa que calcula el salario diario y semanal de un trabajador dependiendo su puesto de trabajo */
using namespace std; 
main()
{
	int horas, salario, t;
	
	Titulo();
	switch(Eleccion())
	{
		case 1:
			CalculoSalario(35);
		break;
		case 2:
			CalculoSalario(50);
		break;
		case 3:
			CalculoSalario(80);
		break;
		case 4:
			CalculoSalario(120);
		break;
		case 5:
			CalculoSalario(150);
		break;
	}
	cout << " Gracias por usar el programa :)";
}
