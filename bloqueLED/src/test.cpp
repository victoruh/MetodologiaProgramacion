#include <iostream>
#include "bloqueLed.h"

using namespace std;

int main(){
    bloqueLed b;
    int posiciones[8];
    int size;

    apagar(b);
    cout << "\nBloque apagado LEDs: ";
    print(b);
    // enciendo dos LEDs
    on(b,5); 
    on(b,7);
    cout << "\nEnciendo el 5 y el 7: ";
    print(b);
    cout << "\nAhora enciendo los LEDs 0, 1 y 2\n";
    on(b,0);
    print(b);
    on(b,1);
    print(b);
    on(b,2);
    print(b);

    cout << "\nLos LEDs encendidos estan en las posiciones: ";
    encendidos(b,posiciones, size); 
    for(int i=0; i< size; i++)
        cout << posiciones[i] << ",";

    cout << endl;  

    cout << "\nTodos encendidos: ";
    encender(b);
    print(b);

    cout << "\nTodos apagados: ";
    apagar(b);
    print(b);


    cout << "\nAhora la animacion\nEjemplo 1 \n";
    encender(b);
    print(b);    
    for(int i = 7; i >= 0; i--)
    {
      off(b,i);
      print(b);
      on(b,i);
    }

    cout << "\n\nEjemplo 2 \n";
    encender(b);
    print(b);
    int reverse = 7;
    for(int i = 0, reverse = 7;i < 8;i++, reverse--)
    {
      if(i < 4)
      {
	off(b,i);
	off(b,reverse);
	print(b);
      }else{
	on(b,i);
	on(b,reverse);
	print(b);
      }
    }

}
