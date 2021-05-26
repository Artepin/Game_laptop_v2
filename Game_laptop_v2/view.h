#include <SFML\Graphics.hpp>

using namespace sf;
sf::View view;
View GetPlayerCoordinateForView(float x, float y)
{
	float tempX = x; float tempY = y;


	if (x < 320) tempX = 320;
	if (y > 680) tempY = 680;
	if (x > 1475) tempX = 1475;
	if (y < 240) tempY = 240;

	view.setCenter(tempX, tempY);

	return view;
}
