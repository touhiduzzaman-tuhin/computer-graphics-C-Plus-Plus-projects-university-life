
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

float p = -10;
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

  glClearColor (0, 0, 0, 0);   // Background Color
  glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
  glLoadIdentity();
  glOrtho(-10, 10, -10, 10, -10, 10); // To specify the coordinate & Specify the distances to the nearer and farther depth
}

void timer(int){

  if(p <-8.10){


                  p += 0.00005;




   }
   else{
        p = -10;
   }



   glutPostRedisplay();
   glutTimerFunc(1000/60,timer,0);


}


void display(void)
{
  glClear(GL_COLOR_BUFFER_BIT);







    k=p*p*p*p*p*p;

    glColor3ub(1, (k*10)%255, 1);
    circle(2, 2, p+2, -1);





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
   glutTimerFunc(0,timer,0);
  glutMainLoop();
  return 0; /* ISO C requires main to return int. */
}
