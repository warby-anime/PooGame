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

bool Health::HealthDown (Dude& dude)
{
	    if ( dude.GetHealth() > 2 )
	    {
	    	width = 800;
			
	    }
		if ( dude.GetHealth() > 1.3f )
		{
			width = 534;
		}
		if ( dude.GetHealth() < 1.2f )
		{
			width = 260;
		}
		if ( dude.GetHealth() <= 0 )
		{
			width = 0;
		}
		
	 return width;
	
	
}
