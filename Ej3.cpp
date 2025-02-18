//EJEMPLO
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main() {
    std::set<int> miSet = {3,4,1,1,1,3,2};
    for(auto v:miSet){
        std::cout << v << std::endl;
    }
}

/*crear una clase con un atributo id y al agregarlas al set quitar aquellas clases que ya se registraron con ese id*/

class myclass {
    public:
        int id;
    
     myclass(int id) : id(id) {}
    
        // Sobrecargar el operador < para que std::set pueda ordenar los objetos
        bool operator<(const myclass& otra) const {
            return id < otra.id;
        }
    };
    
    int main() {
        std::set myclass> conjunto;
    
        // Agregar instancias al set
        conjunto.insert (myclass(1));
        conjunto.insert (myclass(2));
        conjunto.insert (myclass(3));
        conjunto.insert (myclass(2)); // Este no se agregará porque el id ya existe, es repetido
    
        // Mostrar los elementos del set
        for (const auto& elemento : conjunto) {
            std::cout << "ID: " << elemento.id << std::endl;
        }
    
        return 0;
    }
    /*Definimos la clase myclass con un atributo id.
Sobrecargamos el operador < para que std::set pueda ordenar los objetos de myclass basándose en el id.
Creamos un std::set de myclass y agregamos varias instancias.
Al agregar una instancia con un id duplicado, el std::set automáticamente evita agregarla.*/

