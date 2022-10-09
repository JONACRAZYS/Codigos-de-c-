#include <iostream> 
//Bravo Garin Jonathan Alejandro

/* Programa que identifica si es niño, adolescente, adulto o anciano por la edad */
using namespace std; 
main
(){
	int edad;
	//Escribir en pantalla std::cout = cout
	cout << "Ingresa tu edad correspondiente ";
	cin >> edad;
	if(edad>=0 && edad<=100)
	{
		if(edad>=0 && edad<=12)
		{
			cout << endl << " Eres un niño "<< endl;
		}
		else if(edad>12 && edad<=17)
		{
			cout << endl << " Eres un adolescente "<< endl;
		}
		else if(edad>17 && edad<=80)
		{
			cout << endl << " Eres un adulto "<< endl;
		}
		else
		{
			cout << endl << " Eres un anciano "<< endl;
		}
	}
	else 
	{
		cout << endl << " Edad incorrecta "<< endl;
	}
	cout << " Gracias por usar el programa :)";
}
