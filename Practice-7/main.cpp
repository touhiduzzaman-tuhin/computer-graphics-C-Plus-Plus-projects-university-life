#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int day = 2;

float p = 0;
float m = 0;

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(cx, cy);

    for(int i = 0; i <= 101; i++)
    {

        float angle = 2.0f * 3.14156f * i/100;

        float x = rx * cosf(angle);

        float y = ry * sinf(angle);

        glVertex2f((x + cx), (y + cy));
    }

    glEnd();
}


void one()
{
        if(p <= 30)
        {
            p += 0.05;
        }

    else
    {
        p = 30;


    }

    glutPostRedisplay();

    glColor3f (255, 255, 255);

    circle(3, 3, p+2, 50);



}

void two()
{

    if(m <= 80)
            {
                m += 0.05;

            }
    glutPostRedisplay();

    glColor3f (255, 255, 255);

    circle(3, 3, 50, m+50);

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


    glutDisplayFunc(display);
    glutKeyboardFunc(keyboardFunc);
    glutMainLoop();


return 0;
}

