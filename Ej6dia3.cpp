/*Un vector {1,2,3,4,5,6}
 
Vamos a buscar el primer elemento par y el  último elemento par
 
#include <algorithm>
find_if*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    // Encontrar el primer elemento par
    auto it_first_even = std::find_if(vec.begin(), vec.end(),  { return x % 2 == 0; });
    if (it_first_even != vec.end()) {
        std::cout << "El primer elemento par es: " << *it_first_even << std::endl;
    } else {
        std::cout << "No se encontró ningún elemento par." << std::endl;
    }

    // Encontrar el último elemento par
    auto it_last_even = std::find_if(vec.rbegin(), vec.rend(),  { return x % 2 == 0; });
    if (it_last_even != vec.rend()) {
        std::cout << "El último elemento par es: " << *it_last_even << std::endl;
    } else {
        std::cout << "No se encontró ningún elemento par." << std::endl;
    }

    return 0;
}

/*---CORRECCION PEDRO-----*/
auto it = std::find_if(datos.rbegin(), datos.rend(), esPar);

auto it = std::find_if(datos.rbegin(), datos.rend(), esPar);
 
    if (it != datos.rend()) {    
        std::cout << "Último par encontrado: " << it->valor << std::endl;
    } else {
        std::cout << "No se encontró ningún número par." << std::endl;
    }