/*Ahora vamos a hacer un filtro con el siguient ejercicio:
class MiClase {
public:
    int valor;
    MiClase(int v) : valor(v) {}
};
 
agregamos a un vector cuatro instancias de la clase con los valores
 
	1,2,3,4
 
Escribir un algoritmo para filtrar los pares y agregarlos a un nuevo vector*/

#include <iostream>
#include <vector>
#include <algorithm>

class MiClase {
    public:
        int valor;
        MiClase(int v) : valor(v) {}
    };
    
    int main() {
        // Crear un vector con instancias de MiClase
        std::vector<MiClase> vec = {MiClase(1), MiClase(2), MiClase(3), MiClase(4)};
    
        // Crear un nuevo vector para almacenar los valores pares
        std::vector<MiClase> pares;
    
        // Filtrar los valores pares y agregarlos al nuevo vector
        std::copy_if(vec.begin(), vec.end(), std::back_inserter(pares),  {
            return obj.valor % 2 == 0; // si quisiera impar en vez de == pondríamos !=
        });
    
        // Mostrar los valores del nuevo vector
        for (const auto& obj : pares) {
            std::cout << obj.valor << std::endl;
        }
    
        return 0;
    }

    /*Profe*/

