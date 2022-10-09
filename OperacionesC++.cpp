#include <iostream> 
//Bravo Garin Jonathan Alejandro
/* Programa que realiza operaciones matematicas con dos numeros solicitados */
using namespace std; 
main
(){//se conocen como bloque de codigo {}
	int num1, num2, sum, rest, mult, div, res;
	//Escribir en pantalla std::cout = cout
	cout << "Ingresa un numero ";
	cin >> num1;
	cout << "Ingresa otro numero ";
	cin >> num2;
	sum = num1+num2;
	rest = num1-num2;
	mult = num1*num2;
	div = num1/num2;
	res = num1%num2;
	cout << endl << " El resultado de la suma es "<< sum<< endl; 
	cout << endl << " El resultado de la resta es "<< rest<< endl;
	cout << endl << " El resultado de la multiplicacion es "<< mult<< endl;
	cout << endl << " El resultado de la division es "<< div<< endl;
	cout << endl << " El resultado del residuo es "<< res<< endl;
	cout << " Gracias por usar el programa :)";
}
