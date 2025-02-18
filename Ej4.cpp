/*Crear una clase que no se pueda instanciar y que sus derivadas se puedan instanciar
Esta clase debe de tener un atributo id de solo lectura*/

#include <iostream>
#include <vector>
#include <set>

class A{
    private:
     int id;
    public:
     A()=deleted
    protected:
     A(int id):id(id){} // constructor protegido
 };
  
 class B:public A
 {  
  
     B(int id):A(id){} // Ahora el constructor de B es público.
 }

 