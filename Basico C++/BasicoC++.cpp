/*
	primeros pasos en el lenguaje C++
*/ 

#include<iostream>

using namespace std;

int main(){
	
	cout<< "¡¡ PRIMEROS PASOS C++ !!"<<endl;  // <<endl es salto de linea
	cout<< "Tipo de datos en C++\n"; // terminar en \n es igual a enter o salto de linea
	
	// Definiendo las variables
	int entero = 12;
	float flotante = 12.5;
	double mayor = 125.545;
	char letra = 'a';
	
	// Imprimiendo en pantalla las variables
	cout<<"El entero es: "<<entero<<endl;
	cout<<"El float es: "<<flotante<<endl;
	cout<<"El double es: "<<mayor<<endl;
	cout<<"El char es: "<<letra<<endl;	
	
	// Como intruducir un valor a la variable
	
	double n1,n2,suma=0,resta=0,mult=0,div=0;
	
	cout<<"ingrese dos numeros: \n"; cin>>n1>>n2;
	
	suma = n1+n2;
	resta = n1-n2;
	mult = n1*n2;
	div = n1/n2;
	
	cout<<"\n La suma es: "<<suma<<"\n la resta es:"<<resta<<endl;
	cout<<"\n La multiplicacion es: "<<mult<<"\n la division es:"<<div<<endl;
		
	return 0;
}
