#include "Geo.h"


void Geo::imprime()
{
	cout << nome << " Sua area e: " << area << endl;
	if (volume > 0)
	{
		cout << "Seu volume e: "<<volume << endl;
	}
	cout << "\n\n";
}