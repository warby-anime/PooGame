#include "Health.h"

void Health::DrawHealth ( Graphics& gfx )
{
	for ( int y = ypos; y < ypos + height; y++ )
	{
		for ( int x = xpos; x < xpos + width; x++ )
		{
			gfx.PutPixel ( x , y , c );
		}

	}
}

bool Health::healthDown (Dude& dude)
{
	    if ( dude.health > 2 )
	    {
	    	width = 30;
			
	    }
		if ( dude.health > 1.3f )
		{
			width = 20;
		}
		if ( dude.health < 1.2f )
		{
			width = 10;
		}
		if ( dude.health <= 0 )
		{
			width = 0;
		}
		
	 return width;
	
	
}
