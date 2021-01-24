#include <GL/gl.h>
#include <GL/glut.h>
int Key = 1;
float p = 0;

void init (void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100, 0, 100, 0, 100);
}


void timer (int){



    switch (Key) {

    case 1:
        if(p<=80){
            p = p+.50;
        }
        else

        Key = 2;
        break;
    case 2:
        if(p>=0){
            p = p-.50;
        }
        else
        Key = 1;
        break;
    }

    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);

}


void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (1.0, 0.25, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (p, 40);
    glVertex2f (p+20, 40);
    glVertex2f (p+20, 60);
    glVertex2f (p, 60);
    glEnd();

    glutSwapBuffers();
}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); //Double Frame
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutTimerFunc(0,timer,0);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
