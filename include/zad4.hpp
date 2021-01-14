#include "zad1.hpp"

#include <vector>

double obliczMake(const std::vector<Tagliatelle>& v)
{
	double M = 0;
	int i = 1;
	for (auto it = v.end(); it != v.begin(); it--)
	{
		M += it->ileMaki(i);

		i++;
	}
	if (M > 100)
		throw 5;
	if (M >= 50)
		throw 3.14;
	return M;
}
