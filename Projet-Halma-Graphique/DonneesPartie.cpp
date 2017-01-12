#include "DonneesPartie.h"

DonneesPartie::DonneesPartie()
{
	num_joueur = 0;
	nombre_joueur = 0;
	plateau[TAILLE_PLATEAU][TAILLE_PLATEAU] = { 0 };
	classement[4] = {0};
	coord_pion_selectionner[2] = { 0 };
	coord_destination_pion[2] = { 0 };
	resultat_deplacement = 0;
	tableau_destination = NULL;
	int taille_tableau_destination = 0;
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

int DonneesPartie::sauvegarde()	// sauvegarde la partie
{
	std::ofstream fichier_sauvegarde("test.txt", std::ios::out | std::ios::trunc); // Ouverture du fichier de suavegarde
	int x, y, i;

	if (fichier_sauvegarde)	// Test si le fichier a été correctement ouvert
	{
		for (y = 0; y < TAILLE_PLATEAU; y++)	// Boucles imbriquées (double for) qui parcourent toutes les cases du tableau
		{
			for (x = 0; x < TAILLE_PLATEAU; x++)
			{
				// Sauvegarde les cases du plateau
				fichier_sauvegarde << plateau[x][y];
			}
			// Passage de ligne
			fichier_sauvegarde << std::endl;
		}

		// Sauvegarde numero de joueur
		fichier_sauvegarde << num_joueur << std::endl << nombre_joueur << std::endl;

		for (i = 0; i < 4; i++)
		{
			// sauvegarde classement
			fichier_sauvegarde << classement[i];
		}

		// fermeture du fichier de sauvegarde
		fichier_sauvegarde.close();
		return 1;
	}

	else	// Le fichier n'a pas pu être correctement ouvert
	{
		return 0;
	}
}


int DonneesPartie::charger()	// Chargement de la derniere sauvegarde
{
	char tampon;
	int x, y, i;
	std::ifstream fichier_chargement("partie.save", std::ios::in); // Ouverture du fichier de chargement
	
	if (fichier_chargement)
	{
		for (y = 0; y < TAILLE_PLATEAU; y++)	// Boucles imbriquées (double for) qui parcourent toutes les cases du tableau
		{
			for (x = 0; x < TAILLE_PLATEAU; x++)
			{
				fichier_chargement.get(tampon);
				plateau[x][y] = char_to_int(tampon); // Chargement plateau dans la structure
			}
			fichier_chargement.get(tampon); // Passage de ligne dans le fichier
		}

		fichier_chargement.get(tampon);
		num_joueur = char_to_int(tampon); // Chargement numero de joueur
		fichier_chargement.get(tampon); // Passage de ligne dans le fichier

		fichier_chargement.get(tampon);
		nombre_joueur = char_to_int(tampon); // Chargement nombre de joueur
		fichier_chargement.get(tampon); // Passage de ligne dans le fichier

		for (i = 0; i < 4; i++)
		{
			fichier_chargement.get(tampon);
			classement[i] = char_to_int(tampon); // Chargement classement
		}

		fichier_chargement.close(); // Fermeture du fichier de chargement
		return 1;
	}

	else	// Le fichier n'a pas pu être correctement ouvert
	{
		return 0;
	}
}

void DonneesPartie::afficher()
{
	for (int i = 0; i < TAILLE_PLATEAU; i++)
	{
		for (int j = 0; j < TAILLE_PLATEAU; j++)
		{
			std::cout << plateau[j][i] << " ";
		}
		std::cout << std::endl;
	}
}

DonneesPartie::~DonneesPartie()
{
}
