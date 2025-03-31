#include <iostream>
#include <vector>

class Animal {
    public:
        Animal(int x, int y, int velocity) {
            std::cout << "Animal ctor" << std::endl;
        }
        virtual ~Animal() {
            std::cout << "Animal dtor" << std::endl;
        }
        virtual void Say() = 0;
};

class Chicken : public Animal {
    public:
        Chicken(int x, int y, int velocity) : Animal(x,y,velocity) {
            std::cout << "Chicken ctor" << std::endl;
        }
        ~Chicken() {
            std::cout << "Chicken dtor" << std::endl;
        }
        void Say() override {
            std::cout << "Co-co-co" << std::endl;
        }
};

class Dino : public Animal {
    public:
        Dino(int x, int y, int velocity) : Animal(x,y,velocity) {
            std::cout << "Dino ctor" << std::endl;
        }
        ~Dino() {
            std::cout << "Dino dtor" << std::endl;
        }
        void Say() override {
            std::cout << "ROAR!!!" << std::endl;
        }
};

int main() {
    std::vector<Animal*> animals;
    animals.push_back(new Dino(1,2,3));
    animals.push_back(new Chicken(1,2,3));

    for(int i=0;i<animals.size();i++)
        animals[i]->Say();
    

    for(int i=0;i<animals.size();i++)
        delete animals[i];
}