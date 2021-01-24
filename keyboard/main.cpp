#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int day = 1;


void one()
{
        glColor3ub(255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex3f (76, 52, 0);
        glVertex3f (100, 52, 0);
        glVertex3f (100, 20, 0);
        glVertex3f (76, 20, 0);
        glEnd();
}

void two()
{
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f (76, 52, 0);
        glVertex3f (100, 52, 0);
        glVertex3f (100, 20, 0);
        glVertex3f (76, 20, 0);
        glEnd();
}


void keyboardFunc( unsigned char key,int x,int y)
{
switch( key )
    {


    case 'l':
    case 'L':
		day=1;
		break;

    case 'R':
    case 'r':
		day=2;
		break;

    };

}

void init (void)
{
    //Background Color

    glClearColor (0, 0, 0, 0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glPointSize(4.0);
    glPointSize(4.0);

    gluOrtho2D(0, 135, 0, 68);
}

void display()
{
    glClear (GL_COLOR_BUFFER_BIT);

	if(day==1)
	{
		one();
	}

	if(day==2)
	{
        two();
	}

	glutPostRedisplay();

    glutSwapBuffers();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1350, 680);
    glutInitWindowPosition (10, 10);
    glutCreateWindow ("Final Project");
    init();
    glutKeyboardFunc(keyboardFunc);


    glutDisplayFunc(display);
    glutMainLoop();


return 0;
}

