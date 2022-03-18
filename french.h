#ifndef FRENCH_H
#define FRENCH_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define automatique auto
#define casser break
#define cas case
#define symbole char
#define inchangeable const
#define continuer continue
#define basique default
#define fait do
#define doublon double
#define autrement else
#define enumeration enum
#define exterieur extern
#define flottant float
#define pour for
#define allervers goto
#define si if
#define entier int
#define grand long
#define enregistrer register
#define renvoie return
#define court short
#define avecsigne signed
#define taillede sizeof
#define immobile static
#define structure struct
#define interrupteur switch
#define renommer typedef
#define concubinage union
#define sanssigne unsigned
#define neant void
#define fugace volatile
#define tantque while

#define RIEN NULL
#define ENTIER_MAXIMUM __INT_MAX__
#define ENTREE_STANDARD STDIN_FILENO
#define SORTIE_STANDARD STDOUT_FILENO
#define SORTIE_DE_ERREUR_STANDARD STDERR_FILENO
#define SORTIE_SUCCES EXIT_SUCCESS
#define SORTIE_ECHEC EXIT_FAILURE

#define principal main
#define ecrit write
#define sort exit

#define plus +
#define incremente ++
#define augmentede +=
#define moins -
#define decremente --
#define diminuede -=
#define fois *
#define multipliepar *=
#define diviser /
#define divisepar /=
#define prend =
#define pasegal !=
#define non !
#define egal ==
#define restedeladivisioneuclidiennepar %
#define prendlerestedeladivisioneuclidiennepar %=
#define etbitabit &
#define et &&
#define oubitabit |
#define ou ||
#define pluspetitque <
#define pluspetitoubienegala <=
#define plusgrandque >
#define plusgrandoubienegala >=
#define decalebitsdroite >>
#define decalebitsgauche <<
#define inverselesbits ~
#define ouexclusifbitabit ^
#define fin ;

renommer enumeration {
	faux,
	vrai
} boulard;

entier	averse(symbole *chaine);

#define imprimef printf

#endif
