#include "french.h"


entier	averse(symbole *chaine)
{
	avecsigne grand entier	resultat;
	avecsigne entier	signe;
	entier				iterateur;

	iterateur prend 0;
	resultat prend 0;
	signe prend 1;
	si (chaine[0] egal '-')
	{
		signe prend -1;
		incremente iterateur;
	}
	autrement si (chaine[0] egal '+')
		incremente iterateur;
	tantque (chaine[iterateur])
	{
		resultat prend resultat fois 10 plus chaine[iterateur] - '0';
		si (resultat plusgrandque ENTIER_MAXIMUM et signe egal 1)
			renvoie (0);
		autrement si (resultat plusgrandque (grand)ENTIER_MAXIMUM plus 1 et signe egal -1)
			renvoie (0);
		incremente iterateur;
	}
	renvoie (resultat fois signe);
}
