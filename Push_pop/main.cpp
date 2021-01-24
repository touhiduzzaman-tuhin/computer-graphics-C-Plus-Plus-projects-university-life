#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#endif
#include <stdlib.h>
#include <unistd.h>

int key = 1;
float p = -20;
int state = 1;
static float cx = 0.0;
static float cy = 0.0;
void init (void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);// Background Color
    glMatrixMode(GL_PROJECTION);/* initialize viewing values */
    glLoadIdentity();
    glOrtho(-25.0,25.0,-35.0,35.0,-1.0,1.0); // To specify the coordinate & Specify the distances to the nearer and farther depth
}

///Circle
void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i = 0; i <= 100; i++)
    {
        float angle = 2.0f * 3.1416f * i/100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    /* clear all pixels */

    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    glutPostRedisplay();
    glColor3f (0.225, 0.245, 0.0);
    glTranslatef(cx,cy,0);
    //glRectf(-25.0, -25.0, 25.0, 25.0);


    circle(2.0,3.0,-20.0,p-12);
    glPopMatrix();
    //circle(2.0,3.0,p+1,-22.0);
    glBegin(GL_POLYGON);

    glEnd();
    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glutSwapBuffers();
//glFlush();
}


void timer(int)
{
    glClear (GL_COLOR_BUFFER_BIT);
    switch(key)
    {
    case (1):
        if(p < 45)
        {
            p = p + 0.01;
        }
        else
            key = 2;
        break;

    case (2):
        if(p > -20)
        {
            p = p - 0.01;

        }
        else
            key = 0;
        break;
///



    }



    glutPostRedisplay();
    glutTimerFunc(0, timer, 0);
}


void spinDisplay_left(void)
{
    p = p + 10;

    glutPostRedisplay();
}

void spinDisplay_right(void)
{
    p = p - 10;

    glutPostRedisplay();
}




void my_keyboard(unsigned char key,int x, int y)//In main(), To register a callback to the keyboard function,
{

    switch (key)
    {

    case 'l':
        spinDisplay_left();
        break;

    case 'r':
        spinDisplay_right();
        break;

    case 's':
        glutIdleFunc(NULL); //idle callback is continuously called when events are not being received
        break;

    default:
        break;
    }
}


void spe_key(int key, int x, int y) // glutSpecialFunc sets the special keyboard callback for the current window
{

    switch (key)
    {
        glClear (GL_COLOR_BUFFER_BIT);
    case GLUT_KEY_UP:

        // cy +=0.5;

        ///glClear (GL_COLOR_BUFFER_BIT);

        switch(key)
        {
        case (1):
            if(p < 45)
            {
                p = p + 0.01;
            }
            else
                key = 2;
            break;

        case (2):
            if(p > -20)
            {
                p = p - 0.01;

            }
            else
                key = 0;
            break;
///

        }

        //PlaySound("Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_ASYNC|SND_FILENAME);

        glutTimerFunc(0, timer, 0);
        break;



    case GLUT_KEY_DOWN:

        //PlaySound("Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_ASYNC|SND_FILENAME);
        cy -=0.5;


        glutPostRedisplay();
        break;

    case GLUT_KEY_RIGHT:
        //PlaySound("Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_ASYNC|SND_FILENAME);
        cx +=0.5;
        glutPostRedisplay();
        break;



    case GLUT_KEY_LEFT:
        //PlaySound("Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_ASYNC|SND_FILENAME);
        cx -=0.5;
        glutPostRedisplay();
        break;



    default:
        break;
    }
    glutPostRedisplay();
    glutTimerFunc(0, timer, 0);
}

void my_mouse(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left); //glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_right);

        break;
    default:
        break;
    }
}

/*
* Declare initial window size, position, and display mode
* (Double buffer & RGBA). Open window with "hello"
* In its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); //Double Frame
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutKeyboardFunc(my_keyboard);
    glutSpecialFunc(spe_key);
    glutMouseFunc(my_mouse);
    glutTimerFunc(0,timer,0);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
