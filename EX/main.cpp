#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{

glClear (GL_COLOR_BUFFER_BIT);

glColor3ub(160,82,45);
glBegin(GL_QUADS);
glVertex3i(170, 160, 0);
glVertex3i(210, 100, 0);
glVertex3i(410, 100, 0);
glVertex3i(410, 160, 0);
glEnd();




glutSwapBuffers();
}
void init (void)
{

glClearColor (0,191,255, 255);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0, 100, 0, 100, -100, 100);
}




int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);

glutInitWindowSize (1350, 650);
glutInitWindowPosition (0, 0);

glutCreateWindow ("Project");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
