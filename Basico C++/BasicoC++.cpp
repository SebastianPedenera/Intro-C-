//	primeros pasos en el lenguaje C++
 
#include <cstdlib> 
#include <string>  // para uso string
#include <stdlib.h> // para el numero random
#include <time.h> // para la semilla del random
#include <iostream> // cout y cin
#include <stdio.h> // para uso printf y Scanf
#include <list>
#include <vector>

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
	// Definir una constante
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
	
	// Estructuras de control:
	
	// Condicional If
	int num11;
	int num12;
	printf("Ingrese un número: \n");
	cin>> num11;
	printf("ingrese otro número: \n");
	cin>> num12;
	if(num11==num12)
	printf ("números iguales\n");
	else if(num11>num12)
	printf ("El primer número es mayor al segundo número\n");
	else
	printf ("El primer número es menor al segundo número\n");
	cout<< "------------------\n";
	
	// Condicional Switch
	int opcion;
	printf("Ingrese la opcion 1, 2, 3: \n");
	cin>>opcion;
	switch(opcion){
		case 1:
			printf("UNO! \n");
			break;
		case 2:
			printf("DOS! \n");
			break;
		case 3:
			printf("TRES! \n");
			break;
		default:
			printf("Opción incorrecta \n");
			break;	
	}
	cout<< "------------------\n";
	
	// Bucle For
	cout<< "ingrese un numero\n";
	int cont; cin>>cont;
	for (int i=0;i<=cont; i++){
		cout<< i << "\n";
	}
	cout<< "------------------\n";
	
	//Bucle while
	int num20, tope, i;
	cout << "ingrese el tope: "; cin >> tope;
	i=1;
	while(i<=tope){
		cout<<i<<"\n";
		i++;
	}	
	cout<< "------------------\n";
	
	//Bucle do/while
	int numSecreto, numUsuario;
	numSecreto=3;
	do{
		cout<< "Adivine el número \n";
		cin>>numUsuario;
	}while(numUsuario!=numSecreto);
	cout<<"Adivinaste!!\n";
	cout<< "------------------\n";
	
		
	return 0;
}
