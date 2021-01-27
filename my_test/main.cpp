#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//#include<stdarg.h>

static GLfloat spin = 0.0;
static float	tx	=  0.0;
static float	ty	=  0.0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

	//glPushMatrix();

	glRotatef(spin, 0.0, 1.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);

	glTranslatef(tx,ty,0);

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (12.5, 26, 0);
    glVertex3f (21.5, 26, 0);
    glVertex3f (21.5, 28, 0);
    glVertex3f (12.5, 28, 0);
    glEnd();

	glPopMatrix();


	glFlush();


}

void spinDisplay_left(void)
{
   spin = spin - 10;

   glutPostRedisplay();
}

void init(void)
{
	glClearColor (1.0, 0.0, 0.0, 0.0);
	gluOrtho2D(0, 100, 0, 100.0);
}

void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left); //glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
         break;

      default:
         break;
   }
}

int main()
{
	//PlaySound("Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_ASYNC|SND_FILENAME);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("LAB3");
	init();

    glutDisplayFunc(display);


    glutMouseFunc(my_mouse);
	glutMainLoop();
	return 0;
}
