#include <SFML/Graphics.hpp>
#include <iostream>

#define PI acos(-1)

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
    sf::RectangleShape shape(sf::Vector2f(120.f, 50.f));
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(100, 100);
    shape.setOrigin(shape.getSize().x / 2, shape.getSize().y / 2);

    bool isLeftKeyPressed = false;
    sf::Clock clock;
    float w = 10;
    float t_previous = 0;
    float t2 = 0;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Логика
        float t = clock.getElapsedTime().asSeconds();
        float dt = t - t_previous;
        t_previous = t;
        //std::cout << dt << std::endl;
        //shape.setRotation(w*t);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            //if(!isLeftKeyPressed) {
                // left key is pressed: move our character
            shape.rotate(w*dt);
            t2 += dt;
            std::cout << t2 << std::endl;
            //std::cout << "Pressed Left" << std::endl;
                //isLeftKeyPressed = true;
            //}
        }
        //else {
        //    isLeftKeyPressed = false;
        //}

        window.clear(sf::Color(255,0,0));
        window.draw(shape);
        window.display();
    }

    return 0;
}