#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

float p = 8;

float m = 0;

float n = 0;

float r  = 0 ;

float x = 0;

bool t = true;

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


void display()
{

    glClear(GL_COLOR_BUFFER_BIT);

        glColor3ub(255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex3f (40, 30, 0);
        glVertex3f (50, 30, 0);
        glVertex3f (50, 40, 0);
        glVertex3f (40, 40, 0);
        glEnd();

     if(p <= 30)
    {
        p += 0.05;
    }

    else
    {
        p = 30;

        if(p ==30)
        {
            p = 31;
            if(m <= 80)
            {
                m += 0.05;
            }

            else
            {


                glColor3f (255, 255, 255);

                circle(3, 3, 31, n+100);

                if(n > -50)
                {
                    n -= 0.05;
                }

                else
                {
                    glColor3f (0, 0, 0);

                    circle(5, 5, 30, 49);

                    if(p == 31)
                    {
                        glColor3f (255, 255, 255);

                        circle(3, 3, r+31, 50);

                        if(r <= 15)
                        {
                            r += 0.05;
                        }

                        else
                        {


                            if(t)
                            {
                                glColor3f (0, 0, 0);

                                circle(5, 5, 46,50);


                                glColor3f (255, 255, 255);

                                circle(3, 3, 46, x+50);


                                if(x >= -47)
                                {
                                    x -= 0.05;
                                }


                            }
                        }
                    }
                }
            }

        }


    }

    glutPostRedisplay();


    glColor3f (255, 255, 255);

    circle(3, 3, p+2, m+50);

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
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
