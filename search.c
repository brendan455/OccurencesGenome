/*
  Brendan DENIAUD, Maximilien BERNE, le 30/03/2018
  Université de Nantes, UFR Sciences et Techniques
  
  -------------------------------------------------------------------
  Proposition de solution pour le mini projet d'algorithme de programmation.
  -------------------------------------------------------------------
  
  Ce fichier contient fonctions principales des méthodes de triages.
  
  Voir le fichier README.txt pour les consignes et des informations
  sur la compilation et l'exécution du programme.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matching_bf.h"
#include "suffixtree.h"
#include "profiling.h"
#include "functions.h"

printf("Bienvenue dans le programme de Maximilien Berne\n
	Pour voir la réponse a la quesiton 15 veuiller voir les commentaire du code search.c");
bool testBF(char const *str) {
	if(!strcmp(str,"-bf")) {
 		return 1;
	}
	return 0;
}

if (argv[1]=="-bf")
{
	printf("Lancement du programme principale\n");
}
if (argv[1]=="-nst")
{
printf("Le programme est encore incomplet voir le code pour voir l'avancement")	
}else{ printf("Le programme demande en argument : -nst ou -bf \n");}

// programme principale et appelle des fonctions 
int main(int argc, char const *argv[]) {
	if(testBF(argv[1])) {
		FILE *fp=fopen(argv[2], "r");
		char *chaine;
		fscanf(fp,"%ms", &chaine);
		fclose(fp);
		const char *pattern=argv[3];
		uintlistp_t head;
		head=bf_matching(chaine,pattern);
		for(uintlistp_t node=head ; node!=NULL ; node=list_next(node)) {
			printf("%lu\n", list_val(node));
		}
	}
	return 0;
}


/* 
Question 15 

Les algorithmes n'ayant pas pus été mener a bien , le test fut réaliser sur d'autre algorithme afint de constaté 
des différences des méthodes de recherche entre brute force et arbre a suffixe 

Brute force emploi une complexite de temps O(n2^n).
La recherche est exhaustive : on énumère toutes les possibilités
l'usage est conseiller pour des génome relativement court. 

alors que la complexite d'un arbre suffixe en construction naive est de complexité O(n^2)
Par définition plus le genome seras long plus il seras plus efficace d'utiliser ce type d'algorithme
*/