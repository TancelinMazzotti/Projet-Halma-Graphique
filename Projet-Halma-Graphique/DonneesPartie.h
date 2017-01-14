#pragma once

#include <iostream>
#include <fstream>

#define TAILLE_PLATEAU 10

class DonneesPartie
{
private:
	int num_joueur; // Num�ro du joueur qui joue
	int nombre_joueur;  // Nombre de joueurs dans la partie
	int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU];  // Plateau du jeu
	int classement[4];  // Tableau de classement des joueurs ayant fini
	int coord_pion_selectionner[2]; //  Coordonn�es du pion s�lectionn� par un joueur
	int coord_destination_pion[2];  //  Coordonn�es de la destination du pion
	int resultat_deplacement; // Indique le type de d�placement effectu�
	int **tableau_destination; // Tableau qui stock toute les destinations possible
	int taille_tableau_destination; // Taille du tableau des destinations

public:
	DonneesPartie();

	int char_to_int(char chiffre);	// Convertisseur char en int
	char int_to_char(int chiffre);	// Convertisseur int en char
	
	void reinitialiser();
	int sauvegarde();
	int charger();
	void afficher();
	~DonneesPartie();
};

