/* HEIG-VD - INFO1 - L00
 *
 * Fichier     : labo00.c
 * Auteur      : Mathias Baumgartner
 * Date        : 18/02/2020
 * Compilateur : VS2019
 *
 * Description :
 * - affiche le nombre d'arguments donnés au programme,
 * - affiche la liste des arguments donnés au programme (un argument par ligne),
 * - renvoie un code retour égal au nombre d'arguments.
 *
 * Remarque(s) :
 * ...
 *
 * Modifications
 * Date         Auteur      Commentaires
 * ...          ...         ...
 */
#define MAX 100 //la limite de caractère -1
#define _CRT_SECURE_NO_WARNINGS
 // Bibliotheques utilisees
#include <stdio.h> 
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Programme principal
int64_t main(void)
{
	int8_t tab[MAX];
	int64_t i = 0, //case du tableau
		mot = 0; //nombre de mot dans la chaine de caractere

	printf("Entrez votre texte ici et appuyez sur ENTER : \n");
	fgets(tab, MAX, stdin);
	if ((tab[0] != '\n') && (tab[0] != ' ')) {
		mot++;
	}
	while (tab[i] != '\0') {
		if ((tab[i] == ' ') && (tab[i + 1] != ' ') && (tab[i + 1] != '\n')) {
			tab[i] = '\n';
			mot++;
		}
		i++;
	}
	printf("%ld\n", mot);
	printf("%s\n", tab);
	system("PAUSE");
	return EXIT_SUCCESS;
}
