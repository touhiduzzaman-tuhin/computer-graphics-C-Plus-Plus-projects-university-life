#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

float p = -10;
int state  = 1;


void init (void)
{

    glClearColor (0, 0, 0, 0);   // Background Color
    glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
    glLoadIdentity();
    glOrtho(-10, 10, -10, 10, -10, 10); // To specify the coordinate & Specify the distances to the nearer and farther depth
}




void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(p, 3);
    glVertex2f(p+3, 3);
    glVertex2f(p+3, -3);
    glVertex2f(p, -3);
    glEnd();

    glutSwapBuffers();

}
void timer(int){
     if(p <= 10)
    {
        p += 0.10;
    }

    else
    {
        p = -5;
    }

    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);


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
    glutTimerFunc(0,timer,0);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
