#pragma once
#include "Graphics.h"
#include "Dude.h"

class Poo
{
public:
	void init ( float in_x , float in_y , float in_vx , float in_vy ) ;
	void Draw (  Graphics& gfx ) const  ;
	void ClampScreen ( );
	bool IsColliding (Dude& dude);
	bool SpeedUpPooX ();
	bool SpeedUpPooY ();
	void getX () const;
	void getY () const;
private:
	float x;
	float y;
	float vx;
	float vy;
	static constexpr float width = 24;
	static constexpr float height = 24;
	bool oDamaged;
};



