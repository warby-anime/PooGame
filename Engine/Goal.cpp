#include "Goal.h"

void Goal::init ( int in_x ,int in_y )
{
	xpos = in_x;
	ypos = in_y;
}

void Goal::Draw ( Graphics& gfx ) const
{
	for ( int y = ypos; y < ypos + height; ++y )
	{
		for ( int x = xpos; x < xpos + width; ++x )
		{
			gfx.PutPixel ( x , y , c );
		}
	}
}

bool Goal::IsGoalTouched ( Dude& dude )
{
	float right = xpos + width;
	float bottom = ypos + height;
	float dudeRight = dude.GetX () + dude.GetWidth ();
	float dudeBottom = dude.GetY () + dude.GetHeight ();

	return
		xpos <= dudeRight &&
		right >= dude.GetX () &&
		ypos <= dudeBottom &&
		bottom >= dude.GetY ();
}
