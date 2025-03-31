#include <Game.hpp>
#include <iostream>

namespace ab {

    Game::Game(unsigned int width, unsigned int height, 
        const std::string& title) {
        m_width = width;
        m_height = height;
        m_title = title;
    }

    bool Game::Setup() {
        m_window.create(sf::VideoMode(m_width, m_height), m_title);
        
        if(!m_backgroundTexture.loadFromFile("assets/back.jpg")) {
            std::cerr << "Error loading back.jpg" << __FILE__ << " " << __LINE__ << std::endl;    
            return false;
        }
        m_background.setTexture(m_backgroundTexture);

        unsigned int textW = m_backgroundTexture.getSize().x;
        unsigned int textH = m_backgroundTexture.getSize().y;
        m_background.setScale(m_width*1.f/textW, m_height*1.f/textH);
        
        // bird
        m_bird.SetRadius(20);
        m_bird.SetInitialPosition(100, 100);
        if(!m_bird.Setup())
            return false;
        return true;
    }

    void Game::LifeCycle() {

        sf::Clock clock;
        bool isLeftButtonPressed = false;
        while (m_window.isOpen()) {
            sf::Event event;
            while (m_window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    m_window.close();
            }

            // Обработка нажатия ЛКМ
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                if(!isLeftButtonPressed) {
                    isLeftButtonPressed = true;
                    clock.restart();

                    float xL = sf::Mouse::getPosition(m_window).x;
                    float yL = sf::Mouse::getPosition(m_window).y;

                    m_bird.Run();
                    m_bird.VelocityFromMouseClick(xL, yL);
                    m_bird.AlphaFromMouseClick(xL, yL);
                }
            } else {
                isLeftButtonPressed = false;
            }

            float t = clock.getElapsedTime().asSeconds();
            t = t * 10;

            if(m_bird.State())
                m_bird.Move(t);
            
            m_window.clear();
            m_window.draw(m_background);

            sf::Sprite& bird = m_bird.Get();
            bird.setPosition(bird.getPosition().x, TransformY(bird.getPosition().y));
            m_window.draw(bird);
            m_window.display();
        }
    }

}