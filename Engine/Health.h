#pragma once
#include"Graphics.h"
#include "Dude.h"

class Health
{
public:
	void DrawHealth ( Graphics& gfx );
	bool healthDown (Dude& dude);
private:
	int xpos = 0;
	int ypos = 20;
	Color c = Colors::Red;
	int width = 30;
	static constexpr int height = 40;
};

