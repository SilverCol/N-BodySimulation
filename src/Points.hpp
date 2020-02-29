#ifndef POINTS_H
#define POINTS_H

#include <SFML/Graphics.hpp>

class Points : public sf::Drawable, public sf::Transformable
{
public:
    Points(size_t n);
    Points(const std::vector<sf::Vector2f>& positions);
    void update(const std::vector<sf::Vector2f>& positions);
private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
    {
        // apply the transform
        states.transform *= getTransform();

        // our particles don't use a texture
        states.texture = NULL;

        // draw the vertex array
        target.draw(m_vertices, states);
    }

    sf::VertexArray m_vertices;

};

#endif
