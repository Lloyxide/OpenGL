#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
#include <math.h>

typedef struct{
	float x, y;
} point2D;

#define UNDEFINED -1E10;

float taillePoint = 40.0;
point2D point;

void gestionClavier(unsigned char touche, int x, int y){	
	if(touche == '+')
		taillePoint += 1.0;
	if(touche == '-' && taillePoint > 1.0)
		taillePoint -= 1.0;

	glutPostRedisplay();
}

void gestionSouris(int bouton, int etat, int x, int y){
	if(bouton == GLUT_LEFT_BUTTON && etat == GLUT_UP){
		int hauteur = glutGet(GLUT_WINDOW_HEIGHT);
		int largeur = glutGet(GLUT_WINDOW_WIDTH );
		
		point.x = x;
		point.y = y;
	}
	glutPostRedisplay();
}

void dessiner(void){
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0, 1, 0);

	glPointSize(taillePoint);
	glLineWidth(taillePoint);

	/*
	int i;
	float x, y, theta, r = 0.9;
	glBegin(GL_POINTS);
	for(i = 0; i<720; i++){
	
		x = r * sin((i*3.14)/360);
		y = r * cos((i*3.14)/360);

		glVertex2f(x, y);
	}
	glEnd();

	glColor3f(0, 1, 1);

	glBegin(GL_POLYGON);
	glVertex2f(-0.25, -0.25);
	glVertex2f(0.25, -0.25);
	glVertex2f(0.25, 0.25);
	glVertex2f(-0.25, 0.25);
	glEnd();
	*/

	glBegin(GL_POINTS);
	glVertex2f(point.x, point.y);
	glEnd();

	glFlush();
}

int main (int argc, char *argv[]){

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

}
