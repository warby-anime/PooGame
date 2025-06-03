#pragma once
#include "Graphics.h"

class Score
{
public:
	void Draw ( Graphics& gfx ) const;
	bool ScoreUp ();
	int scoreMax () const;


private:
	int xpos = 0;
	int ypos = 20;
	Color c = Colors::Blue;
	int width = 0;
	static constexpr int height = 20;
	bool xp = false;

};

