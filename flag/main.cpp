#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>


void init (void)
{

    glClearColor (0, 0, 0, 0);   // Background Color
    glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
    glLoadIdentity();
    glOrtho(-100, 100, -100, 100, -100, 100); // To specify the coordinate & Specify the distances to the nearer and farther depth
}


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


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f (0,255,0);

    glBegin(GL_POLYGON);
    glVertex3f (-60, 10, 0.0);
    glVertex3f (60, 10, 0.0);
    glVertex3f (60, 80, 0.0);
    glVertex3f (-60, 80, 0.0);
    glEnd();

     glColor3f (255,0,0);


    circle(15, 15, 0, 45);




    glutSwapBuffers();

}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); //Double Frame
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("FOURTH Class");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
