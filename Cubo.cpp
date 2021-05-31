#include "Cubo.h"
void Cubo::CalculaArea()
{
	area = lateral * lateral;
}

void Cubo::SetLateral(int a)
{
	nome = "Cubo";
	lateral = a;
	CalculaArea();
	CalculaVolume();
}
void Cubo::CalculaVolume()
{
	volume = lateral * lateral*lateral;
}
