/*Dado un vector con los valores {1,2,3,4,5,6}
 
calcular la suma de sus valores utilizando 
	acumulate
header
	numeric*/

    #include <iostream>
#include <vector>
#include <numeric>
 
class MiClase {
public:
    int valor;
    MiClase(int v) : valor(v) {}
};
 
int main() {
    std::vector<MiClase> datos = { MiClase(1), MiClase(2), MiClase(3), MiClase(4) };
   
    // Reducir sumando los valores
    int sumaValores = std::accumulate(datos.begin(), datos.end(), 0,
                                      [](int acum, const MiClase& obj) { return acum + obj.valor; });
 
    std::cout << "Suma de los valores: " << sumaValores << std::endl;
 
    return 0;
}
 