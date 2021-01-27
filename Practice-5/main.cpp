#include<windows.h>
#include<GL/gl.h>
#include<GL/glut.h>



void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 0.1);
    glBegin(GL_POLYGON);
    glVertex3f(.3, .3, 0);
    glVertex3d(.7, .3, 0);
    glVertex3d(.7, .7, 0);
    glVertex3d(.3, .7, 0);
    glEnd();

    glutSwapBuffers();

}

void init(void)
{

    glClearColor(0, 0, 0, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 1, 0, 1, -1, 1);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Home");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
