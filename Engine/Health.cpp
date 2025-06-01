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

bool Health::healthDown ()
{
	return width -= 10;
}
