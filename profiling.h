/*
  Brendan DENIAUD, Maximilien BERNE, le 30/03/2018
  Université de Nantes, UFR Sciences et Techniques
  
  -------------------------------------------------------------------
  Proposition de solution pour le mini projet d'algorithme de programmation.
  -------------------------------------------------------------------
  
  Ce fichier contient les déclarations de fonctions du fichier profiling.c .
  
  Voir le fichier README.txt pour les consignes et des informations
  sur la compilation et l'exécution du programme.
*/

/*
  Fonctionnalités de profiling pour déterminer le temps passé dans certaines sections
  de code.
  Auteur: F. Goualard / X2BI040
  
  Exemple d'utilisation:

  reset_time();
  // [Travail long]
  printf("Temps écoulé: %ld ms\n",elapsed_time());

*/

#ifndef __profiling_h__
#define __profiling_h__

// Réinitialisation du compteur
void reset_time(void);
// Retourne le temps écoulé en millisecondes
long elapsed_time(void);



#endif // __profiling_h__
