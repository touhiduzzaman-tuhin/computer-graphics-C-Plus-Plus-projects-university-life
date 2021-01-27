#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>



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
//Bi-cycle Separate Function

//Tire Function

void tire()
{
    //back Tire/wheel


    //Tire

    glColor3ub (0, 0, 0);

    circle(8, 8, 78, 30);

    glColor3ub (255, 255, 255);

    circle(7, 7, 78, 30);


    // Ground

    glColor3ub (0, 0, 0);

    circle(6.5, 6.5, 78, 30);


    //Middle of the wheel

    glColor3ub (220, 0, 0);

    circle(1.5, 1.5, 78, 30);





    //Font Tire/wheel


    //Tire

    glColor3ub (0, 0, 0);

    circle(8, 8, 105, 31);

    glColor3ub (255, 255, 255);

    circle(7, 7, 105, 31);


    // Ground Road Color

    glColor3ub (0, 0, 0);

    circle(6.5, 6.5, 105, 31);




}

//Scope Function Back

void back_scope()
{
    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (79, 30.2, 0.0);
    glVertex3f (85, 30.2, 0.0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (78.9, 30.5, 0.0);
    glVertex3f (84, 32.2, 0.0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (78.8, 31, 0.0);
    glVertex3f (83, 34.2, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (78.5, 31.3, 0.0);
    glVertex3f (81, 36, 0);
    glEnd();




    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (71, 30, 0.0);
    glVertex3f (77, 30, 0);
    glEnd();


    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (71.5, 32, 0.0);
    glVertex3f (77, 30.5, 0);
    glEnd();


    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (72.5, 34, 0.0);
    glVertex3f (77.2, 31, 0);
    glEnd();


    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (75, 36, 0.0);
    glVertex3f (77.5, 31.2, 0);
    glEnd();


    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (78, 37, 0.0);
    glVertex3f (78, 31.2, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (71.8, 28, 0.0);
    glVertex3f (77, 29.8, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (72.5, 25.8, 0.0);
    glVertex3f (77, 29.4, 0);
    glEnd();


    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (74, 24.5, 0.0);
    glVertex3f (77, 29.1, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (76, 23.2, 0.0);
    glVertex3f (77.5, 29.1, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (79, 23.2, 0.0);
    glVertex3f (77.8, 29.2, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (82, 24.5, 0.0);
    glVertex3f (78, 29.3, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (80.3, 24.1, 0.0);
    glVertex3f (78, 29.3, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (83.7, 25.8, 0.0);
    glVertex3f (78.5, 29.3, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (84.8, 28.2, 0.0);
    glVertex3f (79, 29.6, 0);
    glEnd();
}


//Font Scope Function

void font_scope()
{
    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (98.5, 31, 0.0);
    glVertex3f (111.5, 31, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (98.5, 33, 0.0);
    glVertex3f (111.5, 29, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (99.5, 35, 0.0);
    glVertex3f (110.5, 27, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (101, 36.5, 0.0);
    glVertex3f (109, 26, 0);
    glEnd();



    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (98.5, 29, 0.0);
    glVertex3f (111.5, 33, 0);
    glEnd();


    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (99.5, 27, 0.0);
    glVertex3f (110.5, 35, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (101, 26, 0.0);
    glVertex3f (109, 36.5, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (103, 24.8, 0.0);
    glVertex3f (107, 37, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (105, 24, 0.0);
    glVertex3f (105, 38, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (107, 24.3, 0.0);
    glVertex3f (103, 37.8, 0);
    glEnd();
}



//Bi-cycle Function

void bi_cycle()
{
    //Bi-Cycle

    //Caria


    glColor3ub (178, 184, 199);

    circle(5, 2.5, 77, 40.5);

    //Remove Extra Part

    glColor3ub (8, 130, 19);

    circle(6, 3, 77, 38.5);

    // Call Tire Function

    tire();






    //Call Scope Function

    back_scope();

    font_scope();


    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (77.4, 29.7, 0);
    glVertex3f (93, 29.7, 0);
    glVertex3f (93, 30.4, 0);
    glVertex3f (77.4, 30.4, 0);
    glEnd();

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (91, 30.4, 0);
    glVertex3f (91.7, 30.4, 0);
    glVertex3f (85.7, 45, 0);
    glVertex3f (85, 45, 0);
    glEnd();


    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (86.3, 42, 0);
    glVertex3f (100, 42, 0);
    glVertex3f (100, 42.8, 0);
    glVertex3f (86.3, 42.8, 0);
    glEnd();


    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (91.7, 30.4, 0);
    glVertex3f (92.4, 30.4, 0);
    glVertex3f (100.7, 41, 0);
    glVertex3f (100, 41, 0);
    glEnd();



    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (98.2, 46, 0);
    glVertex3f (99, 46, 0);
    glVertex3f (105.4, 31, 0);
    glVertex3f (104.6, 31, 0);
    glEnd();



    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (77.2, 30, 0);
    glVertex3f (78, 30, 0);
    glVertex3f (86.8, 42.7, 0);
    glVertex3f (86, 42.7, 0);
    glEnd();



    //Handle

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (95, 44, 0);
    glVertex3f (95, 45, 0);
    glVertex3f (102, 48, 0);
    glVertex3f (102, 47, 0);
    glEnd();

    //Caria Handle


    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (80, 39, 0);
    glVertex3f (82.3, 39, 0);
    glVertex3f (82.3, 39.5, 0);
    glVertex3f (80, 39.5, 0);
    glEnd();

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (82, 39, 0);
    glVertex3f (82.5, 39, 0);
    glVertex3f (86.3, 44, 0);
    glVertex3f (85.8, 44, 0);
    glEnd();


    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (80, 39.5, 0);
    glVertex3f (80.2, 39.5, 0);
    glVertex3f (80.2, 41.1, 0);
    glVertex3f (80, 41.1, 0);
    glEnd();

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (81, 39.5, 0);
    glVertex3f (81.2, 39.5, 0);
    glVertex3f (81.2, 40.7, 0);
    glVertex3f (81, 40.7, 0);
    glEnd();




}

void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

    bi_cycle();

    glutSwapBuffers();
}


void init (void)
{
    //Background Color

    glClearColor (0, 0, 0, 0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glPointSize(4.0);

    gluOrtho2D(0, 135, 0, 68);
}


//Main Function


int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1350, 680);

    glutInitWindowPosition (10, 10);

    glutCreateWindow ("Project");

    init ();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
