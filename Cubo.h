#pragma once
#include "Geo.h"
class Cubo : public Geo
{
public:
	void CalculaArea();
	void SetLateral(int a);
	void CalculaVolume();
private:
	double lateral;


};

