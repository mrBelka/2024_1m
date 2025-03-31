#include <iostream>
#include <Game.hpp>

class A {
    mutable int a = 10;
    public:
        A() {
            std::cout << "11";
        }
        ~A() {
            std::cout << "22";
        }
};

class Test {
    public:
        static sf::Texture m_texture;  
};

sf::Texture Test::m_texture;

int main() {

    //sf::Texture m_texture;
    Test player;

    std::cout << "1" << std::endl;

    /*

    ab::Game game(1500, 500, "Angry Birds");
    
    if(!game.Setup()) {
        std::cout << "Uncorrect setup" << std::endl;
        return -1;
    }

    game.LifeCycle();

    */
}