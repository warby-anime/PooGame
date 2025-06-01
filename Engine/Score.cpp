#include "Score.h"

void Score::draw ( Graphics& gfx ) const
{
	for ( int y = ypos; y < ypos + height; y++ )
	{
		for ( int x = xpos; x < xpos + width; x++ )
		{
			gfx.PutPixel ( x , y , c );
		}
			
	}
}

bool Score::scoreUp () 
{
	return width += 40;
}

int Score::scoreMax () const
{
	
		return width;
	
	
}
