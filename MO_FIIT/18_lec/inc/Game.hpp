#pragma once
#include <SFML/Graphics.hpp>
#include <Bird.hpp>

namespace ab {

    class Game {
        private:
            sf::RenderWindow m_window;
            sf::Texture m_textureBackground;
            sf::Sprite m_background;

            unsigned int m_width;
            unsigned int m_height;
            std::string m_title;

            Bird m_bird;
        public:
            Game(unsigned int width, unsigned int height, 
                    const std::string& title);
            bool Setup();
            void LifeCycle();
    };

}