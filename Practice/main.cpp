#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>


void circle()
{

    glScalef(5,100,0); //Scaling Circle to x-axis and y-axis
    glColor3f(6,0.,0);
    glutSolidSphere(6,100,10); //setting radius, slices

}

void display()
{

  glClear(GL_COLOR_BUFFER_BIT);
  //Push and pop matrix for separating circle object from Background
  glPushMatrix();
  circle();
  glPopMatrix();
  glutSwapBuffers();
  glFlush();


}

void init (void)
{
    //Background Color

    glClearColor (0, 0, 0, 0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glOrtho(0, 135, 0, 68, -100, 100);
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize (1350, 680);

    glutInitWindowPosition (10, 10);

    glutCreateWindow ("Project");

    init ();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
