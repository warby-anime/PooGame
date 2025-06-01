#pragma once
#include "Graphics.h"

class Score
{
public:
	void draw ( Graphics& gfx ) const;
	bool scoreUp ();


private:
	int xpos = 0;
	int ypos = 0;
	Color c = Colors::Blue;
	int width = 0;
	static constexpr int height = 20;
	bool xp = false;

};

