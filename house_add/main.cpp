#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

float c = 0;

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

void left()
{
    glColor3ub(0, 209, 223);
    glBegin(GL_POLYGON);
    glVertex3f (30, 60, 0);
    glVertex3f (90, 63, 0);
    glVertex3f (90, 61, 0);
    glVertex3f (30, 58, 0);
    glEnd();




}

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);


    //Background
    glColor3ub(27, 148, 219);
    glBegin(GL_POLYGON);
    glVertex3f (0, 0, 0);
    glVertex3f (135, 0, 0);
    glVertex3f (135, 68, 0);
    glVertex3f (0, 68, 0);
    glEnd();

    //left function

    left();


    glutSwapBuffers();


}

void init (void)
{
    //Background Color

    glClearColor (255, 0, 0, 0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glPointSize(4.0);
    glPointSize(4.0);

    gluOrtho2D(0, 135, 0, 68);
}


//Main Function


int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1350, 680);

    glutInitWindowPosition (10, 10);

    glutCreateWindow ("Project");

    init ();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
