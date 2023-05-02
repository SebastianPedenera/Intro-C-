/*
	primeros pasos en el lenguaje C++
*/ 

#include<iostream> 	// Libreria basica
#include <stdio.h> 	// libreria basica
#include <string>	// Libreria string

using namespace std; //usar las opciones de entrada y salida (cout y cin) 

int main(){
	
	cout<< "¡¡ PRIMEROS PASOS C++ !!"<<endl;  // <<endl es salto de linea
	cout<< "------------------\n"; // terminar en \n es igual a enter o salto de linea
	
	/// Hola mundo con la opcion Char
	char saludo[100]= "Hola mundo! \n"; //uso de char con un vector de 100 caracteres
	printf(saludo); // imprime por pantalla
	
	/// Hola mundo con la opcion String
	string saludo2= "Hola mundo!! \n"; //define una variable y la coloca en un vector de 100 caracteres
	printf(saludo); // imprime por pantalla
	
	cout<< "------------------\n";
	// Definiendo las variables
	int entero = 12;
	float flotante = 12.5;
	double mayor = 125.545;
	char letra = 'a';
	bool calor = false;
	const int cero = 0;
	
	// cout.precison(2); //redondea a dos numeros despues de la coma
	
	// Imprimiendo en pantalla las variables
	cout<<"El entero es: "<<entero<<endl;
	cout<<"El float es: "<<flotante<<endl;
	cout<<"El double es: "<<mayor<<endl;
	cout<<"El char es: "<<letra<<endl;
	cout<<"Hace calor? "<<calor<<endl;
	cout<<"La constante es: "<<cero<<endl;
	cout<< "------------------\n";
	
	// Como intruducir un valor a la variable
	double n1,n2,suma=0,resta=0,mult=0,div=0;
	cout<<"ingrese el primer numero: \n";
	cin>>n1; // una version de introducir el valor
	cout<<"ingrese el segundo numero: \n"; cin>>n2; // se declara todo en una linea
	suma = n1+n2;
	resta = n1-n2;
	mult = n1*n2;
	div = n1/n2;
	cout<<"\n La suma es: "<<suma<<"\n la resta es:"<<resta<<endl;
	cout<<" La multiplicacion es: "<<mult<<"\n la division es:"<<div<<endl;
	cout<< "------------------\n";
	// 
	
	return 0;
}
