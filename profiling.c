/*
  Brendan DENIAUD, Maximilien BERNE, le 30/03/2018
  Université de Nantes, UFR Sciences et Techniques
  
  -------------------------------------------------------------------
  Proposition de solution pour le mini projet d'algorithme de programmation.
  -------------------------------------------------------------------
  
  Ce fichier contient les fonctions pour obtenir le temps écoulée pour le tratement du génome.
  
  Voir le fichier README.txt pour les consignes et des informations
  sur la compilation et l'exécution du programme.
*/

#include <sys/time.h>
#include <sys/resource.h>
#include "profiling.h"

static long last_usr_time;
static long last_reset_time;

long get_time(void)
{
  struct rusage RsrUsage;
  getrusage(RUSAGE_SELF,&RsrUsage);
  return (RsrUsage.ru_utime.tv_sec*1000 + RsrUsage.ru_utime.tv_usec/1000);
}

void reset_time(void)
{
  last_reset_time=last_usr_time=get_time();
}

long elapsed_time(void)
{
  return get_time()-last_reset_time;
}
