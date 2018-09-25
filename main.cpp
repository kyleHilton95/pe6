#include <iostream>
#include "Animal.h"

int main()
{
	Animal *w = new Wolf();

	std::cout << w->GetPower << std::endl;

	free(w);
return 0;
}
