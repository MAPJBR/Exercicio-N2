#include "Cilindro.h"

void Cilindro::CalculaArea()
{
	area = pow(raio,2) * (2*3.14);
}

void Cilindro::SetRaioAltura(int a,int b)
{
	nome = "Cilindro";
	raio = a;
	altura = b;
	CalculaArea();
	CalculaVolume();
}
void Cilindro::CalculaVolume()
{
	volume = area * altura;
}

