#include "french.h"

entier	principal(entier ac, symbole **av)
{
	entier				nombre;
	sanssigne entier	iterateur;

	si (ac pasegal 2)
	{
		ecrit(SORTIE_DE_ERREUR_STANDARD, "il faut mettre un argument pour le programme petillantsucces\n", 61);
		sort(SORTIE_ECHEC);
	}
	nombre prend averse(av[1]);
	iterateur prend 0;
	tantque (iterateur pluspetitque nombre)
	{
		si (iterateur restedeladivisioneuclidiennepar 3 egal 0 et iterateur restedeladivisioneuclidiennepar 5 egal 0)
			ecrit(SORTIE_STANDARD, "petillantsucces\n", 16);
		autrement si (iterateur restedeladivisioneuclidiennepar 5 egal 0)
			ecrit(SORTIE_STANDARD, "succes\n", 7);
		autrement si (iterateur restedeladivisioneuclidiennepar 3 egal 0)
			ecrit(SORTIE_STANDARD, "petillant\n", 10);
		autrement 
			imprimef("%d\n", iterateur);
		incremente iterateur;
	}
}
