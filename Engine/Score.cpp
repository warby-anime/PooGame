#include "Score.h"

void Score::Draw ( Graphics& gfx ) const
{
	for ( int y = ypos; y < ypos + height; y++ )
	{
		for ( int x = xpos; x < xpos + width; x++ )
		{
			gfx.PutPixel ( x , y , c );
		}
			
	}
}

bool Score::ScoreUp () 
{
	return width += 40;
}

int Score::scoreMax () const
{
	
		return width;
	
	
}
