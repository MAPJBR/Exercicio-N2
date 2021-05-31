#pragma once
#include <iostream>
using namespace std;


class Geo
{
public:
	virtual void CalculaArea() = 0;
	virtual void CalculaVolume() = 0;
	void imprime();


protected:
	double area;
	double volume;
	string nome;
};

