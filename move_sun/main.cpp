#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
int mov =0;
float inc =0.0;
float incY =0.0;


void init (void)
{

    glClearColor (0, 0, 0, 0);   // Background Color
    glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
    glLoadIdentity();
    glOrtho(0, 100, 0, 100, -100, 100); // To specify the coordinate & Specify the distances to the nearer and farther depth
}


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


void keyboardFunc( unsigned char key,int x,int y)
{
switch( key )
    {


    case 'a':
    case 'A':
		mov=1;
		break;

    case 's':
    case 'S':
		mov=2;
		break;

    case 'w':
    case 'W':
		mov=3;
		break;

    case 'z':
    case 'Z':
		mov=4;
		break;

    case 'd':
    case 'D':
		mov=5;
		break;

    };

}

void moveRight()
{

     if(inc <= 90)
    {
        inc += 0.05;
    }
    else
    {
        inc =0;
    }

     glutPostRedisplay();


    glColor3f (255, 255, 255);

    circle(3, 3, inc, incY);

}


void moveUp()
{

     if(incY <= 100)
    {
        //inc += 0.05;
        incY += 0.05;
    }
    else
    {
        incY =100;
    }

     glutPostRedisplay();


    glColor3f (255, 255, 255);

    circle(3, 3, inc, incY);

}


void moveDown()
{

     if(incY >= 0)
    {
        //inc += 0.05;
        incY -= 0.05;
    }
    else
    {
        incY =100;
    }

     glutPostRedisplay();


    glColor3f (255, 255, 255);

    circle(3, 3, inc, incY);

}


void movePause()
{

     if(incY >= 0)
    {
        //inc += 0.05;
        //incY -= 0.05;
    }
    else
    {
        incY =100;
    }

     glutPostRedisplay();


    glColor3f (255, 255, 255);

    circle(3, 3, inc, incY);

}

void moveLeft()
{

     if(inc >= 0)
    {
        inc -= 0.05;
    }
    else
    {
        inc =100;
    }

     glutPostRedisplay();


    glColor3f (255, 255, 255);

    circle(3, 3, inc, incY);

}


void display()
{

    glClear(GL_COLOR_BUFFER_BIT);

    if (mov==1)
    {
        moveLeft();
    }

     if (mov==2)
    {
        moveRight();
    }

      if (mov==3)
    {
        moveUp();
    }

      if (mov==4)
    {
        moveDown();
    }

      if (mov==5)
    {
        movePause();
    }


    glutPostRedisplay();

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
    glutKeyboardFunc(keyboardFunc);

    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
