#pragma once
#include "MySprite.h"
#include "Mass.h"


class ElasticString : public MySprite
{
public:
	ElasticString(float nLength, float massKG, float kValue = 1);
	~ElasticString();
	void update(float dt) override;  //this gets called by the game once a frame to keep updating and changing the sprite

	void setRenderWindow(sf::RenderWindow* w);
	void setText(sf::Text* t) { pText = t; }
	
	void Draw();
private:
	//the l value the length of the string if no mass or tention is extending the string
	float naturalLength;
	// the x value the length of the extention beyond the natural length
	float xExtention;
	//modulus of elasticity lamda
	float lamda;

	Mass mass;


	sf::RenderWindow* pWindow;
	sf::Text* pText;


};

