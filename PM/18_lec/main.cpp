#include <Game.hpp>
#include <iostream>

int main() {
    ab::Game game(1000, 500, "Angry Birds");
    if(!game.Setup()) {
        std::cerr << "Error" << std::endl;
        return -1;
    }
    game.LifeCycle();
    return 0;
}

/*
#define PI acos(-1)

float TransformY(float y) {
    return 500 - y;
}

int main()
{
    // 100 пикселей == 1 метру
    float r = 20;
    float x0 = 100;
    float y0 = 100;
    float v = 100; // пикс./с.
    float alpha = PI/3;
    float g = 9.8;

    float enemyR = 100;
    float enemyX = 500;
    float enemyY = 100;

    sf::RenderWindow window(sf::VideoMode(1000, 500), "SFML works!");
    sf::CircleShape shape(r);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(x0, TransformY(y0));
    shape.setOrigin(r, r);
    bool isRunning = false;

    sf::CircleShape enemy(enemyR);
    enemy.setFillColor(sf::Color::Red);
    enemy.setPosition(enemyX, TransformY(enemyY));
    enemy.setOrigin(enemyR, enemyR);

    sf::Clock clock;
    bool isLeftButtonPressed = false;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Обработка нажатия ЛКМ
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            if(!isLeftButtonPressed) {
                //std::cerr << sf::Mouse::getPosition(window).x << 
                //    " " << sf::Mouse::getPosition(window).y << std::endl;
                isLeftButtonPressed = true;
                isRunning = true;
                clock.restart();

                float xL = sf::Mouse::getPosition(window).x;
                float yL = sf::Mouse::getPosition(window).y;
                yL = TransformY(yL);

                v = sqrt(pow(xL-x0,2)+pow(yL-y0,2));
                alpha = atan((yL-y0)/(xL-x0));
                std::cerr << xL << " " << x0 << " " << yL << " " << y0 << std::endl;
                std::cerr << v << " " << alpha << std::endl;
            }
        } else {
            isLeftButtonPressed = false;
        }

        // Логика
        float t = clock.getElapsedTime().asSeconds();
        t = t * 10;

        if(isRunning) {
            float xt = x0 + v*cos(alpha)*t;
            float yt = y0 + v*sin(alpha)*t - g*t*t/2;
            shape.setPosition(xt, TransformY(yt));

            if(sqrt(pow(xt-enemyX,2)+pow(yt-enemyY,2)) <= r + enemyR) {
                enemyR *= 0.8;
                enemy.setRadius(enemyR);
            }
        }
        
        window.clear();
        window.draw(shape);
        window.draw(enemy);
        window.display();
    }

    return 0;
}
    */