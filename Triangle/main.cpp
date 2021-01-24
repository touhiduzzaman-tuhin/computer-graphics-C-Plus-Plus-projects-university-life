#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

void init (void)
{
    //Background Color

    glClearColor (0, 0, 0, 0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glPointSize(4.0);
    glPointSize(4.0);

    gluOrtho2D(0, 100, 0, 100);
}

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

    glColor3ub(141,100, 85);
    glBegin(GL_POLYGON);
    glVertex3f (40, 40, 0);
    glVertex3f (60, 40, 0);
    glVertex3f (50, 60, 0);
    glEnd();

    glutSwapBuffers();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (500, 500);

    glutInitWindowPosition (100, 100);

    glutCreateWindow ("Project");

    init ();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
