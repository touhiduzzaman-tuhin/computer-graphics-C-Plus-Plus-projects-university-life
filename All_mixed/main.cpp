#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

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


    //circle
    glColor3ub(255,0, 0);
    circle(5, 5, 20, 80);

    //rectangle
    glColor3ub(0, 255, 0);
    glBegin(GL_POLYGON);
    glVertex3f(5, 40, 0);
    glVertex3f(15, 40, 0);
    glVertex3f(15, 30, 0);
    glVertex3f(5, 30, 0);
    glEnd();


    //Triangle

    glColor3ub(0, 255, 0);
    glBegin(GL_POLYGON);
    glVertex3f(15, 50, 0);
    glVertex3f(35, 50, 0);
    glVertex3f(25, 70, 0);
    glEnd();


    //Line

    glColor3ub(0, 255, 0);
    glBegin(GL_LINES);
    glVertex3f(45, 50, 0);
    glVertex3f(75, 50, 0);
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
