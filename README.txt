Brendan DENIAUD, Maximilien BERNE, le 30/03/2018
Université de Nantes, UFR Sciences et Techniques

-------------------------------------------------------------------
Proposition de solution pour le mini-projet.
-------------------------------------------------------------------

Compilation en une étape :
  gcc -Wall search.c profiling.c functions.c -o main.out
Ou, en plusieurs étapes :
  gcc -Wall -c -o search.o search.c
  gcc -Wall -c -o profiling.o profiling.c
  gcc -Wall -o main.out search.o profiling.o

Exécution :
  ./main.out

On peut aussi, pour automatiser la compilation, appeler l'outil make :
  make
Cet outil lit les règles de compilation dans le fichier Makefile
et les applique automatiquement. Pour plus d'informations,
se reporter aux sections 1 et 2 du tutoriel suivant :
http://gl.developpez.com/tutoriel/outil/makefile/

