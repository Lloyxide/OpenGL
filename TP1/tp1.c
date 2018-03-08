#include <GL/gl.h>
#include <GL/glu.h>
#include <math.h>
#include <GL/glut.h>

#include "geometrie.h"
#include "global.h"
#include "graphique.h"
#include "souris.h"
#include "clavier.h"

float taillePoint;

int main (int argc, char *argv[]){
	
	taillePoint = 1.0;
	point.x = UNDEFINED;
	point.y = UNDEFINED;

	/* initialiser glut */
	glutInit(&argc, argv);

	/* Options diverses */
	glutInitWindowSize(1024, 1024); 
	glutInitWindowPosition(100, 100);

	/* Créer la fenêtre */
	glutCreateWindow(argv[0]);

	/* Choix de la fonction de rafraichissement */
	glutDisplayFunc(dessiner);

  	glClearColor(1, 1, 1, 1);

	glutKeyboardFunc(gestionClavier);
	glutMouseFunc(gestionSouris);

	/* Démarrer la boucle évènementielle */
	glutMainLoop();
	
	return 0;

}
