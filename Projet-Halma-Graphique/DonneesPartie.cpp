#include "DonneesPartie.h"

DonneesPartie::DonneesPartie()
{
}

int DonneesPartie::char_to_int(char chiffre)	// Convertisseur char en int
{
	int converstion = chiffre - '0';
	return converstion;
}

char DonneesPartie::int_to_char(int chiffre)	// Convertisseur int en char
{
	char converstion = chiffre + '0';
	return converstion;
}

DonneesPartie::~DonneesPartie()
{
}
