#include <iostream>

int main() {
	
	// Hola Mundo
  	std::cout << "Hello World!\n";
	
	//contador	
	for (int i = 0; i < 5; i++){
        std::cout << i << "\n";   
    }
    
    //Ingresar un dato
    int n;
    std::cout << "Ingrese un número: \n";
    std::cin >> n;
    std::cout << "El valor es " << n <<"\n";
	
	//verificar el valor del datos entre parametros
    int n1;
    std::cout << "Ingrese un numero: \n";
    std::cin >> n1;
    std::cout << "El valor es " << n1 <<"\n";
    if (n1 == 3){
        std::cout << "el numero justamente 3 \n";
    } else if (n1 < 3){
        std::cout << "el numero es menor a 3 \n";
    } else {
        std::cout << "el numero es mayor a 3 \n";
    }

	// switch
    char grade = 'A';
    switch(grade) {
      case 'A' :
         std::cout << "Equivocado" << "\n";
         break;
      case 'B' :
      case 'C' :
         std::cout << "Equivocado" << "\n";
         break;
      case 'D' :
         std::cout << "Execlente!!" << "\n";
         break;
      case 'F' :
         std::cout << "volvé a intentar" << "\n";
         break;
      default :
         std::cout << "valor invalido" << "\n";
   }

	// cilco while
    int numero;
    std::cout <<  "Ingrese un numero ";
    std::cin >> numero;
    while(numero <= 100)
    {
        std::cout <<  "Ingrese un numero ";
        std::cin >> numero;
    }
    return true;
	
	//obtener numeros al azar
	/*
	int a = 0;
    for (int i = 0; i < 5; i++){
        a = rand(i)  % 10;
        std::cout << a << "\n";
    }	
	*/
}









 
 


