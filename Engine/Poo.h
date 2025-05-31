#pragma once
#include "Graphics.h"

class Poo
{
public:

	void Draw ( Graphics& gfx );
	float ClampScreen ( float x , float y , float width , float height );
	void getX () const;
	void getY () const;
private:
	float x;
	float y;
	float vx;
	float vy;
	static constexpr float width = 24;
	static constexpr float height = 24;
};



