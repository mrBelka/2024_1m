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

        // background
        if (!m_textureBackground.loadFromFile("back.jpg")) {
            std::cout << "Error: file back.jpg not found" << std::endl;
            return false;
        }

        m_background.setTexture(m_textureBackground);
        m_background.setScale(m_width * 1.f / m_textureBackground.getSize().x, 
        m_height * 1.f / m_textureBackground.getSize().y);

        // bird
        if(!m_bird.Setup()) {
            std::cout << "Error in bird setup" << std::endl;
            return false;
        }

        return true;
    }

    void Game::LifeCycle() {

        sf::Clock clock;

        m_bird.SetPosition(100, 100);
        m_bird.SetAlpha(1.3);
        m_bird.SetVelocity(10);

        while (m_window.isOpen()) {
            sf::Event event;
            while (m_window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    m_window.close();
            }

            float t = clock.getElapsedTime().asSeconds();
            m_bird.Move(t);


            m_window.clear();
            m_window.draw(m_background);
            m_window.draw(m_bird.Get());
            m_window.display();
        }
    }

}