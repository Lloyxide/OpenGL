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

void gestionClavier(unsigned char touche, int x, int y){	
	if(touche == '+'){
		taillePoint += 1.0;
	}
	if(touche == '-' && taillePoint > 1.0){
		taillePoint -= 1.0;
	}

	glutPostRedisplay();
	
}

void glutSpecialUpFunc(void (*func)(unsigned char touche, int x, int y)){
	switch(touche){
		case GLUT_KEY_DOWN: 
			point.y+=0.1;
		break;
		case GLUT_KEY_UP: 
			point.y-=0.1;
		break;
		case GLUT_KEY_RIGHT: 
			point.x+=0.1;
		break;
		case GLUT_KEY_LEFT: 
			point.x-=0.1;
		break;
	}
}
