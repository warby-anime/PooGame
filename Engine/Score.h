#pragma once
#include "Graphics.h"

class Score
{
public:
	void draw ( Graphics& gfx ) const;
	bool scoreUp ();
	int scoreMax () const;


private:
	int xpos = 0;
	int ypos = 20;
	Color c = Colors::Blue;
	int width = 0;
	static constexpr int height = 20;
	bool xp = false;

};

