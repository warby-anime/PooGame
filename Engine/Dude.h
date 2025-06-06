#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Dude
{
public:

	void Draw (  Graphics& gfx ) const;
	void Update ( const Keyboard& kbd );
	void ClampScreen (  );
	float GetX () const;
	float GetY () const;
	float GetWidth () const;
	float GetHeight () const;
	int GetHealth () const;
	int SetHealth ( );

	// 1.0237 = 1 health
private:
	int health = 3;
	float x = 400.f;
	float y = 300.f;
	float speed = 0.1f;
	
	static constexpr float width = 20;
	static constexpr float height = 20;
};




