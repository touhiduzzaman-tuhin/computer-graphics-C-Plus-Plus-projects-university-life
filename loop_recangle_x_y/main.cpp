#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

float i = 0;
int state  = 1;


void init (void)
{

    glClearColor (0, 0, 0, 0);   // Background Color
    glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
    glLoadIdentity();
    glOrtho(0, 30, 0, 30, 0, 12); // To specify the coordinate & Specify the distances to the nearer and farther depth
}




void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);




    for(int i = 0; i <= 30; i += 4)
    {
        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(i+3, i+0);
        glVertex2f(i+3, i+3);
        glVertex2f(i+0, i+3);
        glVertex2f(i+0, i+0);
        glEnd();

    }



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
