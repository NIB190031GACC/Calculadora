
#include <iostream>
#include <cmath>

using namespace std;

//Global Variables 

double resultado_2, u, v = 0;
int resultado, r, s, operacion, repetirCalculadora = 0;

//Function Declaration

int suma(int a, int b);
int resta(int a, int b);
double multiplicacion(double a, double b);
double division(double a, double b);
double potencia(double a, double b);
double radicacion(double a, double b);
void mensaje_inicial();
void Suma();
void Resta();
void Multiplicacion();
void Division();
void Potenciacion();
void Radicacion();
void Opcion_Invalida();

//Main Function

int main()
{
	do 
	{
		mensaje_inicial();

		switch (operacion) 
		{
		case 1:
			Suma();
			break;
		case 2:
			Resta();
			break;
		case 3:
			Multiplicacion();
			break;
		case 4:
			Division();
			break;
		case 5:
			Potenciacion();
			break;
		case 6:
			Radicacion();
			break;
		default:
			Opcion_Invalida();

		}
		cout << "Desea realizar otra operacion matematica" << endl;
		cout << "Ingrese 1 para Si o 2 para No " << endl;
		cin >> repetirCalculadora;
	} while (repetirCalculadora == 1);
	//cin.get();
}

//Function Definition

void mensaje_inicial()
{
	cout << "Este programa realiza las 6 operaciones basicas matematicas" << endl;
	cout << "\n---Instrucciones de uso--- " << endl;
	cout << "\nSeleccione la operacion matematica deseada a aplicar: " << endl;
	cout << "\nPresione 1 para Sumar." << endl;
	cout << "Presione 2 para Restar." << endl;
	cout << "Presione 3 para Multiplicar." << endl;
	cout << "Presione 4 para Dividir." << endl;
	cout << "Presione 5 para elevar a una potenciar enesima." << endl;
	cout << "Presione 6 para obtener una raiz enesima." << endl;
	cin >> operacion;
	cout << "Has ingresado la opcion " << operacion << endl;
}
int suma(int a, int b)
{
	return a + b;
}
int resta(int a, int b)
{
	return a - b;
}
double multiplicacion(double a, double b)
{
	return a * b;
}
double division(double a, double b)
{
	return a / b;
}
double potencia(double a, double b)
{
	return pow(a, b);
}
double radicacion(double a, double b)
{
	return pow(a, 1.0 / b);
}
void Suma()
{
	cout << "\nAcontinuacion se sumaran dos numeros:" << endl;
	cout << "\nIngresa el primer numero. " << endl;
	cin >> r;
	cout << "Ingresa el segundo numero. " << endl;
	cin >> s;
	resultado = suma(r, s);
	cout << "\nEl resultado de la suma es: " << resultado << endl;
}
void Resta()
{
	cout << "\nAcontinuacion se restaran dos numeros:" << endl;
	cout << "\nIngresa el minuendo. " << endl;
	cin >> r;
	cout << "Ingresa el sustraendo. " << endl;
	cin >> s;
	resultado = resta(r, s);
	cout << "\nEl resultado de la diferencia es: " << resultado << endl;
}
void Multiplicacion()
{
	cout << "\nAcontinuacion se multiplicaran dos numeros:" << endl;
	cout << "Puedes ingresar numeros enteros o flotantes." << endl;
	cout << "\nIngresa el primer factor del producto." << endl;
	cin >> u;
	cout << "Ingresa el segundo factor del producto." << endl;
	cin >> v;
	resultado_2 = multiplicacion(u, v);
	cout << "\nEl resultado de la muliplicacion es: " << resultado_2 << endl;
}
void Division()
{
	cout << "\nAcontinuacion se dividiran dos numeros:" << endl;
	cout << "\nIngresa el dividendo." << endl;
	cin >> u;
	cout << "Ingresa el divisor." << endl;
	cin >> v;
	resultado_2 = division(u, v);
	cout << "\nEl cociente de la division es: " << resultado_2 << endl;
}
void Potenciacion()
{
	cout << "\nAcontinuacion se realizara la operacion matematica de potenciacion:" << endl;
	cout << "\nIngresa la base de la potencia. " << endl;
	cin >> u;
	cout << "Ingresa el exponente de la base." << endl;
	cin >> v;
	cout << "Has ingresado que deseas elevar la Base " << u << " a la potencia " << v << endl;
	resultado_2 = potencia(u, v);
	cout << "\nEl resultado de la potenciacion es: " << resultado_2 << endl;
}
void Radicacion()
{
	cout << "\nAcontinuacion se realizara la operacion matematica de radicacion:" << endl;
	cout << "\nIngresa la cantidad subradical." << endl;
	cin >> u;
	cout << "Ingresa el superindice de la raiz." << endl;
	cin >> v;
	cout << "Has ingresado que deseas obtener la raiz " << v << " de " << u << endl;
	resultado_2 = radicacion(u, v);
	cout << "\nEl resultado de la radicacion es " << resultado_2 << endl;
}
void Opcion_Invalida()
{
	cout << "\nLa cual no es una opcion valida en esta calculadora." << endl;
}