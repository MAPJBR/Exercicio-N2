// Function main
// Made Mauro Augusto Pinheiro Junior 

#include <iostream>

#include "Quadrado.h"
#include "Cubo.h"
#include "Cilindro.h"

int main()
{
	Cilindro a;
	Cubo c;
	Quadrado q;

	a.SetRaioAltura(2, 3);
	a.imprime();

	c.SetLateral(5);
	c.imprime();

	q.SetLateral(6);
	//test
	q.CalculaVolume();
	q.imprime();
}


