#include <iostream>
#include <Game.hpp>

int main() {
    ab::Game game(1500, 500, "Angry Birds");
    
    if(!game.Setup()) {
        std::cout << "Uncorrect setup" << std::endl;
        return -1;
    }

    game.LifeCycle();
}

/*
#define PI acos(-1)

float convY(float y) {
    return -y + 500.0f;
}

int main()
{
    const float M = 2;
    const float T = 1;
    // 1 пикс = 0.01 метру ???
    float r = 50.0f; // пикс
    float x0 = 20.0f; // пикс
    float y0 = 50.0f; // пикс
    float v = 50.0f * M; // пикс./сек.
    float alpha = PI / 3; // рад.
    float g = 9.8 * M; // пикс / c^2

    sf::RenderWindow window(sf::VideoMode(1500, 500), "SFML works!");

    sf::Texture texture;
    if (!texture.loadFromFile("bird.png"))
    {
        std::cout << "Error: file bird.png not found" << std::endl;
        return -1;
    }

    sf::Texture textureBackground;
    if (!textureBackground.loadFromFile("back.jpg"))
    {
        std::cout << "Error: file back.jpg not found" << std::endl;
        return -1;
    }

    sf::Sprite background;
    background.setTexture(textureBackground);
    background.setScale(1500.0 / textureBackground.getSize().x, 
        500.0 / textureBackground.getSize().y);

    sf::CircleShape shape(r);
    shape.setTexture(&texture);
    //shape.setFillColor(sf::Color::Green);
    shape.setPosition(x0, convY(y0));
    shape.setOrigin(r, r);

    sf::CircleShape enemy(r);
    //shape.setTexture(&texture);
    enemy.setFillColor(sf::Color::Green);
    enemy.setPosition(400, convY(30));
    enemy.setOrigin(r, r);

    sf::Clock clock;
    bool flag = true;
    bool isAlive = true;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        float t = clock.getElapsedTime().asSeconds();
        t = t * T;
        if(flag && (y0 + v*sin(alpha)*t - g*t*t/2 < 0)) {
            flag = false;
            std::cerr << t/T << std::endl;
        }

        shape.setPosition(x0 + v*cos(alpha)*t, 
            convY(y0 + v*sin(alpha)*t - g*t*t/2));

        // Проверка соударения
        float birdX = shape.getPosition().x;
        float birdY = shape.getPosition().y;
        float enemyX = enemy.getPosition().x;
        float enemyY = enemy.getPosition().y;

        if(sqrt(pow(birdX - enemyX, 2) + pow(birdY - enemyY,2)) < r + r)
        {
            isAlive = false;
            std::cout << "OK" << std::endl;
        }

        window.clear();
        window.draw(background);
        window.draw(shape);
        if(isAlive)
            window.draw(enemy);
        window.display();
    }

    return 0;
}
    */