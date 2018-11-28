/*
  Brendan DENIAUD,Maximilien BERNE, le 30/03/2018
  Université de Nantes, UFR Sciences et Techniques
  
  -------------------------------------------------------------------
  Proposition de solution pour le mini projet d'algorithme de programmation.
  -------------------------------------------------------------------
  
  Ce fichier contient les déclarations pour les fonctions du fichier functions.c .
  
  Voir le fichier README.txt pour les consignes et des informations
  sur la compilation et l'exécution du programme.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// 1 ) definir uintlist
typedef struct uintlist_t {
	struct uintlist_t *next;
	size_t v;
} uintlist_t, *uintlistp_t;
// 2)
uintlistp_t list_add(size_t x, uintlistp_t n) {
	uintlistp_t node = malloc(sizeof(uintlist_t));
	node->v = x;
	node->next = n;
	return node;
}
//3)
size_t list_val(uintlistp_t node) {
	if (node!=NULL) {
		return node->v;
	}
	else {
		printf("Noeud inexistant");
		return 0;
	}
}
// 4)
uintlistp_t list_next(uintlistp_t head) {
	if (head!=NULL) {
		return head->next;
	}
	return NULL;
}
// 5)
uintlistp_t list_concat(uintlistp_t l1, uintlistp_t l2) {
	if (l1==NULL) {
		return l2;
	}
	if (l2==NULL) {
		return l1;
	}
	else {
		l1->next=l2;
		return l1;
	}
}
// 6)
uintlistp_t list_remove(uintlistp_t head) {
	if (head!=NULL) {
		uintlistp_t tail = head->next;
		free(head);
		return tail;
	}
	return 0;
}
// 7)
void list_delete(uintlistp_t head) {
	if (head!=NULL) {
		list_delete(head->next);
		free(head);
	}
}
// 8)
uintlistp_t bf_matching(const char *strand, const char *pattern) {
	size_t sz_strand = strlen(strand);
	size_t sz_pattern = strlen(pattern);
	uintlistp_t occ = NULL;
	for(int i=0 ; i <= (sz_strand-sz_pattern) ; i++) {
		size_t j=0;
		while( (strand[i+j]==pattern[j]) && j<sz_pattern ) {
			j++;
		}
		if(j==sz_pattern) {
			occ=list_add(i,occ);
			return occ;
		}
		if (occ==NULL)
		{
			printf("aucune occurence\n");
			}
	}
	return 0;
}

/* Les codes suivant ne sont pas fonctionnelle et sont mis en commentaire
10)
typedef struct suffixtree_t {
	const char *str;
	size_t lenstr;
	size_t pos; 
	bool isleaf; // verification
	size_t nchildren; 
	suffixtreep_t *children[4]; 
} suffixtree_t;

//11) L'objectif est que a partir d'un génome le programme le décompose de maniere a rée un arbree a suffixe 
qui peut retrouver rapidement des séquence d'une taille définis en faisant len(argv[3])

suffixetreep_t suffixetree_create(const char *chaine){
	suffixtreep_t tree=malloc(sizeof(suffixtree_t));
	char chaine= chaine
	tree->tete=NULL
	tree->children=NULL

}
// l'objectif est de crée des chaine et d'y ajouter dans chaine le fraguement de chaine crée

//12) L'idée, lui faire parcourir l'arbre dans le sens de l'arbre a force de cumuler les occurence avec la variable chaine. 

//13) 
void suffixtree_delete(suffixtreep_t tree){
	if (tree!=NULL)
	{
		suffixtree_delete(tree->children);
		suffixtree_delete(tree->tete);
		free(tree);
	}
}
*/