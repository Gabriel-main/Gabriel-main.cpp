/* Escribe un programa que muestre por consola (con un print)
los numeros de 1 a 100 (ambos incluidos y con un salto de linea entre
cada impresion), sustituyendo los siguientes:
- Multiplos de 3 por la palabra "Fizz".
- Multiplos de 5 por la palabra "Buzz".
- Multiplos de 3 y de 5 a la vez por la palabra "FizzBuzz".*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    for(int i = 1; i <= 100; i++){
        string cambio = to_string(i);

        if(i % 3 == 0 && i % 5 == 0){
            cambio = "FizzBuzz";           
        }
        else if(i % 3 == 0){
            cambio = "Fizz";
        }
        else if(i % 5 == 0){
            cambio = "Buzz";
        }
        cout<<cambio<<endl;
    }
    return 0;
}