#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>


void init (void)
{

    glClearColor (255, 255, 255, 0);   // Background Color
    glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
    glLoadIdentity();
    glOrtho(-100, 100, -100, 100, -100, 100); // To specify the coordinate & Specify the distances to the nearer and farther depth
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


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);



    glColor3ub (255, 188, 0);

    circle(40, 40, -50, 60);


    glColor3ub (255, 211, 89);

    circle(35, 35, -50, 60);


    glColor3ub (255, 204, 13);

    circle(35, 30, -50, 50);



    //left eye

    glColor3ub (72, 20, 1);

    circle(8, 6, -68, 62);

    glColor3ub (255, 200, 44);

    circle(8, 6, -67, 60);



    glColor3ub (84, 33, 4);

    circle(5, 10, -65, 50);

    glColor3ub (135,72,17);

    circle(4, 9.5, -66, 50);


    //right eye

    glColor3ub (71, 20, 1);

    circle(10, 6, -35, 62);

    glColor3ub (255, 204, 13);

    circle(13, 6, -35, 60);


    glColor3ub (72, 20, 1);

    circle(8, 6, -35, 55);

    glColor3ub (135, 72, 17);

    circle(8, 6, -34, 53);



    glColor3ub (0, 0, 0);

    circle(10, 10, -35, 50);




    glColor3ub (120, 75, 54);

    circle(10, 10, -35, 48);

    glColor3ub (255, 204, 13);

    circle(10, 10, -35, 46);



    //Love

    glColor3ub(132, 0, 0);

    circle(8, 8, -25, 35);

    glColor3ub (132, 0, 0);

    circle(8, 8, -12, 35);


    glColor3ub (132, 0, 0);

    glBegin(GL_POLYGON);
    glVertex3f (-33, 32, 0);
    glVertex3f (-4, 32, 0);
    glVertex3f (-18, 17, 0);
    glEnd();



    //Three



    glColor3ub (123, 62, 14);

    circle(4, 4, -50, 38);

    glColor3ub (255, 204, 13);

    circle(4, 4, -51, 38);


    glColor3ub (123, 62, 14);

    circle(4, 4, -50, 31);

    glColor3ub (255, 204, 13);

    circle(4, 4, -51, 31);










    //Second Emoji

    //First circle



    glColor3ub(235, 142, 2);

    circle(50, 50, 45, -10);



    //Second circle

    glColor3ub (255, 225, 51);

    circle(46, 46, 45, -10);


    //Mouth




    glColor3ub (0, 0, 0);

    circle(30, 30, 45, -10);

    glColor3ub (132, 0, 0);

    circle(5, 13, 45, -30);

    glColor3ub (255, 255, 255);

    circle(33, 13, 45, -13);




    glColor3ub (255, 225, 51);

    glBegin(GL_POLYGON);
    glVertex3f (10, -20, 0);
    glVertex3f (80, -20, 0);
    glVertex3f (80, 20, 0);
    glVertex3f (10, 20, 0);
    glEnd();






    //Left Eye

    glColor3ub (132, 0, 0);

    circle(8, 8, 18, 15);

    glColor3ub (132, 0, 0);

    circle(8, 8, 31, 15);



    glColor3ub (132, 0, 0);

    glBegin(GL_POLYGON);
    glVertex3f (10, 12, 0);
    glVertex3f (39, 12, 0);
    glVertex3f (24, -3, 0);
    glEnd();



    //Right Eye

    glColor3ub (132, 0, 0);

    circle(8, 8, 58, 15);

    glColor3ub (132, 0, 0);

    circle(8, 8, 71, 15);



    glColor3ub (132, 0, 0);

    glBegin(GL_POLYGON);
    glVertex3f (50, 12, 0);
    glVertex3f (79, 12, 0);
    glVertex3f (64, -3, 0);
    glEnd();








    glutSwapBuffers();

}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); //Double Frame
    glutInitWindowSize (750, 750);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Emoji");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
