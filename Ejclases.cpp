//Crear una clase repository. que herede el metodo add de una clase add. que herde el metodo update de una clase update. que herde el metodo remove de una clase remove. que herde el metodo get de una clase get
 //Tango update como remove heredan el metodo get de la clase get
 //Update* update = new Repository() // update.get() //update.update()
 // MIO

 #include <iostream>

// Clase base Get
class Get {
public:
    virtual void get() const {
        std::cout << "Método get de la clase Get" << std::endl;
    }
};

// Clase Add
class Add {
public:
    virtual void add() const {
        std::cout << "Método add de la clase Add" << std::endl;
    }
};


