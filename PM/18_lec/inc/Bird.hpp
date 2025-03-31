#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

namespace ab {
    class Bird {
        int m_x0;
        int m_y0;
        float m_alpha;
        int m_velocity;
        int m_r;
        sf::Sprite m_birdSprite;
        sf::Texture m_birdTexture;
        bool m_isRunning = false;

        public:
            Bird() = default;
            bool Setup() {
                if(!m_birdTexture.loadFromFile("assets/bird.png")) {
                    std::cerr << "Error loading bird.png" << __FILE__ << " " << __LINE__ << std::endl;    
                    return false;
                }
                m_birdSprite.setTexture(m_birdTexture);
                m_birdSprite.setOrigin(m_r, m_r);
                m_birdSprite.setPosition(m_x0, m_y0);
                m_birdSprite.setScale(0.05, 0.05);

                return true;
            }
            sf::Sprite Get() {
                return m_birdSprite;
            }
            void SetInitialPosition(int x0, int y0) {
                m_x0 = x0;
                m_y0 = y0;
            }
            void SetPosition(int x, int y) {
                //m_x = x;
                //m_y = y;
            }
            void SetVelocity(int velocity) {
                m_velocity = velocity;
            }
            void SetAlpha(float angle) {
                m_alpha = angle;
            }
            void SetRadius(int r) {
                m_r = r;
            }
            void Move(float t) {
                float xt = m_x0 + m_velocity*cos(m_alpha)*t;
                float yt = m_y0 + m_velocity*sin(m_alpha)*t - 9.8*t*t/2;
                m_birdSprite.setPosition(xt, yt);
            }
            void Run() {
                m_isRunning = true;
            }
            void Stop() {
                m_isRunning = false;
            }
            bool State() {
                return m_isRunning;
            }

            void AlphaFromMouseClick(int xL, int yL) {
                m_alpha = atan((yL-m_y0)/(xL-m_x0));
            } 
            void VelocityFromMouseClick(int xL, int yL) {
                m_velocity = sqrt(pow(xL-m_x0,2)+pow(yL-m_y0,2));
            }

    };
}