// Génération de longues séquences aléatoire de bases
#include <iostream>
#include <sstream>
#include <random>
using namespace std;

// Noyau du générateur aléatoire
const uint64_t randseed = 57;

const char bases[4] = {'A','G','T','C'};

mt19937 mt(randseed);
// Random sign
uniform_int_distribution<short> randbase(0,3);

void aide(void)
{
  cerr << "generate_strand --- Génération aléatoire d'une chaîne de bases\n";
  cerr << "Utilisation: generate_strand taille\n";
  cerr << "\tavec 'taille' le nombre de bases à générer." << endl;
  exit(1);
}


int main(int argc, char *argv[])
{
  if (argc < 2) {
	 aide();
  }

  istringstream streamtaille(argv[1]);
  uint64_t nbases;
  if (!(streamtaille >> nbases)) {
	 cerr << "Entier invalide pour la taille de la chaine: " << argv[1] << endl;
	 exit(1);
  }

  for (uint64_t i = 0; i < nbases; ++i) {
	 cout << bases[randbase(mt)];
  }
  cout << endl;
}
