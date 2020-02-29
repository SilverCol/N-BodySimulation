#include <SFML/Graphics.hpp>
#include "Points.hpp"

int main()
{
    // Create window
    sf::RenderWindow window(sf::VideoMode(500, 500), "Point bodies");

    // Initialize points
    std::vector<sf::Vector2f> positions;
    positions.push_back(sf::Vector2f(50.0, 50.0));
    positions.push_back(sf::Vector2f(150.0, 50.0));
    positions.push_back(sf::Vector2f(50.0, 150.0));
    positions.push_back(sf::Vector2f(100.0, 150.0));
    positions.push_back(sf::Vector2f(100.0, 100.0));
    Points points(positions);

    // Run simulation
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(points);
        window.display();
    }

    return 0;
}
