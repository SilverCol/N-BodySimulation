#include "Points.hpp"

Points::Points(size_t n):
m_vertices(sf::Points, n)
{}

Points::Points(const std::vector<sf::Vector2f>& positions):
m_vertices(sf::Points, positions.size())
{
	for (size_t i = 0; i < positions.size(); ++i)
	{
		m_vertices[i].position = positions[i];
	}
}

void Points::update(const std::vector<sf::Vector2f>& positions)
{
	for (size_t i = 0; i < positions.size(); ++i)
	{
		m_vertices[i].position = positions[i];
	}
}
