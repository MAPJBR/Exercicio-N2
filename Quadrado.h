#pragma once

#include "Geo.h"

class Quadrado : public Geo
{
public:
	 void CalculaArea();
	 void CalculaVolume();
	 void SetLateral(int a);
private:
	double lateral;
};

