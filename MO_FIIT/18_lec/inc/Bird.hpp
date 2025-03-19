#pragma once
#include <SFML/Graphics.hpp>

namespace ab {

    class Bird {
        private:
            sf::Texture m_texture;
            sf::CircleShape m_shape;
            float m_r = 20;
            float m_x0 = 0;
            float m_y0 = 0;
            float m_alpha = 0.5;
            float m_v = 100;
            float m_g = 9.8;
        private:
            float convY(float y) {
                return -y + 500.0f;
            }
        public:
            bool Setup();
            const sf::CircleShape& Get();
            void SetRadius(float r) { m_r = r; }
            void SetPosition(float x0, float y0) {
                m_x0 = x0;
                m_y0 = y0;
                m_shape.setPosition(m_x0, convY(m_y0));
            }
            void SetAlpha(float alpha) {
                m_alpha = alpha;
            }
            void SetVelocity(float v) {
                m_v = v;
            }
            void PlaySound(){}
            void Move(float t) {
                m_shape.setPosition(m_x0 + m_v*cos(m_alpha)*t, 
                    convY(m_y0 + m_v*sin(m_alpha)*t - m_g*t*t/2));
            }
    };

}