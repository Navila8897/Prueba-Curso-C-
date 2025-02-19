#include <iostream>
#include <memory>
 
template <typename T, typename... Args>
std::unique_ptr<T> createInstance(Args&&... args) {
    return std::make_unique<T>(std::forward<Args>(args)...);
}
 
class MiClase {
public:
    MiClase(int a, double b, std::string c) {
        std::cout << "MiClase creada con valores: " << a << ", " << b << ", " << c << std::endl;
    }
    ~MiClase(){
        std::cout << "Destructor" << std::endl;
    }
};
 
int main() {
    auto instancia = createInstance<MiClase>(42, 3.14, "Hola Mundo");
    MiClase* cl = instancia.get();    
    if(cl){
        std::cout << "MiClase creada" << std::endl;
    }
    return 0;
}