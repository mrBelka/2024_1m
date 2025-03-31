#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include <Bird.hpp>

namespace ab {

    class Game {
        unsigned int m_width;
        unsigned int m_height;
        std::string m_title;
        sf::RenderWindow m_window;
        sf::Sprite m_background;
        sf::Texture m_backgroundTexture;

        Bird m_bird;

        public:
            Game(unsigned int width, unsigned int height, 
                    const std::string& title);
            bool Setup();
            void LifeCycle();

        private:
            float TransformY(float y) {
                return m_height - y;
            }    
    };

}