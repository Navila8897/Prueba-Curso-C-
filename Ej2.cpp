/*Crea una clase de la que no se pueda heredar*/

#include <iostream>

class A {
private:
    // Constructor privado
    A() {
        std::cout << "Constructor de A" << std::endl;
    }

public:
    // Función estática para crear instancias
    static A crearInstancia() {
        return A();
    }

    void mostrarMensaje() {
        std::cout << "Esta clase no se puede heredar." << std::endl;
    }
};

// Intentar heredar de esta clase resultará en un error de compilación
/*
class SubClase : public A {
    // Error: 'A::A()' is private within this context
};
*/

int main() {
    A obj = A::crearInstancia();
    obj.mostrarMensaje();

    return 0;
}

// También dice PEdro de hacerlo marcando a la clase como FINAL, a continuación, como la clase esta marcada como final NO VA A COMPILAR -> DA ERROR
#include <iostream>
 
class A final
{
};
 
class B : public A
{
};
 
// Esto causaría un error de compilación:
// class MatematicasAvanzadas : public Matematicas
//{ // Error!
// El compilador no permitirá heredar de una clase final
//};
 
class Banco
{
public:
    // Este método es virtual pero final - no puede ser sobrescrito
    virtual double calcularInteres(double monto) final
    {
        return monto * 0.05; // 5% de interés base
    }
 
    // Este método puede ser sobrescrito por las clases derivadas
    virtual void mostrarInfo()
    {
        std::cout << "Banco genérico" << std::endl;
    }
};
 
class BancoComercial : public Banco
{
public:
    // Esto causaría un error de compilación:
    // double calcularInteres(double monto) override { } // Error!
 
    // Esto está permitido
    void mostrarInfo() override
    {
        std::cout << "Banco Comercial" << std::endl;
    }
};