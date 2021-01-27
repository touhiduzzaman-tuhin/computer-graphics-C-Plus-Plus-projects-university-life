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

    char string[]="Max";
    void *font=GLUT_BITMAP_TIMES_ROMAN_24;
    int k;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(200,200);
    for(k=0;k<strlen(string);k++)
            glutBitmapCharacter(font,string[k]);

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
