#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Dude
{
public:

	void Draw ( Graphics& gfx ) const;
	void update ( const Keyboard& kbd );
	void ClampScreen (  );
	float getX () const;
	float getY () const;
	float getWidth () const;
	float getHeight () const;

	
private:
	int health = 3;
	float x = 400.f;
	float y = 300.f;
	float speed = 0.1f;
	static constexpr float width = 20;
	static constexpr float height = 20;
};




