#include <GL/gl.h>
#include <GL/glu.h>
#include <math.h>
#include <GL/glut.h>

#include "geometrie.h"
#include "global.h"
#include "graphique.h"
#include "souris.h"
#include "clavier.h"

void gestionSouris(int bouton, int etat, int x, int y){
	if(bouton == GLUT_LEFT_BUTTON && etat == GLUT_UP){
		int hauteur = glutGet(GLUT_WINDOW_HEIGHT);
		int largeur = glutGet(GLUT_WINDOW_WIDTH );
		
		float xt = (float)x/(float)largeur;
		float yt = 1-(float)y/(float)hauteur;
		
		point.x = xt*2-1;
		point.y = yt*2-1;
		
		
	}
	glutPostRedisplay();
}


