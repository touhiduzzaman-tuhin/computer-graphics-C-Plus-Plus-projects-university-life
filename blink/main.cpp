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

float n = 0;


void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

        if(n < 130.10)
    {
        n += 0.5;
    }

    else
    {
        n = 0;
    }



   glutPostRedisplay();


    int k = n*n;

    glColor3ub(1, (k*1000)%255, 1);

    circle(5, 5, 50, 50);


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
