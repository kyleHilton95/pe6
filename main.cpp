#include <iostream>
#include "Animal.h"

int main()
{
	Animal *w = new Wolf();

	std::cout << w->GetPower() << std::endl;

	free(w);

	Animal *h = new Human();

	std::cout<< w->GetPower() << std::endl;

	free(h);
return 0;
}
