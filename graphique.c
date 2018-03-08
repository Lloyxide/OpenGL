#include "graphique.h"

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
