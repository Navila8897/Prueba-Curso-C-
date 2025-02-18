/*vector<T>
 
definir una operation T (T a, T b) +-* /
 
meter las operaciones en un vector es la funcion que suma,resta multiplica o divide
 
for(auto operation:operations){
    operation(2,2)
} */

#include <iostream>
#include <vector>
#include <functional>


template<typename T>
T add(T a, T b) {
    return a + b;
}

template<typename T>
T subtract(T a, T b) {
    return a - b;
}

template<typename T>
T multiply(T a, T b) {
    return a * b;
}

template<typename T>
T divide(T a, T b) {
    return a / b;
}

template<typename T>
std::vector<std::function<T(T, T)>> getOperations() {
    return {add<T>, subtract<T>, multiply<T>, divide<T>};
}

int main() {
    //operaciones
    auto operaciones = getOperations<int>();

    // Aplicacion de operaciones
    for (auto& operacion : operaciones) {
        std::cout << operacion(2, 2) << std::endl;
    }

    return 0;
}
