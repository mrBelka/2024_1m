#include <iostream>
#include <Bird.hpp>

namespace ab {
    bool Bird::Setup() {
        if (!m_texture.loadFromFile("bird.png")) {
            std::cout << "Error: file bird.png not found" << std::endl;
            return false;
        }
        m_shape.setRadius(m_r);
        m_shape.setTexture(&m_texture);
        m_shape.setPosition(m_x0, m_y0);
        m_shape.setOrigin(m_r, m_r);
        return true;
    }

    const sf::CircleShape& Bird::Get() {
        return m_shape; 
    }
}