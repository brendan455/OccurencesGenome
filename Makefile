.PHONY: clean all

## Partie modifiable >>>>>>>>>>>>>>
## Rajoutez à EXE le nom du fichier exécutable de votre programme 

EXE = search generate_strand 

## Rajoutez les dépendances pour créer votre programme exécutable

OBJECTS = profiling.o

search: search.c $(OBJECTS) 

## Fin de la partie modifiable <<<<

CC = gcc
CXX = g++

CXXFLAGS = -Wall -std=c++11
CFLAGS = -Wall -std=c11
LOADLIBES = -lm

all: $(EXE)

$(OBJECTS): %.o: %.c %.h

clean:
	-rm $(EXE) *.o
