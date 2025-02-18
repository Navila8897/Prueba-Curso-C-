#include <iostream>
//FUNCION CON TEMPLATES
template <typename T1>
T1 max(T1 a, T1 b) {
	return (a>b) ? a : b;
}
int main(){
	int a = 3; int b = 5;
	float fa = 1.2; float fb = 1.9;
	std::cout << max(a, b) << std::endl;
	std::cout << max(fa, fb) << std::endl;

    std::cout << max<int>(a, b) << std::endl; //aqui con el int estamos forzando que sean enteros los numeros que devuelve
	std::cout << max<int>(fa, fb) << std::endl;
    return 0;
}
// CLASES CON TEMPLATES
