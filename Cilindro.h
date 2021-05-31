#pragma once
#include "Geo.h"
class Cilindro : public Geo
{
public:
	void CalculaArea();
	void SetRaioAltura(int a, int b);
	void CalculaVolume();
private:
	double raio;
	double altura;

};

