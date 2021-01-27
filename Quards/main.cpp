#include<windows.h>

#include <GL/gl.h>

#include <GL/glut.h>

void init (void)
{

    glClearColor (0, 0, 0, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 500, 0, 500, -500, 500);
}

void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

    glColor3i (100, 250, 10);
    glBegin(GL_QUADS);
    glVertex2i (25, 25);
    glVertex2i (75, 25);
    glVertex2i (75, 75);
    glVertex2i (25, 75);
    glEnd();


    glutSwapBuffers();

}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Quadsp");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
