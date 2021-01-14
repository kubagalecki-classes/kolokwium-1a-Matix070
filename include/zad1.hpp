#include "catch.hpp"

// Zad2
class Makaron 
{
public:
	virtual double ileMaki(unsigned) const = 0;

	static Makaron* gotujMakaron(const std::string& s);		
};

// Zad1
 class Tagliatelle : public Makaron

{
public:

	Tagliatelle(const double L, const double W, const double R) 
		: L(L), W(W), R(R)
	{
	}
	Tagliatelle() : L(0.5), W(0.5), R(0.5) {}

	double ileMaki(unsigned P) const
	{
		return P * L * W * (1. - R) * C;
	}

private:

	double L;
	double W;
	double R;
	static const double C;


};
