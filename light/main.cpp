
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

float p = 0;
int state  = 1;
bool direction=true;
int k;

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

  glClearColor (1, 0, 0, 0);   // Background Color
  glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
  glLoadIdentity();
  glOrtho(0, 10, 0, 10, 0, 10); // To specify the coordinate & Specify the distances to the nearer and farther depth
}



void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);





    if(p <0.10){

        p += 0.5;
    }

   else
    {
        p = 0;
    }



   glutPostRedisplay();



    k=p*p*p*p*p*p;

    glColor3ub(1, (k*100)%255, 1);
    circle(2, 2, p+2, 5);





    glutSwapBuffers();

}



int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); //Double Frame
  glutInitWindowSize (500, 500);
  glutInitWindowPosition (100, 100);
  glutCreateWindow ("map");
  init ();
  glutDisplayFunc(display);
  glutMainLoop();
  return 0; /* ISO C requires main to return int. */
}
