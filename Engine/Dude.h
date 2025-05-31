#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Dude
{
public:

	void Draw ( Graphics& gfx ) const;
	void update ( const Keyboard& kbd );
	float ClampScreen ( float x , float y , float width , float height );
	void getX () const;
	void getY () const;
	
private:
	float x = 400.f;
	float y = 300.f;
	float speed = 0.1f;
	static constexpr float width = 20;
	static constexpr float height = 20;
};




