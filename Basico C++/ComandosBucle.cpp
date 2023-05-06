/******* Hola Mundo
#include <iostream>

int main()
{
  std::cout << "Hello World!";
}


/**********contador
#include <iostream>
int main()
{    
    for (int i = 0; i < 5; i++){
        std::cout << i << "\n";   
    }
}

/***********Ingresar un dato
#include <iostream>

int main()
{
    int n;
    std::cout << "Ingrese un número: ";
    std::cin >> n;
    
    std::cout << "El valor es " << n;
}

/************verificar el valor del datos entre parametros
#include <iostream>

int main()
{
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    
    std::cout << "El valor es " << n << "\n";
    if (n == 3){
        std::cout << "el numero justamente 3";
    } else if (n < 3){
        std::cout << "el numero es menor a 3";
    } else {
        std::cout << "el numero es mayor a 3";
    }
}


/****** switch

#include <iostream>
int main()
{
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
}




/****** cilco while

#include "iostream"

int main()
{
    int numero;
    std::cout <<  "Ingrese un numero ";
    std::cin >> numero;
    while(numero <= 100)
    {
        std::cout <<  "Ingrese un numero ";
        std::cin >> numero;
    }
    return true;
}
 
 
/**********obtener numeros al azar
#include <iostream>

int main()
{
    int a = 0;
    for (int i = 0; i < 5; i++){
        a = rand()  % 10;
        std::cout << a << "\n";
    }
}
