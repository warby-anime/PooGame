#pragma once
#include "Graphics.h"
#include "Dude.h"

class Goal
{
public:
	void init ( int in_x , int in_y );
	void Draw ( Graphics& gfx ) const;
	bool isGoalTouched (Dude& dude);


private:
	
	int xpos ;
	int ypos ;
	Color c = Colors::Green;
	static constexpr int width = 20;
	static constexpr int height =  20;


};

