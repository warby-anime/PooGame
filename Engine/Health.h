#pragma once
#include"Graphics.h"
#include "Dude.h"

class Health
{
public:
	void DrawHealth ( Graphics& gfx );
	bool HealthDown (Dude& dude);
private:
	int xpos = 0;
	int ypos = 0;
	Color c = Colors::Red;
	int width = 800;
	static constexpr int height = 20;
};

