#include <windows.h>
#include <GL/gl.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <GL/glut.h>
#include<string.h>



void init (void)
{

    glClearColor(0.0,0.5,0.8,1.0);
	glColor3f(0.0,0.0,0.5);
	glPointSize(2.0);
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
}




void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0,0.0,0.0);
    glRasterPos2i(50,50);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'C');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'E');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'C');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,' ');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'R');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'I');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'L');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'W');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'Y');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,' ');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'S');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'I');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'O');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'N');

    glFlush();

}




int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(700,700);
	glutCreateWindow("dd");
	glutInitWindowPosition(0,0);
	glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;
}
