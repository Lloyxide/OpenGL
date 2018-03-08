INCLUDE= -I /usr/include/GL
LIB= -lglut -lGLU -lGL -lm
CC=gcc
OPT= -g -Wall

tp3:	tp3.o graphique.o
	$(CC) -o tp3 tp3.o graphique.o $(OPT)  $(LIB)

tp3.o:	tp3.c
	$(CC) -c tp3.c  $(OPT) $(INCLUDE)

graphique.o:	graphique.c
	$(CC) -c graphique.c  $(OPT) $(INCLUDE)

clean:
	rm -f *.o tp3

