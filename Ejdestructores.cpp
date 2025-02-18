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

// Clase Update que hereda de Get
class Update : public Get {
    public:
        virtual void update() const {
            std::cout << "Método update de la clase Update" << std::endl;
        }
    };
    
    // Clase Remove que hereda de Get
    class Remove : public Get {
    public:
        virtual void remove() const {
            std::cout << "Método remove de la clase Remove" << std::endl;
        }
    };
    
    // Clase Repository que hereda de Add, Update, Remove y Get
    class Repository : public Add, public Update, public Remove {
    public:
        void get() const override {
            std::cout << "Método get de la clase Repository" << std::endl;
        }
        void update() const override {
            std::cout << "Método update de la clase Repository" << std::endl;
        }
        void remove() const override {
            std::cout << "Método remove de la clase Repository" << std::endl;
        }
        void add() const override {
            std::cout << "Método add de la clase Repository" << std::endl;
        }
    };
    
    int main() {
        Repository* repo = new Repository();
    
        repo->get();
        repo->update();
        repo->remove();
        repo->add();
    
        delete repo;
        return 0;
    }

    /*
Crear una clase repository
 
que herede el metodo add de una clase add
que herde el metodo update de una clase update
que herde el metodo remove de una clase remove
que herde el metodo get de una clase get
 
Tango update como remove heredan el metodo get de
la clase get
 
Update* update = new Repository()
 
update->get()
update->update()
 
*/
class Get
{
public:
    Get()
    {
        std::cout << "creado get" << std::endl;
    }
    virtual void get() const = 0;
    virtual ~Get() = default;
};
 
class Update : virtual public Get
{
public:
    virtual void update() const = 0;
    virtual ~Update() = default;
};
 
class Remove : virtual public Get
{
public:
    virtual void remove() const = 0;
    virtual ~Remove() = default;
};
 
class Add
{
public:
    virtual void add() const = 0;
    virtual ~Add() = default;
};
 
class Repository : public Add, public Update, public Remove
{
    void get() const override
    {
        std::cout << "metodo get" << std::endl;
    }
    void add() const override
    {
        std::cout << "metodo add" << std::endl;
    }
    void update() const override
    {
        std::cout << "metodo update" << std::endl;
    }
    void remove() const override
    {
        std::cout << "metodo remove" << std::endl;
    }
};
 
int main()
{
 
    const Update &update = Repository();
    update.get();
    update.update();
    return 0;
}