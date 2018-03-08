#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
#include <math.h>

#define PI 3.14159265358979323846

float transZ = -15;
float angleY = -50;
float angleX = 15;



void cylindre(float r, float h, int nb){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.5, 0.5);

	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(0.0, 0.0, 0.0);
	int i;
	for(i = 0; i <= nb; i++){
		glVertex3f(r*cos((i*PI*2)/nb), r*sin((i*PI*2)/nb), 0.0);
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
	for(i = 0; i <= nb; i++){
		glVertex3f(r*cos((i*PI*2)/nb), r*sin((i*PI*2)/nb), h);
	}
	glEnd();
	
	float x, y, x1, y1;
	glColor3f(1, 0, 0.5);
	for(i = 0; i < 360; i++){
		x = r*cos((i*PI*2)/360);
		y = r*sin((i*PI*2)/360);
		x1 = r*cos(((i+1)*PI*2)/360);
		y1 = r*sin(((i+1)*PI*2)/360);
		glBegin(GL_QUADS);
			glVertex3f(x, y, 0);
			glVertex3f(x, y, h);
			glVertex3f(x1, y1, h);
			glVertex3f(x1, y1, 0);
		glEnd();
	}
	
}

void dessiner(){
  	glClearColor(0.0, 0.0, 0.0, 1.0);

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(0, 0, transZ);
	glRotatef(angleY, 0, 1, 0);
	glRotatef(angleX, 1, 0, 0);
	cylindre(2.0, 5.0, 50);
	glFlush();
}

/*void gerer_clavier(){
	if(touche == '+')
		transZ++;
	if(touche=='-')
		angleY += 10;
}*/
