#pragma once
#include"Graphics.h"

class Health
{
public:
	void DrawHealth ( Graphics& gfx );
	bool healthDown ();
private:
	int xpos = 0;
	int ypos = 20;
	Color c = Colors::Red;
	int width = 30;
	static constexpr int height = 40;
};

