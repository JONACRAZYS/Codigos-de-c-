//Bravo Garin Jonathan Alejandro
#include <iostream> 
/* Programa que calcula el salario de un trabajador */
using namespace std; 
main()
{
	int horas, salario, t;
	
	cout << "Ingresa tu puesto de trabajo "<< endl;
	cout << "1 para Intendencia "<< endl;
	cout << "2 para Asistente "<< endl;
	cout << "3 para Administrativo "<< endl;
	cout << "4 para Directivo "<< endl;
	cout << "5 para Gerente "<< endl;
	cin >> t;
	switch(t)
	{
		case 1:
			cout << "Ingresa horas trabajadas "<< endl;
			cin >> horas;
			salario= horas*35;
		break;
		case 2:
			cout << "Ingresa horas trabajadas "<< endl;
			cin >> horas;
			salario= horas*50;
		break;
		case 3:
			cout << "Ingresa horas trabajadas "<< endl;
			cin >> horas;
			salario= horas*80;
		break;
		case 4:
			cout << "Ingresa horas trabajadas "<< endl;
			cin >> horas;
			salario= horas*120;
		break;
		case 5:
		cout << "Ingresa horas trabajadas "<< endl;
			cin >> horas;
			salario= horas*150;
		break;
	}
	cout << endl << " Tu salario a cobrar es de "<< salario<< endl; 
	cout << " Gracias por usar el programa :)";
}
