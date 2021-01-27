#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

float c = 0;

float po = 0;

int mode = 1;

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


void supporters()
{


    for(float i = 0; i <= 58; i+=4.55)
    {
        //Face

        glColor3ub (0, 0, 0);

        circle(1, 1, i+6, 67);



        glColor3ub (188, 130, 113);

        circle(1, .8, i+6, 66.8);

        //Eye

        glColor3ub (0, 0, 0);

        circle(.2, .2, i+5.5, 67);

        glColor3ub (0, 0, 0);

        circle(.2, .2, i+6.5, 67);

        //Leap

        glColor3ub (0, 0, 0);
        glBegin(GL_LINES);
        glVertex3f (i+5.7, 66.4, 0.0);
        glVertex3f (i+6.3, 66.4, 0);
        glEnd();



        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+5.7, 66, 0);
        glVertex3f (i+6.3, 66, 0);
        glVertex3f (i+6.3, 65.2, 0);
        glVertex3f (i+5.7, 65.2, 0);
        glEnd();

        glColor3ub(6,174, 132);
        glBegin(GL_POLYGON);
        glVertex3f (i+4.5, 65.2, 0);
        glVertex3f (i+7.5, 65.2, 0);
        glVertex3f (i+7.5, 62, 0);
        glVertex3f (i+4.5, 62, 0);
        glEnd();

        //hand left

        glColor3ub(255,0, 0);
        glBegin(GL_POLYGON);
        glVertex3f (i+4.5, 64.5, 0);
        glVertex3f (i+4.5, 65.3, 0);
        glVertex3f (i+3.4, 66.5, 0);
        glVertex3f (i+3.4, 65.7, 0);
        glEnd();

        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+3.4, 66, 0);
        glVertex3f (i+3.4, 66.5, 0);
        glVertex3f (i+5, 67.5, 0);
        glVertex3f (i+5, 67, 0);
        glEnd();

        //Hand Right

        glColor3ub(255,0, 0);
        glBegin(GL_POLYGON);
        glVertex3f (i+7.5, 65.2, 0);
        glVertex3f (i+8, 65.2, 0);
        glVertex3f (i+8.5, 63.7, 0);
        glVertex3f (i+8, 63.7, 0);
        glEnd();

        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+8, 63.7, 0);
        glVertex3f (i+8.5, 63.7, 0);
        glVertex3f (i+8, 62, 0);
        glVertex3f (i+7.5, 62, 0);
        glEnd();


    }

    //Bangladesh

    char string[]="B     A     N     G     L     A     D     E     S     H";
    void *font=GLUT_BITMAP_TIMES_ROMAN_24;
    int k;
    glColor3ub(0,0,0);
    glRasterPos2f(13.8,62.8);
    for(k=0;k<strlen(string);k++)
            glutBitmapCharacter(font,string[k]);



    //2nd Ror

    for(float i = 1.5; i <= 58; i+=4.55)
    {
        //Face

        glColor3ub (0, 0, 0);

        circle(1, 1, i+6, 63);



        glColor3ub (188, 130, 113);

        circle(1, .8, i+6, 62.8);

        //Eye

        glColor3ub (0, 0, 0);

        circle(.2, .2, i+5.5, 63);

        glColor3ub (0, 0, 0);

        circle(.2, .2, i+6.5, 63);

        //Leap

        glColor3ub (0, 0, 0);
        glBegin(GL_LINES);
        glVertex3f (i+5.7, 62.4, 0.0);
        glVertex3f (i+6.3, 62.4, 0);
        glEnd();



        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+5.7, 62, 0);
        glVertex3f (i+6.3, 62, 0);
        glVertex3f (i+6.3, 61.2, 0);
        glVertex3f (i+5.7, 61.2, 0);
        glEnd();

        glColor3ub(18,30, 69);
        glBegin(GL_POLYGON);
        glVertex3f (i+4.5, 61.2, 0);
        glVertex3f (i+7.5, 61.2, 0);
        glVertex3f (i+7.5, 58, 0);
        glVertex3f (i+4.5, 58, 0);
        glEnd();

        //hand left

        glColor3ub(224,117, 30);
        glBegin(GL_POLYGON);
        glVertex3f (i+4, 61.2, 0);
        glVertex3f (i+4.5, 61.2, 0);
        glVertex3f (i+4.5, 59.5, 0);
        glVertex3f (i+4, 59.5, 0);
        glEnd();

        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+4, 59.5, 0);
        glVertex3f (i+4.5, 59.5, 0);
        glVertex3f (i+4.5, 58.6, 0);
        glVertex3f (i+4, 58, 0);
        glEnd();

        //Hand Right

        glColor3ub(224,117, 30);
        glBegin(GL_POLYGON);
        glVertex3f (i+7.5, 61.2, 0);
        glVertex3f (i+8, 61.2, 0);
        glVertex3f (i+8.5, 59.7, 0);
        glVertex3f (i+8, 59.7, 0);
        glEnd();

        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+8, 59.7, 0);
        glVertex3f (i+8.5, 59.7, 0);
        glVertex3f (i+8, 58, 0);
        glVertex3f (i+7.5, 58, 0);
        glEnd();


    }

    char string1[]="            I     N     D     I      A";
    glColor3ub(224,117, 30);
    glRasterPos2f(13.8,59);
    for(k=0;k<strlen(string1);k++)
            glutBitmapCharacter(font,string1[k]);



    //3rd row

     for(float i = 0; i <= 54; i+=4.55)
    {
        //Face

        glColor3ub (0, 0, 0);

        circle(1, 1, i+6, 59);



        glColor3ub (188, 130, 113);

        circle(1, .8, i+6, 58.8);

        //Eye

        glColor3ub (0, 0, 0);

        circle(.2, .2, i+5.5, 59);

        glColor3ub (0, 0, 0);

        circle(.2, .2, i+6.5, 59);

        //Leap

        glColor3ub (0, 0, 0);
        glBegin(GL_LINES);
        glVertex3f (i+5.7, 58.4, 0.0);
        glVertex3f (i+6.3, 58.4, 0);
        glEnd();



        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+5.7, 58, 0);
        glVertex3f (i+6.3, 58, 0);
        glVertex3f (i+6.3, 57.2, 0);
        glVertex3f (i+5.7, 57.2, 0);
        glEnd();

        glColor3ub(6,174, 132);
        glBegin(GL_POLYGON);
        glVertex3f (i+4.5, 57.2, 0);
        glVertex3f (i+7.5, 57.2, 0);
        glVertex3f (i+7.5, 54, 0);
        glVertex3f (i+4.5, 54, 0);
        glEnd();

        //hand left

        glColor3ub(255,0, 0);
        glBegin(GL_POLYGON);
        glVertex3f (i+4, 57.2, 0);
        glVertex3f (i+4.5, 57.2, 0);
        glVertex3f (i+4.5, 55.5, 0);
        glVertex3f (i+4, 55.5, 0);
        glEnd();

        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+4, 55.5, 0);
        glVertex3f (i+4.5, 55.5, 0);
        glVertex3f (i+4.5, 54.6, 0);
        glVertex3f (i+4, 54, 0);
        glEnd();

        //Hand Right

        glColor3ub(255,0, 0);
        glBegin(GL_POLYGON);
        glVertex3f (i+7.5, 57.2, 0);
        glVertex3f (i+8, 57.2, 0);
        glVertex3f (i+8.5, 55.7, 0);
        glVertex3f (i+8, 55.7, 0);
        glEnd();

        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+8, 55.7, 0);
        glVertex3f (i+8.5, 55.7, 0);
        glVertex3f (i+8, 54, 0);
        glVertex3f (i+7.5, 54, 0);
        glEnd();


    }

    //4th row

     for(float i = 0; i <= 20; i+=4.55)
    {
        //Face

        glColor3ub (0, 0, 0);

        circle(1, 1, i+6, 55);



        glColor3ub (188, 130, 113);

        circle(1, .8, i+6, 54.8);

        //Eye

        glColor3ub (0, 0, 0);

        circle(.2, .2, i+5.5, 55);

        glColor3ub (0, 0, 0);

        circle(.2, .2, i+6.5, 55);

        //Leap

        glColor3ub (0, 0, 0);
        glBegin(GL_LINES);
        glVertex3f (i+5.7, 54.4, 0.0);
        glVertex3f (i+6.3, 54.4, 0);
        glEnd();



        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+5.7, 54, 0);
        glVertex3f (i+6.3, 54, 0);
        glVertex3f (i+6.3, 53.2, 0);
        glVertex3f (i+5.7, 53.2, 0);
        glEnd();

        glColor3ub(8,30, 69);
        glBegin(GL_POLYGON);
        glVertex3f (i+4.5, 53.2, 0);
        glVertex3f (i+7.5, 53.2, 0);
        glVertex3f (i+7.5, 50, 0);
        glVertex3f (i+4.5, 50, 0);
        glEnd();

        //hand left

        glColor3ub(224,117, 30);
        glBegin(GL_POLYGON);
        glVertex3f (i+4, 53.2, 0);
        glVertex3f (i+4.5, 53.2, 0);
        glVertex3f (i+4.5, 51.5, 0);
        glVertex3f (i+4, 51.5, 0);
        glEnd();

        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+4, 51.5, 0);
        glVertex3f (i+4.5, 51.5, 0);
        glVertex3f (i+4.5, 50.6, 0);
        glVertex3f (i+4, 50, 0);
        glEnd();

        //Hand Right

        glColor3ub(224,117, 30);
        glBegin(GL_POLYGON);
        glVertex3f (i+7.5, 53.2, 0);
        glVertex3f (i+8, 53.2, 0);
        glVertex3f (i+8.5, 51.7, 0);
        glVertex3f (i+8, 51.7, 0);
        glEnd();

        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+8, 51.7, 0);
        glVertex3f (i+8.5, 51.7, 0);
        glVertex3f (i+8, 50, 0);
        glVertex3f (i+7.5, 50, 0);
        glEnd();


    }


    //right

     for(float i = 41; i <= 53; i+=4.55)
    {
        //Face

        glColor3ub (0, 0, 0);

        circle(1, 1, i+6, 55);



        glColor3ub (188, 130, 113);

        circle(1, .8, i+6, 54.8);

        //Eye

        glColor3ub (0, 0, 0);

        circle(.2, .2, i+5.5, 55);

        glColor3ub (0, 0, 0);

        circle(.2, .2, i+6.5, 55);

        //Leap

        glColor3ub (0, 0, 0);
        glBegin(GL_LINES);
        glVertex3f (i+5.7, 54.4, 0.0);
        glVertex3f (i+6.3, 54.4, 0);
        glEnd();



        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+5.7, 54, 0);
        glVertex3f (i+6.3, 54, 0);
        glVertex3f (i+6.3, 53.2, 0);
        glVertex3f (i+5.7, 53.2, 0);
        glEnd();

        glColor3ub(8,30, 69);
        glBegin(GL_POLYGON);
        glVertex3f (i+4.5, 53.2, 0);
        glVertex3f (i+7.5, 53.2, 0);
        glVertex3f (i+7.5, 50, 0);
        glVertex3f (i+4.5, 50, 0);
        glEnd();

        //hand left

        glColor3ub(224,117, 30);
        glBegin(GL_POLYGON);
        glVertex3f (i+4, 53.2, 0);
        glVertex3f (i+4.5, 53.2, 0);
        glVertex3f (i+4.5, 51.5, 0);
        glVertex3f (i+4, 51.5, 0);
        glEnd();

        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+4, 51.5, 0);
        glVertex3f (i+4.5, 51.5, 0);
        glVertex3f (i+4.5, 50.6, 0);
        glVertex3f (i+4, 50, 0);
        glEnd();

        //Hand Right

        glColor3ub(224,117, 30);
        glBegin(GL_POLYGON);
        glVertex3f (i+7.5, 53.2, 0);
        glVertex3f (i+8, 53.2, 0);
        glVertex3f (i+8.5, 51.7, 0);
        glVertex3f (i+8, 51.7, 0);
        glEnd();

        glColor3ub(141,100, 85);
        glBegin(GL_POLYGON);
        glVertex3f (i+8, 51.7, 0);
        glVertex3f (i+8.5, 51.7, 0);
        glVertex3f (i+8, 50, 0);
        glVertex3f (i+7.5, 50, 0);
        glEnd();


    }






}

//field Function

void field()
{

    glColor3ub (32,82, 129);

    glBegin(GL_POLYGON);
    glVertex3f (0, 0, 0);
    glVertex3f (70, 0, 0);
    glVertex3f (80, 68, 0);
    glVertex3f (0, 68, 0);
    glEnd();

    //supporters

    supporters();



     //boundary

    glColor3f (255, 255, 255);

    circle(47, 33, 36, 22);

    //field

    glColor3ub (78, 127, 20);

    circle(46, 32, 36, 22);


    //Remove extra field part


    glColor3f (255,0, 0);

    glBegin(GL_POLYGON);
    glVertex3f (70, 0, 0);
    glVertex3f (135, 0, 0);
    glVertex3f (135, 50, 0);
    glVertex3f (70, 50, 0);
    glEnd();



    // Player Name

    glColor3f (255,255, 255);

    glBegin(GL_POLYGON);
    glVertex3f (0, 0, 0);
    glVertex3f (70, 0, 0);
    glVertex3f (70, 2, 0);
    glVertex3f (0, 2, 0);
    glEnd();

    //line



    // Score Card

    glColor3f (255,255, 255);

    glBegin(GL_POLYGON);
    glVertex3f (0, 2, 0);
    glVertex3f (70, 2, 0);
    glVertex3f (70, 4, 0);
    glVertex3f (0, 4, 0);
    glEnd();


    // Advertise

    glColor3f (255,255, 255);

    glBegin(GL_POLYGON);
    glVertex3f (0, 4, 0);
    glVertex3f (70, 4, 0);
    glVertex3f (70, 6, 0);
    glVertex3f (0, 6, 0);
    glEnd();

    //line

    glColor3f (0,0, 0);

    glBegin(GL_POLYGON);
    glVertex3f (0, 1.9, 0);
    glVertex3f (70, 1.9, 0);
    glVertex3f (70, 2.1, 0);
    glVertex3f (0, 2.1, 0);
    glEnd();

    glColor3f (0,0, 0);

    glBegin(GL_POLYGON);
    glVertex3f (0, 3.9, 0);
    glVertex3f (70, 3.9, 0);
    glVertex3f (70, 4.1, 0);
    glVertex3f (0, 4.1, 0);
    glEnd();

}

//Pitch Function

void pitch()
{
    //Main Pitch

    glColor3ub (157,149, 136);
    glBegin(GL_POLYGON);
    glVertex3f (28, 15, 0);
    glVertex3f (43, 15, 0);
    glVertex3f (43, 45, 0);
    glVertex3f (28, 45, 0);
    glEnd();


    //White Line Bat


    glColor3ub (225,227,201);
    glBegin(GL_POLYGON);
    glVertex3f (29, 40, 0);
    glVertex3f (42, 40, 0);
    glVertex3f (42, 40.3, 0);
    glVertex3f (29, 40.3, 0);
    glEnd();


    glColor3ub (225,227,201);
    glBegin(GL_POLYGON);
    glVertex3f (29, 43, 0);
    glVertex3f (42, 43, 0);
    glVertex3f (42, 43.3, 0);
    glVertex3f (29, 43.3, 0);
    glEnd();


    glColor3ub (225,227,201);
    glBegin(GL_POLYGON);
    glVertex3f (30, 40, 0);
    glVertex3f (30.3, 40, 0);
    glVertex3f (30.3, 43, 0);
    glVertex3f (30, 43, 0);
    glEnd();


    glColor3ub (225,227,201);
    glBegin(GL_POLYGON);
    glVertex3f (41, 40, 0);
    glVertex3f (41.3, 40, 0);
    glVertex3f (41.3, 43, 0);
    glVertex3f (41, 43, 0);
    glEnd();

    //Stump

    glColor3ub (153,120,83);
    glBegin(GL_POLYGON);
    glVertex3f (35, 43, 0);
    glVertex3f (35.5, 43, 0);
    glVertex3f (35.5, 49, 0);
    glVertex3f (35, 49, 0);
    glEnd();

    glColor3ub (153,120,83);
    glBegin(GL_POLYGON);
    glVertex3f (36, 43, 0);
    glVertex3f (36.5, 43, 0);
    glVertex3f (36.5, 49, 0);
    glVertex3f (36, 49, 0);
    glEnd();

    glColor3ub (153,120,83);
    glBegin(GL_POLYGON);
    glVertex3f (37, 43, 0);
    glVertex3f (37.5, 43, 0);
    glVertex3f (37.5, 49, 0);
    glVertex3f (37, 49, 0);
    glEnd();


    glColor3ub (169,26,25);
    glBegin(GL_POLYGON);
    glVertex3f (35.2, 49, 0);
    glVertex3f (36.2, 49, 0);
    glVertex3f (36.2, 49.4, 0);
    glVertex3f (35.2, 49.4, 0);
    glEnd();

    glColor3ub (169,26,25);
    glBegin(GL_POLYGON);
    glVertex3f (36.3, 49, 0);
    glVertex3f (37.3, 49, 0);
    glVertex3f (37.3, 49.4, 0);
    glVertex3f (36.3, 49.4, 0);
    glEnd();



    //White Line Ball

    glColor3ub (225,227,201);
    glBegin(GL_POLYGON);
    glVertex3f (29, 20, 0);
    glVertex3f (42, 20, 0);
    glVertex3f (42, 20.3, 0);
    glVertex3f (29, 20.3, 0);
    glEnd();


    glColor3ub (225,227,201);
    glBegin(GL_POLYGON);
    glVertex3f (29, 17, 0);
    glVertex3f (42, 17, 0);
    glVertex3f (42, 17.3, 0);
    glVertex3f (29, 17.3, 0);
    glEnd();


    glColor3ub (225,227,201);
    glBegin(GL_POLYGON);
    glVertex3f (30, 20, 0);
    glVertex3f (30.3, 20, 0);
    glVertex3f (30.3, 15, 0);
    glVertex3f (30, 15, 0);
    glEnd();


    glColor3ub (225,227,201);
    glBegin(GL_POLYGON);
    glVertex3f (41, 20, 0);
    glVertex3f (41.3, 20, 0);
    glVertex3f (41.3, 15, 0);
    glVertex3f (41, 15, 0);
    glEnd();

    //Stump

    glColor3ub (153,120,83);
    glBegin(GL_POLYGON);
    glVertex3f (35, 17, 0);
    glVertex3f (35.5, 17, 0);
    glVertex3f (35.5, 23, 0);
    glVertex3f (35, 23, 0);
    glEnd();

    glColor3ub (153,120,83);
    glBegin(GL_POLYGON);
    glVertex3f (36, 17, 0);
    glVertex3f (36.5, 17, 0);
    glVertex3f (36.5, 23, 0);
    glVertex3f (36, 23, 0);
    glEnd();

    glColor3ub (153,120,83);
    glBegin(GL_POLYGON);
    glVertex3f (37, 17, 0);
    glVertex3f (37.5, 17, 0);
    glVertex3f (37.5, 23, 0);
    glVertex3f (37, 23, 0);
    glEnd();


    glColor3ub (169,26,25);
    glBegin(GL_POLYGON);
    glVertex3f (35.2, 23, 0);
    glVertex3f (36.2, 23, 0);
    glVertex3f (36.2, 23.4, 0);
    glVertex3f (35.2, 23.4, 0);
    glEnd();

    glColor3ub (169,26,25);
    glBegin(GL_POLYGON);
    glVertex3f (36.3, 23, 0);
    glVertex3f (37.3, 23, 0);
    glVertex3f (37.3, 23.4, 0);
    glVertex3f (36.3, 23.4, 0);
    glEnd();


}

float bm = -12;

float bm1 = -12;

int bc = 0;

float km = 0;

//bowler

void bowler()
{
    if(bm <= -2)
    {
        bm += 0.05;
    }

    else
    {
        bc = 1;
    }

    //going bowler



    if(bc == 1)
    {
        if(bm <= 3)
        {
            bm += 0.02;
        }

        else
        {
            km = 1;
        }

    }

    //going to keeper

    if(km == 1)
    {
        if(bm <= 20)
        {
            bm += 0.005;
        }
    }


    glColor3ub (0, 0, 0);

    circle(1, 1.2, bm1+43, bm+28);




    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (bm1+42.5, bm+27, 0);
    glVertex3f (bm1+43.5, bm+27, 0);
    glVertex3f (bm1+43.5, bm+26, 0);
    glVertex3f (bm1+42.5, bm+26, 0);
    glEnd();

    //body

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (bm1+42, bm+26, 0);
    glVertex3f (bm1+44, bm+26, 0);
    glVertex3f (bm1+44, bm+23, 0);
    glVertex3f (bm1+42, bm+23, 0);
    glEnd();

    //leg

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (bm1+42.3, bm+23, 0);
    glVertex3f (bm1+42.8, bm+23, 0);
    glVertex3f (bm1+42.8, bm+21, 0);
    glVertex3f (bm1+42.3, bm+21, 0);
    glEnd();


    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (bm1+43.2, bm+23, 0);
    glVertex3f (bm1+43.7, bm+23, 0);
    glVertex3f (bm1+43.7, bm+21, 0);
    glVertex3f (bm1+43.2, bm+21, 0);
    glEnd();

    //hand left

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (bm1+41.5, bm+26, 0);
    glVertex3f (bm1+42.2, bm+26, 0);
    glVertex3f (bm1+41.5, bm+24.5, 0);
    glVertex3f (bm1+41, bm+24.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (bm1+41.5, bm+24.5, 0);
    glVertex3f (bm1+41, bm+24.5, 0);
    glVertex3f (bm1+42, bm+23.5, 0);
    glVertex3f (bm1+42.5, bm+23.5, 0);
    glEnd();

    //hand right

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (bm1+44, bm+26, 0);
    glVertex3f (bm1+44.5, bm+26, 0);
    glVertex3f (bm1+45, bm+24.5, 0);
    glVertex3f (bm1+44.5, bm+24.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (bm1+44.5, bm+24.5, 0);
    glVertex3f (bm1+45, bm+24.5, 0);
    glVertex3f (bm1+45.3, bm+26.5, 0);
    glVertex3f (bm1+44.8, bm+26.5, 0);
    glEnd();


    //Miraz

    char string7[]="Jassi";
    void *font7=GLUT_BITMAP_HELVETICA_10;
    int k;
    glColor3ub(255,0,0);
    glRasterPos2f(bm1+42,bm+25);
    for(k=0;k<strlen(string7);k++)
            glutBitmapCharacter(font7,string7[k]);



    char string8[]="93";
    void *font8=GLUT_BITMAP_HELVETICA_18;
    glColor3ub(255,0,0);
    glRasterPos2f(bm1+42.1,bm+23.5);
    for(k=0;k<strlen(string8);k++)
            glutBitmapCharacter(font8,string8[k]);


}





//ball move



float t = 0;

float u = -26.5;

float e = 0;

float xy = 0;

void ballmove()
{

    if(u <= -10)
    {
        u += 0.05;

        if(u == -6)
        {
            xy = 1;
        }
    }

    if(bc == 1)
    {
        if(u <= 0)
        {
            u += 0.05;
        }

        else
        {
            e = 1;

            if(t <= 0)
            {
                t -= 0.08;
            }


        }
    }

    glColor3ub (182, 22, 27);

    circle(1, 1, t+33, u+40.5);

    glColor3ub (231,232, 232);
    glBegin(GL_POLYGON);
    glVertex3f (t+32.8, u+39.5, 0);
    glVertex3f (t+33, u+39.5, 0);
    glVertex3f (t+33, u+39.7, 0);
    glVertex3f (t+32.8, u+39.7, 0);
    glEnd();

    glColor3ub (231,232, 232);
    glBegin(GL_POLYGON);
    glVertex3f (t+32.8, u+39.8, 0);
    glVertex3f (t+33, u+39.8, 0);
    glVertex3f (t+33, u+40, 0);
    glVertex3f (t+32.8, u+40, 0);
    glEnd();

    glColor3ub (231,232, 232);
    glBegin(GL_POLYGON);
    glVertex3f (t+32.8, u+40.1, 0);
    glVertex3f (t+33, u+40.1, 0);
    glVertex3f (t+33, u+40.3, 0);
    glVertex3f (t+32.8, u+40.3, 0);
    glEnd();

    glColor3ub (231,232, 232);
    glBegin(GL_POLYGON);
    glVertex3f (t+32.8, u+40.4, 0);
    glVertex3f (t+33, u+40.4, 0);
    glVertex3f (t+33, u+40.6, 0);
    glVertex3f (t+32.8, u+40.6, 0);
    glEnd();


    glColor3ub (231,232, 232);
    glBegin(GL_POLYGON);
    glVertex3f (t+32.8, u+40.7, 0);
    glVertex3f (t+33, u+40.7, 0);
    glVertex3f (t+33, u+40.9, 0);
    glVertex3f (t+32.8, u+40.9, 0);
    glEnd();


    glColor3ub (231,232, 232);
    glBegin(GL_POLYGON);
    glVertex3f (t+32.8, u+41, 0);
    glVertex3f (t+33, u+41, 0);
    glVertex3f (t+33, u+41.2, 0);
    glVertex3f (t+32.8, u+41.2, 0);
    glEnd();

    glColor3ub (231,232, 232);
    glBegin(GL_POLYGON);
    glVertex3f (t+32.8, u+41.3, 0);
    glVertex3f (t+33, u+41.3, 0);
    glVertex3f (t+33, u+41.5, 0);
    glVertex3f (t+32.8, u+41.5, 0);
    glEnd();

}





//Non striker Batsman

float h = 0;
float bsn = 0;

float bs = 18;

float bp = 18;

float q = 0;

float dn = 0;

float mu = 0;

void batsman2()
{


    if(e == 1)
    {
        if(bsn <= 18)
        {
            bsn += 0.03;
        }

        else
        {
            //q = 1;

            bsn = 220;

            if(bp >= -4)
            {
                bp -= 0.06;
            }

            else
            {
                mu = 1;
            }


            glColor3ub (0, 0, 0);

            circle(1, 1.3, 43, bp+28);

            glColor3ub (255, 255, 255);

            circle(1, 1, 43, bp+28);


            glColor3ub (0, 0, 0);

            circle(.2, .2, 42.5, bp+28);

            glColor3ub (0, 0, 0);

            circle(.2, .2, 43.5, bp+28);


            glColor3ub (162,87,58);
            glBegin(GL_POLYGON);
            glVertex3f (42.5, bp+27, 0);
            glVertex3f (43.5, bp+27, 0);
            glVertex3f (43.5, bp+26, 0);
            glVertex3f (42.5, bp+26, 0);
            glEnd();

            //body

            glColor3ub (2,112,93);
            glBegin(GL_POLYGON);
            glVertex3f (42, bp+26, 0);
            glVertex3f (44, bp+26, 0);
            glVertex3f (44, bp+23, 0);
            glVertex3f (42, bp+23, 0);
            glEnd();

            //leg

            glColor3ub (14,63,52);
            glBegin(GL_POLYGON);
            glVertex3f (42.3, bp+23, 0);
            glVertex3f (42.8, bp+23, 0);
            glVertex3f (42.8, bp+21, 0);
            glVertex3f (42.3, bp+21, 0);
            glEnd();


            glColor3ub (14,63,52);
            glBegin(GL_POLYGON);
            glVertex3f (43.2, bp+23, 0);
            glVertex3f (43.7, bp+23, 0);
            glVertex3f (43.7, bp+21, 0);
            glVertex3f (43.2, bp+21, 0);
            glEnd();

            //hand left

            glColor3ub (5,164,108);
            glBegin(GL_POLYGON);
            glVertex3f (41.5, bp+26, 0);
            glVertex3f (42.2, bp+26, 0);
            glVertex3f (41.5, bp+24.5, 0);
            glVertex3f (41, bp+24.5, 0);
            glEnd();

            glColor3ub (162,87,58);
            glBegin(GL_POLYGON);
            glVertex3f (41.5, bp+24.5, 0);
            glVertex3f (41, bp+24.5, 0);
            glVertex3f (42, bp+23.5, 0);
            glVertex3f (42.5, bp+23.5, 0);
            glEnd();

            //hand right

            glColor3ub (5,164,108);
            glBegin(GL_POLYGON);
            glVertex3f (44, bp+26, 0);
            glVertex3f (44.5, bp+26, 0);
            glVertex3f (45, bp+24.5, 0);
            glVertex3f (44.5, bp+24.5, 0);
            glEnd();

            glColor3ub (162,87,58);
            glBegin(GL_POLYGON);
            glVertex3f (44.5, bp+24.5, 0);
            glVertex3f (45, bp+24.5, 0);
            glVertex3f (44.5, bp+23.5, 0);
            glVertex3f (44, bp+23.5, 0);
            glEnd();

            //bat

            glColor3ub (211,178,142);
            glBegin(GL_POLYGON);
            glVertex3f (38, bp+20, 0);
            glVertex3f (39.5, bp+20, 0);
            glVertex3f (41.5, bp+22.5, 0);
            glVertex3f (40, bp+22.5, 0);
            glEnd();

            glColor3ub (214,224,89);
            glBegin(GL_POLYGON);
            glVertex3f (40.5, bp+22.5, 0);
            glVertex3f (41, bp+22.5, 0);
            glVertex3f (42.5, bp+23.8, 0);
            glVertex3f (42, bp+23.8, 0);
            glEnd();




            char string9[]="BAN";
            void *font8=GLUT_BITMAP_HELVETICA_10;
            int k;
            glColor3ub(255,0,0);
            glRasterPos2f(42,bp+24);
            for(k=0;k<strlen(string9);k++)
                    glutBitmapCharacter(font8,string9[k]);

        }
    }

    glColor3ub (0, 0, 0);

    circle(1, 1.2, 43, bsn+28);




    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (42.5, bsn+27, 0);
    glVertex3f (43.5, bsn+27, 0);
    glVertex3f (43.5, bsn+26, 0);
    glVertex3f (42.5, bsn+26, 0);
    glEnd();

    //body

    glColor3ub (2,112,93);
    glBegin(GL_POLYGON);
    glVertex3f (42, bsn+26, 0);
    glVertex3f (44, bsn+26, 0);
    glVertex3f (44, bsn+23, 0);
    glVertex3f (42, bsn+23, 0);
    glEnd();

    //leg

    glColor3ub (14,63,52);
    glBegin(GL_POLYGON);
    glVertex3f (42.3, bsn+23, 0);
    glVertex3f (42.8, bsn+23, 0);
    glVertex3f (42.8, bsn+21, 0);
    glVertex3f (42.3, bsn+21, 0);
    glEnd();


    glColor3ub (14,63,52);
    glBegin(GL_POLYGON);
    glVertex3f (43.2, bsn+23, 0);
    glVertex3f (43.7, bsn+23, 0);
    glVertex3f (43.7, bsn+21, 0);
    glVertex3f (43.2, bsn+21, 0);
    glEnd();

    //hand left

    glColor3ub (5,164,108);
    glBegin(GL_POLYGON);
    glVertex3f (41.5, bsn+26, 0);
    glVertex3f (42.2, bsn+26, 0);
    glVertex3f (41.5, bsn+24.5, 0);
    glVertex3f (41, bsn+24.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (41.5, bsn+24.5, 0);
    glVertex3f (41, bsn+24.5, 0);
    glVertex3f (42, bsn+23.5, 0);
    glVertex3f (42.5, bsn+23.5, 0);
    glEnd();

    //hand right

    glColor3ub (5,164,108);
    glBegin(GL_POLYGON);
    glVertex3f (44, bsn+26, 0);
    glVertex3f (44.5, bsn+26, 0);
    glVertex3f (45, bsn+24.5, 0);
    glVertex3f (44.5, bsn+24.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (44.5, bsn+24.5, 0);
    glVertex3f (45, bsn+24.5, 0);
    glVertex3f (44.5, bsn+23.5, 0);
    glVertex3f (44, bsn+23.5, 0);
    glEnd();

    //bat

    glColor3ub (211,178,142);
    glBegin(GL_POLYGON);
    glVertex3f (38, bsn+20, 0);
    glVertex3f (39.5, bsn+20, 0);
    glVertex3f (41.5, bsn+22.5, 0);
    glVertex3f (40, bsn+22.5, 0);
    glEnd();

    glColor3ub (214,224,89);
    glBegin(GL_POLYGON);
    glVertex3f (40.5, bsn+22.5, 0);
    glVertex3f (41, bsn+22.5, 0);
    glVertex3f (42.5, bsn+23.8, 0);
    glVertex3f (42, bsn+23.8, 0);
    glEnd();



    //Miraz

    char string7[]="Miraz";
    void *font7=GLUT_BITMAP_HELVETICA_10;
    int k;
    glColor3ub(255,0,0);
    glRasterPos2f(42,bsn+25);
    for(k=0;k<strlen(string7);k++)
            glutBitmapCharacter(font7,string7[k]);



    char string8[]="53";
    void *font8=GLUT_BITMAP_HELVETICA_18;
    glColor3ub(255,0,0);
    glRasterPos2f(42.1,bsn+23.5);
    for(k=0;k<strlen(string8);k++)
            glutBitmapCharacter(font8,string8[k]);




    //striker batsman

    if(e == 0)
    {
        glColor3ub (0, 0, 0);

        circle(1, 1, 39, 47.3);


        glColor3ub (255, 255, 255);

        circle(1, 1, 39, 47);

        //eye

        glColor3ub (0, 0, 0);

        circle(.2, .2, 38.3, 47);

        glColor3ub (0, 0, 0);

        circle(.2, .2, 39.3, 47);


        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (38.7, 45, 0);
        glVertex3f (39.5, 45, 0);
        glVertex3f (39.5, 46, 0);
        glVertex3f (38.7, 46, 0);
        glEnd();




        //body

        glColor3ub (2,112,93);
        glBegin(GL_POLYGON);
        glVertex3f (38, 45, 0);
        glVertex3f (40, 45, 0);
        glVertex3f (41, 43, 0);
        glVertex3f (39, 43, 0);
        glEnd();

        //hand

        glColor3ub (5,164,108);
        glBegin(GL_POLYGON);
        glVertex3f (37, 43.8, 0);
        glVertex3f (38.5, 45.2, 0);
        glVertex3f (38.5, 44, 0);
        glVertex3f (37, 42.8, 0);
        glEnd();



         if(km == 1)
         {
             if(h <= 41)
             {
                 h += 0.2;
             }



         }


        //bat

        glColor3ub (211,178,142);
        glBegin(GL_POLYGON);
        glVertex3f (33, h+40, 0);
        glVertex3f (36, 43.5, 0);
        glVertex3f (36, 42, 0);
        glVertex3f (33, h+38.5, 0);
        glEnd();

        glColor3ub (214,224,89);
        glBegin(GL_POLYGON);
        glVertex3f (36, 42.8, 0);
        glVertex3f (37.5, 44, 0);
        glVertex3f (37.5, 43.5, 0);
        glVertex3f (36, 42.3, 0);
        glEnd();



        //middle

        glColor3ub (14,63,52);
        glBegin(GL_POLYGON);
        glVertex3f (39, 43, 0);
        glVertex3f (41, 43, 0);
        glVertex3f (40, 41, 0);
        glVertex3f (39, 41, 0);
        glEnd();

        //leg

        glColor3ub (14,63,52);
        glBegin(GL_POLYGON);
        glVertex3f (39.5, 41, 0);
        glVertex3f (40, 41, 0);
        glVertex3f (39, 39, 0);
        glVertex3f (38.5, 39, 0);
        glEnd();


        glColor3ub (14,63,52);
        glBegin(GL_POLYGON);
        glVertex3f (39, 41, 0);
        glVertex3f (39.5, 41, 0);
        glVertex3f (41, 39, 0);
        glVertex3f (40.5, 39, 0);
        glEnd();

    }



    //runing batsman

    //batsman3

    if(e == 1)
    {
        if(bs >= -4)
        {
            bs -= 0.023;
        }

        else
        {
            dn = 1;

            bs = -200;
        }


        glColor3ub (0, 0, 0);

        circle(1, 1.3, 33, bs+28);

        glColor3ub (255, 255, 255);

        circle(1, 1, 33, bs+28);


        glColor3ub (0, 0, 0);

        circle(.2, .2, 32.5, bs+28);

        glColor3ub (0, 0, 0);

        circle(.2, .2, 33.5, bs+28);


        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (32.5, bs+27, 0);
        glVertex3f (33.5, bs+27, 0);
        glVertex3f (33.5, bs+26, 0);
        glVertex3f (32.5, bs+26, 0);
        glEnd();

        //body

        glColor3ub (2,112,93);
        glBegin(GL_POLYGON);
        glVertex3f (32, bs+26, 0);
        glVertex3f (34, bs+26, 0);
        glVertex3f (34, bs+23, 0);
        glVertex3f (32, bs+23, 0);
        glEnd();

        //leg

        glColor3ub (14,63,52);
        glBegin(GL_POLYGON);
        glVertex3f (32.3, bs+23, 0);
        glVertex3f (32.8, bs+23, 0);
        glVertex3f (32.8, bs+21, 0);
        glVertex3f (32.3, bs+21, 0);
        glEnd();


        glColor3ub (14,63,52);
        glBegin(GL_POLYGON);
        glVertex3f (33.2, bs+23, 0);
        glVertex3f (33.7, bs+23, 0);
        glVertex3f (33.7, bs+21, 0);
        glVertex3f (33.2, bs+21, 0);
        glEnd();

        //hand left

        glColor3ub (5,164,108);
        glBegin(GL_POLYGON);
        glVertex3f (31.5, bs+26, 0);
        glVertex3f (32.2, bs+26, 0);
        glVertex3f (31.5, bs+24.5, 0);
        glVertex3f (31, bs+24.5, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (31.5, bs+24.5, 0);
        glVertex3f (31, bs+24.5, 0);
        glVertex3f (32, bs+23.5, 0);
        glVertex3f (32.5, bs+23.5, 0);
        glEnd();

        //hand right

        glColor3ub (5,164,108);
        glBegin(GL_POLYGON);
        glVertex3f (34, bs+26, 0);
        glVertex3f (34.5, bs+26, 0);
        glVertex3f (35, bs+24.5, 0);
        glVertex3f (34.5, bs+24.5, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (34.5, bs+24.5, 0);
        glVertex3f (35, bs+24.5, 0);
        glVertex3f (34.5, bs+23.5, 0);
        glVertex3f (34, bs+23.5, 0);
        glEnd();

        //bat

        glColor3ub (211,178,142);
        glBegin(GL_POLYGON);
        glVertex3f (28, bs+20, 0);
        glVertex3f (29.5, bs+20, 0);
        glVertex3f (31.5, bs+22.5, 0);
        glVertex3f (30, bs+22.5, 0);
        glEnd();

        glColor3ub (214,224,89);
        glBegin(GL_POLYGON);
        glVertex3f (30.5, bs+22.5, 0);
        glVertex3f (31, bs+22.5, 0);
        glVertex3f (32.5, bs+23.8, 0);
        glVertex3f (32, bs+23.8, 0);
        glEnd();




        char string9[]="BAN";
        glColor3ub(255,0,0);
        glRasterPos2f(32,bs+24);
        for(k=0;k<strlen(string9);k++)
                glutBitmapCharacter(font7,string9[k]);


    }

    //batsman 4


    if(dn == 1)
    {
        float bs = -4;

        for(float i = 0; i <= 10; i+=10)
        {
            glColor3ub (0, 0, 0);

            circle(1, 1.3, i+33, bs+28);

            glColor3ub (255, 255, 255);

            circle(1, 1, i+33, bs+28);


            glColor3ub (0, 0, 0);

            circle(.2, .2, i+32.5, bs+28);

            glColor3ub (0, 0, 0);

            circle(.2, .2, i+33.5, bs+28);


            glColor3ub (162,87,58);
            glBegin(GL_POLYGON);
            glVertex3f (i+32.5, bs+27, 0);
            glVertex3f (i+33.5, bs+27, 0);
            glVertex3f (i+33.5, bs+26, 0);
            glVertex3f (i+32.5, bs+26, 0);
            glEnd();

            //body

            glColor3ub (2,112,93);
            glBegin(GL_POLYGON);
            glVertex3f (i+32, bs+26, 0);
            glVertex3f (i+34, bs+26, 0);
            glVertex3f (i+34, bs+23, 0);
            glVertex3f (i+32, bs+23, 0);
            glEnd();

            //leg

            glColor3ub (14,63,52);
            glBegin(GL_POLYGON);
            glVertex3f (i+32.3, bs+23, 0);
            glVertex3f (i+32.8, bs+23, 0);
            glVertex3f (i+32.8, bs+21, 0);
            glVertex3f (i+32.3, bs+21, 0);
            glEnd();


            glColor3ub (14,63,52);
            glBegin(GL_POLYGON);
            glVertex3f (i+33.2, bs+23, 0);
            glVertex3f (i+33.7, bs+23, 0);
            glVertex3f (i+33.7, bs+21, 0);
            glVertex3f (i+33.2, bs+21, 0);
            glEnd();

            //hand left

            glColor3ub (5,164,108);
            glBegin(GL_POLYGON);
            glVertex3f (i+31.5, bs+26, 0);
            glVertex3f (i+32.2, bs+26, 0);
            glVertex3f (i+31.5, bs+24.5, 0);
            glVertex3f (i+31, bs+24.5, 0);
            glEnd();

            glColor3ub (162,87,58);
            glBegin(GL_POLYGON);
            glVertex3f (i+31.5, bs+24.5, 0);
            glVertex3f (i+31, bs+24.5, 0);
            glVertex3f (i+32, bs+23.5, 0);
            glVertex3f (i+32.5, bs+23.5, 0);
            glEnd();

            //hand right

            glColor3ub (5,164,108);
            glBegin(GL_POLYGON);
            glVertex3f (i+34, bs+26, 0);
            glVertex3f (i+34.5, bs+26, 0);
            glVertex3f (i+35, bs+24.5, 0);
            glVertex3f (i+34.5, bs+24.5, 0);
            glEnd();

            glColor3ub (162,87,58);
            glBegin(GL_POLYGON);
            glVertex3f (i+34.5, bs+24.5, 0);
            glVertex3f (i+35, bs+24.5, 0);
            glVertex3f (i+34.5, bs+23.5, 0);
            glVertex3f (i+34, bs+23.5, 0);
            glEnd();

            //bat

            glColor3ub (211,178,142);
            glBegin(GL_POLYGON);
            glVertex3f (i+28, bs+20, 0);
            glVertex3f (i+29.5, bs+20, 0);
            glVertex3f (i+31.5, bs+22.5, 0);
            glVertex3f (i+30, bs+22.5, 0);
            glEnd();

            glColor3ub (214,224,89);
            glBegin(GL_POLYGON);
            glVertex3f (i+30.5, bs+22.5, 0);
            glVertex3f (i+31, bs+22.5, 0);
            glVertex3f (i+32.5, bs+23.8, 0);
            glVertex3f (i+32, bs+23.8, 0);
            glEnd();




            char string9[]="BAN";
            glColor3ub(255,0,0);
            glRasterPos2f(i+32,bs+24);
            for(k=0;k<strlen(string9);k++)
                    glutBitmapCharacter(font7,string9[k]);
        }
    }


















}



//boundary players

float jd = -5;

float v = -1.5;

float mv = 0;

float ro = 0;

float ra = 0;

float um = 0;

float pn = 0;

void boundaryplayers()
{
    if(e == 1)
    {
        if(v <= 25)
        {
            v += 0.05;
        }

        else
        {
            mv = 1;
        }
    }

    //player1

    glColor3ub (0, 0, 0);

    circle(1.2, 1.2, 8, v+15);

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (7.5, v+14, 0);
    glVertex3f (8.5, v+14, 0);
    glVertex3f (8.5, v+13, 0);
    glVertex3f (7.5, v+13, 0);
    glEnd();

    //body

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (7, v+13, 0);
    glVertex3f (9, v+13, 0);
    glVertex3f (9, v+10, 0);
    glVertex3f (7, v+10, 0);
    glEnd();

    //leg

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (7.3, v+10, 0);
    glVertex3f (7.8, v+10, 0);
    glVertex3f (7.8, v+8, 0);
    glVertex3f (7.3, v+8, 0);
    glEnd();


    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (8.2, v+10, 0);
    glVertex3f (8.7, v+10, 0);
    glVertex3f (8.7, v+8, 0);
    glVertex3f (8.2, v+8, 0);
    glEnd();

    //hand left

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (6.5, v+13, 0);
    glVertex3f (7.2, v+13, 0);
    glVertex3f (6.5, v+11.5, 0);
    glVertex3f (6, v+11.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (6.5, v+11.5, 0);
    glVertex3f (6, v+11.5, 0);
    glVertex3f (7, v+10.5, 0);
    glVertex3f (7.5, v+10.5, 0);
    glEnd();

    //hand right

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (9, v+13, 0);
    glVertex3f (9.5, v+13, 0);
    glVertex3f (10, v+11.5, 0);
    glVertex3f (9.5, v+11.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (9.5, v+11.5, 0);
    glVertex3f (10, v+11.5, 0);
    glVertex3f (9.5, v+10.5, 0);
    glVertex3f (9, v+10.5, 0);
    glEnd();


     //Virat

    char string[]="Virat";
    void *font=GLUT_BITMAP_HELVETICA_10;
    int k;
    glColor3ub(219,105,53);
    glRasterPos2f(7,v+12);
    for(k=0;k<strlen(string);k++)
            glutBitmapCharacter(font,string[k]);



    char string1[]="18";
    void *font1=GLUT_BITMAP_HELVETICA_18;
    glColor3ub(219,105,53);
    glRasterPos2f(7,v+10.5);
    for(k=0;k<strlen(string1);k++)
            glutBitmapCharacter(font1,string1[k]);




    //player2

    if(mv == 1)
    {
        if(ro <= 25)
        {
            ro += 0.03;
        }

        else
        {
            mv = 2;
        }
    }

    glColor3ub (0, 0, 0);

    circle(1.2, 1.2, 58, ro+15);

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (57.5, ro+14, 0);
    glVertex3f (58.5, ro+14, 0);
    glVertex3f (58.5, ro+13, 0);
    glVertex3f (57.5, ro+13, 0);
    glEnd();

    //body

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (57, ro+13, 0);
    glVertex3f (59, ro+13, 0);
    glVertex3f (59, ro+10, 0);
    glVertex3f (57, ro+10, 0);
    glEnd();

    //leg

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (57.3, ro+10, 0);
    glVertex3f (57.8, ro+10, 0);
    glVertex3f (57.8, ro+8, 0);
    glVertex3f (57.3, ro+8, 0);
    glEnd();


    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (58.2, ro+10, 0);
    glVertex3f (58.7, ro+10, 0);
    glVertex3f (58.7, ro+8, 0);
    glVertex3f (58.2, ro+8, 0);
    glEnd();

    //hand left

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (56.5, ro+13, 0);
    glVertex3f (57.2, ro+13, 0);
    glVertex3f (56.5, ro+11.5, 0);
    glVertex3f (56, ro+11.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (56.5, ro+11.5, 0);
    glVertex3f (56, ro+11.5, 0);
    glVertex3f (57, ro+10.5, 0);
    glVertex3f (57.5, ro+10.5, 0);
    glEnd();

    //hand right

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (59, ro+13, 0);
    glVertex3f (59.5, ro+13, 0);
    glVertex3f (60, ro+11.5, 0);
    glVertex3f (59.5, ro+11.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (59.5, ro+11.5, 0);
    glVertex3f (60, ro+11.5, 0);
    glVertex3f (59.5, ro+10.5, 0);
    glVertex3f (59, ro+10.5, 0);
    glEnd();


/*
    //player3

    glColor3ub (0, 255, 255);

    circle(1.2, 1.2, 18, 45);

    //eye

    glColor3ub (0, 0, 0);

    circle(.2, .2, 17.3, 45);

    glColor3ub (0, 0, 0);

    circle(.2, .2, 18.3, 45);




    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (17.5, 44, 0);
    glVertex3f (18.5, 44, 0);
    glVertex3f (18.5, 43, 0);
    glVertex3f (17.5, 43, 0);
    glEnd();

    //body

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (17, 43, 0);
    glVertex3f (19, 43, 0);
    glVertex3f (19, 40, 0);
    glVertex3f (17, 40, 0);
    glEnd();

    //leg

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (17.3, 40, 0);
    glVertex3f (17.8, 40, 0);
    glVertex3f (17.8, 38, 0);
    glVertex3f (17.3, 38, 0);
    glEnd();


    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (18.2, 40, 0);
    glVertex3f (18.7, 40, 0);
    glVertex3f (18.7, 38, 0);
    glVertex3f (18.2, 38, 0);
    glEnd();

    //hand left

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (16.5, 43, 0);
    glVertex3f (17.2, 43, 0);
    glVertex3f (16.5, 41.5, 0);
    glVertex3f (16, 41.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (16.5, 41.5, 0);
    glVertex3f (16, 41.5, 0);
    glVertex3f (17, 40.5, 0);
    glVertex3f (17.5, 40.5, 0);
    glEnd();

    //hand right

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (19, 43, 0);
    glVertex3f (19.5, 43, 0);
    glVertex3f (20, 41.5, 0);
    glVertex3f (19.5, 41.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (19.5, 41.5, 0);
    glVertex3f (20, 41.5, 0);
    glVertex3f (19.5, 40.5, 0);
    glVertex3f (19, 40.5, 0);
    glEnd();

    */

    if(bc == 1)
    {
        if(pn >= 10)
        {
            pn -= 0.05;
        }
    }

    //player4


    glColor3ub (255, 255, 255);

    circle(1.2, 1.2, 65, pn+45);

    //eye

    glColor3ub (0, 0, 0);

    circle(.2, .2, 64.3, pn+45);

    glColor3ub (0, 0, 0);

    circle(.2, .2, 65.3, pn+45);




    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (64.5, pn+44, 0);
    glVertex3f (65.5, pn+44, 0);
    glVertex3f (65.5, pn+43, 0);
    glVertex3f (64.5, pn+43, 0);
    glEnd();

    //body

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (64, pn+43, 0);
    glVertex3f (66, pn+43, 0);
    glVertex3f (66, pn+40, 0);
    glVertex3f (64, pn+40, 0);
    glEnd();

    //leg

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (64.3, pn+40, 0);
    glVertex3f (64.8, pn+40, 0);
    glVertex3f (64.8, pn+38, 0);
    glVertex3f (64.3, pn+38, 0);
    glEnd();


    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (65.2, pn+40, 0);
    glVertex3f (65.7, pn+40, 0);
    glVertex3f (65.7, pn+38, 0);
    glVertex3f (65.2, pn+38, 0);
    glEnd();

    //hand left

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (63.5, pn+43, 0);
    glVertex3f (64.2, pn+43, 0);
    glVertex3f (63.5, pn+41.5, 0);
    glVertex3f (63, pn+41.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (63.5, pn+41.5, 0);
    glVertex3f (63, pn+41.5, 0);
    glVertex3f (64, pn+40.5, 0);
    glVertex3f (64.5, pn+40.5, 0);
    glEnd();

    //hand right

    glColor3ub (23,79,157);
    glBegin(GL_POLYGON);
    glVertex3f (66, pn+43, 0);
    glVertex3f (66.5, pn+43, 0);
    glVertex3f (67, pn+41.5, 0);
    glVertex3f (66.5, pn+41.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (66.5, pn+41.5, 0);
    glVertex3f (67, pn+41.5, 0);
    glVertex3f (66.5, pn+40.5, 0);
    glVertex3f (66, pn+40.5, 0);
    glEnd();




    //player5

    //move

    if(mv == 1)
    {
        if(ra <= 19)
        {
            ra += 0.01;
        }
    }

    glColor3ub (0, 0, 0);

    circle(1, 1.2, 64.8, ra+30);




    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (64.5, ra+29, 0);
    glVertex3f (65.5, ra+29, 0);
    glVertex3f (65.5, ra+28, 0);
    glVertex3f (64.5, ra+28, 0);
    glEnd();

    //body

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (64, ra+28, 0);
    glVertex3f (66, ra+28, 0);
    glVertex3f (66, ra+25, 0);
    glVertex3f (64, ra+25, 0);
    glEnd();

    //leg

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (64.3, ra+25, 0);
    glVertex3f (64.8, ra+25, 0);
    glVertex3f (64.8, ra+23, 0);
    glVertex3f (64.3, ra+23, 0);
    glEnd();


    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (65.2, ra+25, 0);
    glVertex3f (65.7, ra+25, 0);
    glVertex3f (65.7, ra+23, 0);
    glVertex3f (65.2, ra+23, 0);
    glEnd();

    //hand left

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (63.5, ra+28, 0);
    glVertex3f (64.2, ra+28, 0);
    glVertex3f (63.5, ra+26.5, 0);
    glVertex3f (63, ra+26.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (63.5, ra+26.5, 0);
    glVertex3f (63, ra+26.5, 0);
    glVertex3f (64, ra+25.5, 0);
    glVertex3f (64.5, ra+25.5, 0);
    glEnd();

    //hand right

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (66, ra+28, 0);
    glVertex3f (66.5, ra+28, 0);
    glVertex3f (67, ra+26.5, 0);
    glVertex3f (66.5, ra+26.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (66.5, ra+26.5, 0);
    glVertex3f (67, ra+26.5, 0);
    glVertex3f (66.5, ra+25.5, 0);
    glVertex3f (66, ra+25.5, 0);
    glEnd();







    //player6

    //move player

    if(e == 1)
    {
        if(jd <= 15)
        {
            jd += 0.045;
        }

        else
        {
            um = 1;
        }
    }

    glColor3ub (0, 0, 0);

    circle(1, 1.2, 5, jd+30);




    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (4.5, jd+29, 0);
    glVertex3f (5.5, jd+29, 0);
    glVertex3f (5.5, jd+28, 0);
    glVertex3f (4.5, jd+28, 0);
    glEnd();

    //body

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (4, jd+28, 0);
    glVertex3f (6, jd+28, 0);
    glVertex3f (6, jd+25, 0);
    glVertex3f (4, jd+25, 0);
    glEnd();

    //leg

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (4.3, jd+25, 0);
    glVertex3f (4.8, jd+25, 0);
    glVertex3f (4.8, jd+23, 0);
    glVertex3f (4.3, jd+23, 0);
    glEnd();


    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (5.2, jd+25, 0);
    glVertex3f (5.7, jd+25, 0);
    glVertex3f (5.7, jd+23, 0);
    glVertex3f (5.2, jd+23, 0);
    glEnd();

    //hand left

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (3.5, jd+28, 0);
    glVertex3f (4.2, jd+28, 0);
    glVertex3f (3.5, jd+26.5, 0);
    glVertex3f (3, jd+26.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (3.5, jd+26.5, 0);
    glVertex3f (3, jd+26.5, 0);
    glVertex3f (4, jd+25.5, 0);
    glVertex3f (4.5, jd+25.5, 0);
    glEnd();

    //hand right

    glColor3ub (0,95,163);
    glBegin(GL_POLYGON);
    glVertex3f (6, jd+28, 0);
    glVertex3f (6.5, jd+28, 0);
    glVertex3f (7, jd+26.5, 0);
    glVertex3f (6.5, jd+26.5, 0);
    glEnd();

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (6.5, jd+26.5, 0);
    glVertex3f (7, jd+26.5, 0);
    glVertex3f (6.5, jd+25.5, 0);
    glVertex3f (6, jd+25.5, 0);
    glEnd();

    //Jaddu

    char string7[]="Jaddu";
    void *font7=GLUT_BITMAP_HELVETICA_10;

    glColor3ub(219,105,53);
    glRasterPos2f(4,jd+27);
    for(k=0;k<strlen(string7);k++)
            glutBitmapCharacter(font7,string7[k]);



    char string8[]="8";
    void *font8=GLUT_BITMAP_HELVETICA_18;
    glColor3ub(219,105,53);
    glRasterPos2f(4.7,jd+25.5);
    for(k=0;k<strlen(string8);k++)
            glutBitmapCharacter(font8,string8[k]);



}

//keeper

float kp1 = 0;

keeper()
{

        //Keeper

        //Face

        glColor3ub (255, 255, 255);

        circle(1, 1, 33, 51);

        //eye

        glColor3ub (0, 0, 0);

        circle(.2, .2, 33.3, 51.3);

        glColor3ub (0, 0, 0);

        circle(.2, .2, 32.4, 51.3);



        glColor3ub (0,0,0);
        glBegin(GL_POLYGON);
        glVertex3f (32.6, 50.5, 0);
        glVertex3f (33.1, 50.5, 0);
        glVertex3f (33.1, 50.7, 0);
        glVertex3f (32.6, 50.7, 0);
        glEnd();

        //

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (32.8, 50, 0);
        glVertex3f (33.3, 50, 0);
        glVertex3f (33.3, 49.6, 0);
        glVertex3f (32.8, 49.6, 0);
        glEnd();

        //body

        glColor3ub (23,79,157);
        glBegin(GL_POLYGON);
        glVertex3f (32, 49.6, 0);
        glVertex3f (33.7, 49.6, 0);
        glVertex3f (34.5, 47.5, 0);
        glVertex3f (33, 47.5, 0);
        glEnd();

        //Left Hand

        glColor3ub (23,79,157);
        glBegin(GL_POLYGON);
        glVertex3f (33.7, 49.6, 0);
        glVertex3f (34.2, 49.6, 0);
        glVertex3f (35, 48.3, 0);
        glVertex3f (34.5, 48.3, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (34.5, 48.3, 0);
        glVertex3f (35, 48.3, 0);
        glVertex3f (33, 47, 0);
        glVertex3f (32.5, 47, 0);
        glEnd();

        //Right Hand

        glColor3ub (23,79,157);
        glBegin(GL_POLYGON);
        glVertex3f (31.5, 49.6, 0);
        glVertex3f (32, 49.6, 0);
        glVertex3f (32.3, 48.3, 0);
        glVertex3f (31.8, 48.3, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (31.8, 48.3, 0);
        glVertex3f (32.3, 48.3, 0);
        glVertex3f (33.5, 47, 0);
        glVertex3f (33, 47, 0);
        glEnd();

        //left Leg

        glColor3ub (23,79,157);
        glBegin(GL_POLYGON);
        glVertex3f (33, 47.6, 0);
        glVertex3f (33.5, 47.6, 0);
        glVertex3f (33, 46.8, 0);
        glVertex3f (32.5, 46.8, 0);
        glEnd();

        glColor3ub (23,79,157);
        glBegin(GL_POLYGON);
        glVertex3f (32.5, 46.8, 0);
        glVertex3f (33, 46.8, 0);
        glVertex3f (33, 45.5, 0);
        glVertex3f (32.5, 45.5, 0);
        glEnd();



        //Right Leg

        glColor3ub (23,79,157);
        glBegin(GL_POLYGON);
        glVertex3f (34, 47.6, 0);
        glVertex3f (34.5, 47.6, 0);
        glVertex3f (34.2, 46.8, 0);
        glVertex3f (33.7, 46.8, 0);
        glEnd();

        glColor3ub (23,79,157);
        glBegin(GL_POLYGON);
        glVertex3f (33.7, 46.8, 0);
        glVertex3f (34.2, 46.8, 0);
        glVertex3f (34.2, 45.5, 0);
        glVertex3f (33.7, 45.5, 0);
        glEnd();




}







//name Function

void name()
{



   //   Rihit
    char string3[]="Rohit";
    void *font3=GLUT_BITMAP_HELVETICA_10;
    int k;
    glColor3ub(219,105,53);
    glRasterPos2f(57,ro+12);
    for(k=0;k<strlen(string3);k++)
            glutBitmapCharacter(font3,string3[k]);



    char string4[]="45";
    void *font4=GLUT_BITMAP_HELVETICA_18;
    glColor3ub(219,105,53);
    glRasterPos2f(57,ro+10.5);
    for(k=0;k<strlen(string4);k++)
            glutBitmapCharacter(font4,string4[k]);


    //Rahul

    char string5[]="Rahul";
    void *font5=GLUT_BITMAP_HELVETICA_10;
    glColor3ub(219,105,53);
    glRasterPos2f(64,ra+27);
    for(k=0;k<strlen(string5);k++)
            glutBitmapCharacter(font5,string5[k]);



    char string6[]="1";
    void *font6=GLUT_BITMAP_HELVETICA_18;
    glColor3ub(219,105,53);
    glRasterPos2f(64.5,ra+25.5);
    for(k=0;k<strlen(string6);k++)
            glutBitmapCharacter(font6,string6[k]);



    //india


    char string9[]="India";
    glColor3ub(219,105,53);
    glRasterPos2f(64,41.5);
    for(k=0;k<strlen(string9);k++)
            glutBitmapCharacter(font3,string9[k]);


    glColor3ub(219,105,53);
    glRasterPos2f(32,48.5);
    for(k=0;k<strlen(string9);k++)
            glutBitmapCharacter(font3,string9[k]);




}

//umpire function

float ump = 0;

float up = 0;

void umpire()
{
    //umpire1


    //Face



    glColor3ub (0, 0, 0);

    circle(1, 1, 37.75, ump+21.7);

    //leg1

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (37, ump+13.5, 0);
    glVertex3f (37.6, ump+13.5, 0);
    glVertex3f (37.6, ump+16.5, 0);
    glVertex3f (37, ump+16.5, 0);
    glEnd();


    //middle

    glColor3ub (162,87,58);
    glBegin(GL_POLYGON);
    glVertex3f (37.5, ump+20, 0);
    glVertex3f (38, ump+20, 0);
    glVertex3f (38, ump+21.1, 0);
    glVertex3f (37.5, ump+21.1, 0);
    glEnd();

    //leg2

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (37.8, ump+13.5, 0);
    glVertex3f (38.4, ump+13.5, 0);
    glVertex3f (38.4, ump+16.5, 0);
    glVertex3f (37.8, ump+16.5, 0);
    glEnd();

    //body


    glColor3ub (255,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (36.3, ump+16.5, 0);
    glVertex3f (39, ump+16.5, 0);
    glVertex3f (39, ump+20, 0);
    glVertex3f (36.3, ump+20, 0);
    glEnd();


    if(um == 1)
    {
        //hand Right

        glColor3ub (247,181,61);
        glBegin(GL_POLYGON);
        glVertex3f (po+39, po+20, 0);
        glVertex3f (po+39.5, po+20, 0);
        glVertex3f (po+39.5, po+21.3, 0);
        glVertex3f (po+39, po+21.3, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (po+39, po+21.3, 0);
        glVertex3f (po+39.5, po+21.3, 0);
        glVertex3f (po+39.5, po+23.2, 0);
        glVertex3f (po+39, po+23.2, 0);
        glEnd();


        //Hand Left

        glColor3ub (247,181,61);
        glBegin(GL_POLYGON);
        glVertex3f (po+35.8, po+20, 0);
        glVertex3f (po+36.3, po+20, 0);
        glVertex3f (po+36.3, po+21.3, 0);
        glVertex3f (po+35.8, po+21.3, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (po+35.8, po+21.3, 0);
        glVertex3f (po+36.3, po+21.3, 0);
        glVertex3f (po+36.3, po+23.2, 0);
        glVertex3f (po+35.8, po+23.2, 0);
        glEnd();

    }


    if(um == 0)
    {
        //hand Right

        glColor3ub (247,181,61);
        glBegin(GL_POLYGON);
        glVertex3f (39,  ump+20, 0);
        glVertex3f (39.5,  ump+20, 0);
        glVertex3f (39.5,  ump+18.3, 0);
        glVertex3f (39,  ump+18.3, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (39,  ump+18.3, 0);
        glVertex3f (39.5,  ump+18.3, 0);
        glVertex3f (39.5,  ump+16.2, 0);
        glVertex3f (39,  ump+16.2, 0);
        glEnd();


        //Hand Left

        glColor3ub (247,181,61);
        glBegin(GL_POLYGON);
        glVertex3f (35.8,  ump+20, 0);
        glVertex3f (36.3,  ump+20, 0);
        glVertex3f (36.3,  ump+18.3, 0);
        glVertex3f (35.8,  ump+18.3, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (35.8,  ump+18.3, 0);
        glVertex3f (36.3,  ump+18.3, 0);
        glVertex3f (36.3,  ump+16.2, 0);
        glVertex3f (35.8,  ump+16.2, 0);
        glEnd();

    }


    char string9[]="ICC";
    void *font8=GLUT_BITMAP_HELVETICA_10;
    int k;
    glColor3ub(0,0,0);
    glRasterPos2f(36.7,ump+19);
    for(k=0;k<strlen(string9);k++)
    glutBitmapCharacter(font8,string9[k]);

    char string2[]="Fly";
    glRasterPos2f(37,ump+17.5);
    for(k=0;k<strlen(string2);k++)
    glutBitmapCharacter(font8,string2[k]);

    if(mu == 1)
    {
        //hand Right

        glColor3ub (247,181,61);
        glBegin(GL_POLYGON);
        glVertex3f (39,  ump+20, 0);
        glVertex3f (39.5,  ump+20, 0);
        glVertex3f (39.5,  ump+18.3, 0);
        glVertex3f (39,  ump+18.3, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (39,  ump+18.3, 0);
        glVertex3f (39.5,  ump+18.3, 0);
        glVertex3f (39.5,  ump+16.2, 0);
        glVertex3f (39,  ump+16.2, 0);
        glEnd();


        //Hand Left

        glColor3ub (247,181,61);
        glBegin(GL_POLYGON);
        glVertex3f (35.8,  ump+20, 0);
        glVertex3f (36.3,  ump+20, 0);
        glVertex3f (36.3,  ump+18.3, 0);
        glVertex3f (35.8,  ump+18.3, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (35.8,  ump+18.3, 0);
        glVertex3f (36.3,  ump+18.3, 0);
        glVertex3f (36.3,  ump+16.2, 0);
        glVertex3f (35.8,  ump+16.2, 0);
        glEnd();


        if(ump <= 25)
        {
            po = 400;

            ump += 0.04;


        }
    }


}

//bd player

float bd = -50;

void bdplayer()
{

    if(mv == 1)
    {
        if(bd <= -12)
        {
            bd +=  0.05;
        }
    }

    for(float i = -30; i <= 10; i+= 4)
    {
        glColor3ub (0, 0, 0);

        circle(1, 1.2, i+43, bd+28);




        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (i+42.5, bd+27, 0);
        glVertex3f (i+43.5, bd+27, 0);
        glVertex3f (i+43.5, bd+26, 0);
        glVertex3f (i+42.5, bd+26, 0);
        glEnd();

        //body

        glColor3ub (48,146,203);
        glBegin(GL_POLYGON);
        glVertex3f (i+42, bd+26, 0);
        glVertex3f (i+44, bd+26, 0);
        glVertex3f (i+44, bd+23, 0);
        glVertex3f (i+42, bd+23, 0);
        glEnd();

        //leg

        glColor3ub (22,41,73);
        glBegin(GL_POLYGON);
        glVertex3f (i+42.3, bd+23, 0);
        glVertex3f (i+42.8, bd+23, 0);
        glVertex3f (i+42.8, bd+21, 0);
        glVertex3f (i+42.3, bd+21, 0);
        glEnd();


        glColor3ub (22,41,73);
        glBegin(GL_POLYGON);
        glVertex3f (i+43.2, bd+23, 0);
        glVertex3f (i+43.7, bd+23, 0);
        glVertex3f (i+43.7, bd+21, 0);
        glVertex3f (i+43.2, bd+21, 0);
        glEnd();

        //hand left

        glColor3ub (48,146,203);
        glBegin(GL_POLYGON);
        glVertex3f (i+41.5, bd+26, 0);
        glVertex3f (i+42.2, bd+26, 0);
        glVertex3f (i+41.5, bd+24.5, 0);
        glVertex3f (i+41, bd+24.5, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (i+41.5, bd+24.5, 0);
        glVertex3f (i+41, bd+24.5, 0);
        glVertex3f (i+42, bd+23.5, 0);
        glVertex3f (i+42.5, bd+23.5, 0);
        glEnd();

        //hand right

        glColor3ub (48,146,203);
        glBegin(GL_POLYGON);
        glVertex3f (i+44, bd+26, 0);
        glVertex3f (i+44.5, bd+26, 0);
        glVertex3f (i+45, bd+24.5, 0);
        glVertex3f (i+44.5, bd+24.5, 0);
        glEnd();

        glColor3ub (162,87,58);
        glBegin(GL_POLYGON);
        glVertex3f (i+44.5, bd+24.5, 0);
        glVertex3f (i+45, bd+24.5, 0);
        glVertex3f (i+44.5, bd+23.5, 0);
        glVertex3f (i+44, bd+23.5, 0);
        glEnd();




        char string7[]="Robi";
        void *font7=GLUT_BITMAP_HELVETICA_10;
        int k;
        glColor3ub(255,0,0);
        glRasterPos2f(i+42.2,bd+24.9);
        for(k=0;k<strlen(string7);k++)
                glutBitmapCharacter(font7,string7[k]);


        char string6[]="BD";
        void *font6=GLUT_BITMAP_HELVETICA_12;
        glColor3ub(255,0,0);
        glRasterPos2f(i+42.2,bd+23.9);
        for(k=0;k<strlen(string6);k++)
                glutBitmapCharacter(font6,string6[k]);
    }


}

//Players Function

players()
{
    //keeper

    keeper();


    //ball move


    ballmove();


    //Call Umpire

    umpire();


    //non striker batsman



    batsman2();

    //boundary player

    boundaryplayers();

    //name

    name();


    //bangladesh plyer

    bdplayer();

    //bowler

    bowler();



}


//Ban Flag Function

void ban_flag()
{
    //Bamboo

    glColor3ub (209,219, 230);

    glBegin(GL_POLYGON);
    glVertex3f (0.5, 48, 0);
    glVertex3f (1.5, 48, 0);
    glVertex3f (1.5, 67.5, 0);
    glVertex3f (0.5, 67.5, 0);
    glEnd();



    glColor3ub (0, 0, 0);

    circle(.6, .6, 2.5, 66.5);



    glColor3ub (125,134, 131);
    glBegin(GL_POLYGON);
    glVertex3f (1.5, 67, 0);
    glVertex3f (2.5, 67, 0);
    glVertex3f (2.5, 66, 0);
    glVertex3f (1.5, 66, 0);
    glEnd();

    glColor3ub (170, 182, 190);
    glBegin(GL_LINES);
    glVertex3f (3, 66.3, 0.0);
    glVertex3f (3, 50, 0);
    glEnd();

    glColor3ub (170, 182, 190);
    glBegin(GL_LINES);
    glVertex3f (2.5, 66.3, 0.0);
    glVertex3f (2.5, 50, 0);
    glEnd();


    glColor3ub (170, 182, 190);
    glBegin(GL_LINES);
    glVertex3f (3, 50, 0.0);
    glVertex3f (0.5, 50, 0);
    glEnd();

    glColor3ub (170, 182, 190);
    glBegin(GL_LINES);
    glVertex3f (2.5, 50.5, 0.0);
    glVertex3f (1.5, 50.5, 0);
    glEnd();


    //Pillar

    glColor3ub (125,134, 131);
    glBegin(GL_POLYGON);
    glVertex3f (0.3, 48, 0);
    glVertex3f (1.7, 48, 0);
    glVertex3f (2, 45, 0);
    glVertex3f (0, 45, 0);
    glEnd();


    //Green

    glColor3ub (1,77, 55);
    glBegin(GL_POLYGON);
    glVertex3f (2.9, 65, 0);
    glVertex3f (12, 65, 0);
    glVertex3f (12, 59, 0);
    glVertex3f (2.9, 59, 0);
    glEnd();

    //Red

    glColor3ub (209, 1, 51);

    circle(2, 2, 7, 62);
}


//India Flag Function

void ind_flag()
{
    //Bamboo

    glColor3ub (209,219, 230);

    glBegin(GL_POLYGON);
    glVertex3f (68.5, 48, 0);
    glVertex3f (69.5, 48, 0);
    glVertex3f (69.5, 67.5, 0);
    glVertex3f (68.5, 67.5, 0);
    glEnd();



    glColor3ub (0, 0, 0);

    circle(.6, .6, 67.5, 66.5);



    glColor3ub (125,134, 131);
    glBegin(GL_POLYGON);
    glVertex3f (67.5, 67, 0);
    glVertex3f (68.5, 67, 0);
    glVertex3f (68.5, 66, 0);
    glVertex3f (67.5, 66, 0);
    glEnd();

    glColor3ub (170, 182, 190);
    glBegin(GL_LINES);
    glVertex3f (67, 66.3, 0.0);
    glVertex3f (67, 50, 0);
    glEnd();

    glColor3ub (170, 182, 190);
    glBegin(GL_LINES);
    glVertex3f (67.5, 66.3, 0.0);
    glVertex3f (67.5, 50, 0);
    glEnd();


    glColor3ub (170, 182, 190);
    glBegin(GL_LINES);
    glVertex3f (67, 50, 0.0);
    glVertex3f (69.5, 50, 0);
    glEnd();

    glColor3ub (170, 182, 190);
    glBegin(GL_LINES);
    glVertex3f (67.5, 50.5, 0.0);
    glVertex3f (68.5, 50.5, 0);
    glEnd();


    //Pillar

    glColor3ub (125,134, 131);
    glBegin(GL_POLYGON);
    glVertex3f (68.3, 48, 0);
    glVertex3f (69.7, 48, 0);
    glVertex3f (70, 46, 0);
    glVertex3f (68, 46, 0);
    glEnd();


    //1st part

    glColor3ub (255,153, 51);
    glBegin(GL_POLYGON);
    glVertex3f (58, 65, 0);
    glVertex3f (67, 65, 0);
    glVertex3f (67, 63, 0);
    glVertex3f (58, 63, 0);
    glEnd();

    //2nd part


    glColor3ub (253,255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (58, 63, 0);
    glVertex3f (67, 63, 0);
    glVertex3f (67, 61, 0);
    glVertex3f (58, 61, 0);
    glEnd();

    //3rd part

    glColor3ub (18,136, 7);
    glBegin(GL_POLYGON);
    glVertex3f (58, 61, 0);
    glVertex3f (67, 61, 0);
    glVertex3f (67, 59, 0);
    glVertex3f (58, 59, 0);
    glEnd();

    //Middle

    glColor3ub (0, 0, 136);

    circle(1, 1, 62.5, 62);

    glColor3ub (255, 255, 255);

    circle(.8, .8, 62.5, 62);

    glColor3ub (0, 0, 136);

    circle(.3, .3, 62.5, 62);

    glColor3ub (0, 0, 136);
    glBegin(GL_LINES);
    glVertex3f (61.5, 62, 0.0);
    glVertex3f (63.5, 62, 0);
    glEnd();

    glColor3ub (0, 0, 136);
    glBegin(GL_LINES);
    glVertex3f (62.5, 61, 0.0);
    glVertex3f (62.5, 63, 0);
    glEnd();

    glColor3ub (0, 0, 136);
    glBegin(GL_LINES);
    glVertex3f (61.7, 62.8, 0.0);
    glVertex3f (63.2, 61.2, 0);
    glEnd();

    glColor3ub (0, 0, 136);
    glBegin(GL_LINES);
    glVertex3f (63, 62.6, 0.0);
    glVertex3f (61.7, 61.3, 0);
    glEnd();
}


//Tv Logo Function

void tv_logo()
{

    //Black Part

    glColor3ub (0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (58, 51, 0);
    glVertex3f (65, 51, 0);
    glVertex3f (65, 56, 0);
    glVertex3f (58, 56, 0);
    glEnd();

    //White Part

    glColor3ub (255,255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (58.4, 51.4, 0);
    glVertex3f (64.6, 51.4, 0);
    glVertex3f (64.6, 55.6, 0);
    glVertex3f (58.4, 55.6, 0);
    glEnd();

    //Left Antenna

    glColor3ub (0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (61, 56, 0);
    glVertex3f (61.3, 56, 0);
    glVertex3f (58.3, 58, 0);
    glVertex3f (58, 58, 0);
    glEnd();

    glColor3ub (0, 0, 0);

    circle(.4, .4, 58.5, 57.8);


    //Right Antenna


    glColor3ub (0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (61, 56, 0);
    glVertex3f (61.3, 56, 0);
    glVertex3f (64.3, 58, 0);
    glVertex3f (64, 58, 0);
    glEnd();

    glColor3ub (0, 0, 0);

    circle(.4, .4, 64.3, 58);

    //Tv name
    char string[]="PAP-ON";
    void *font=GLUT_BITMAP_8_BY_13;
    int k;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(59,54);
    for(k=0;k<strlen(string);k++)
            glutBitmapCharacter(font,string[k]);

    char string1[]="T";
    void *font1=GLUT_BITMAP_TIMES_ROMAN_24;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(60,52);
    for(k=0;k<strlen(string1);k++)
            glutBitmapCharacter(font1,string1[k]);

    char string2[]="V";
    void *font2=GLUT_BITMAP_HELVETICA_18;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(61,52);
    for(k=0;k<strlen(string2);k++)
            glutBitmapCharacter(font2,string2[k]);
}


//Player Introduction

void text_player_name()
{

    //Mushfiqur Rahim

    char string[]="*MUSHFIQUR 134(121)";
    void *font=GLUT_BITMAP_HELVETICA_12;
    int k;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(10,0.8);
    for(k=0;k<strlen(string);k++)
            glutBitmapCharacter(font,string[k]);

    //Miraz

    char string1[]="MIRAZ 10(18)";
    void *font1=GLUT_BITMAP_8_BY_13;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(24.5,0.8);
    for(k=0;k<strlen(string1);k++)
            glutBitmapCharacter(font1,string1[k]);


    //Bumrah

    char string2[]="BUMRAH 2-48(9.1)";
    void *font2=GLUT_BITMAP_HELVETICA_12;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(35,0.8);
    for(k=0;k<strlen(string2);k++)
            glutBitmapCharacter(font2,string2[k]);



    //This Over

    char string3[]="This Over :  0 2 4";
    void *font3=GLUT_BITMAP_HELVETICA_10;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(47,0.8);
    for(k=0;k<strlen(string3);k++)
            glutBitmapCharacter(font3,string3[k]);

}



//Match Summary

void score_card()
{

    //Run

    char string[]="BAN   311-7";
    void *font=GLUT_BITMAP_HELVETICA_12;
    int k;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(10,2.6);
    for(k=0;k<strlen(string);k++)
            glutBitmapCharacter(font,string[k]);

    //Over

    char string1[]="49.3";
    void *font1=GLUT_BITMAP_8_BY_13;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(19,2.6);
    for(k=0;k<strlen(string1);k++)
            glutBitmapCharacter(font1,string1[k]);


    //PowerPlay

    char string2[]="P3";
    void *font2=GLUT_BITMAP_HELVETICA_12;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(25,2.6);
    for(k=0;k<strlen(string2);k++)
            glutBitmapCharacter(font2,string2[k]);



    //Target
    char string3[]="Target 313";
    void *font3=GLUT_BITMAP_HELVETICA_12;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(28,2.6);
    for(k=0;k<strlen(string3);k++)
            glutBitmapCharacter(font3,string3[k]);



    //Need Win

    char string4[]="BAN Need 2 Runs From 3 Balls";
    void *font4=GLUT_BITMAP_HELVETICA_12;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(35,2.6);
    for(k=0;k<strlen(string4);k++)
            glutBitmapCharacter(font4,string4[k]);



    //Speed
    char string5[]="143 KPH";
    void *font5=GLUT_BITMAP_HELVETICA_12;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(54,2.6);
    for(k=0;k<strlen(string5);k++)
            glutBitmapCharacter(font5,string5[k]);
}


//Advertise Function
float a = 0;

void advertise()
{

    if(a <= 50)
    {
        a += 0.05;
    }

    else
    {
        a = -20;
    }

    glutPostRedisplay();

    char string[]="Robi, Grameenphone, Fair & Lovely, Lux, Lifebuoy, Bkash, DBBL";
    void *font=GLUT_BITMAP_HELVETICA_18;
    int k;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(a+20,4.6);
    for(k=0;k<strlen(string);k++)

        glutBitmapCharacter(font,string[k]);



    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (0, 4, 0);
    glVertex3f (20, 4, 0);
    glVertex3f (20, 6, 0);
    glVertex3f (0, 6, 0);
    glEnd();

    char string5[]="Sponsors : ";
    void *font5=GLUT_BITMAP_HELVETICA_18;

    glColor3ub(255,255,255);
    glRasterPos2f(10,4.6);
    for(k=0;k<strlen(string5);k++)
            glutBitmapCharacter(font5,string5[k]);

}
//Team Logo


void team_logo_ban()
{

    //Ban Logo


    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (0, 0, 0);
    glVertex3f (9, 0, 0);
    glVertex3f (9, 6, 0);
    glVertex3f (0, 6, 0);
    glEnd();


    glColor3ub(255, 120, 0);
    glBegin(GL_POLYGON);
    glVertex3f (1.5, 4.5, 0);
    glVertex3f (7.5, 4.5, 0);
    glVertex3f (6.5, 5.7, 0);
    glVertex3f (2.5, 5.7, 0);
    glEnd();


    glColor3ub(255, 120, 0);
    glBegin(GL_POLYGON);
    glVertex3f (1.5, 4.5, 0);
    glVertex3f (7.5, 4.5, 0);
    glVertex3f (7.5, 1, 0);
    glVertex3f (1.5, 1, 0);
    glEnd();

    glColor3ub(255, 120, 0);
    glBegin(GL_POLYGON);
    glVertex3f (1.5, 1, 0);
    glVertex3f (7.5, 1, 0);
    glVertex3f (4.3, 0, 0);
    glEnd();


    glColor3ub(24, 72, 31);
    glBegin(GL_POLYGON);
    glVertex3f (2.5, 5.1, 0);
    glVertex3f (6.5, 5.1, 0);
    glVertex3f (6.5, 1, 0);
    glVertex3f (2.5, 1, 0);
    glEnd();


    glColor3ub (255, 0, 0);

    circle(1.7, 2, 0.5, 2.4);

    glColor3ub (255, 0, 0);

    circle(.7, 2, 7.5, 2.4);


    //Minar

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (2.7, 1.5, 0.0);
    glVertex3f (6.2, 1.5, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (2.5, 1.8, 0.0);
    glVertex3f (3.5, 5.1, 0);
    glEnd();


    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (3.5, 5.1, 0.0);
    glVertex3f (4, 1.5, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (3.8, 4.1, 0.0);
    glVertex3f (5, 1.5, 0);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (4.5, 3.1, 0.0);
    glVertex3f (6, 1.5, 0);
    glEnd();


    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (4.8, 3.5, 0.0);
    glVertex3f (6.3, 3.5, 0);
    glEnd();






}

//India Team Logo Function

void team_logo_ind()
{
    //India Logo


    glColor3ub(14, 55, 111);
    glBegin(GL_POLYGON);
    glVertex3f (60, 0, 0);
    glVertex3f (70, 0, 0);
    glVertex3f (70, 6, 0);
    glVertex3f (60, 6, 0);
    glEnd();



    glColor3ub (51, 165, 222);

    circle(4, 2.5, 65, 2.9);


    glColor3ub (185, 230, 252);

    circle(3.5, 2, 65, 2.8);


    glColor3ub(214, 178, 104);
    glBegin(GL_POLYGON);
    glVertex3f (63.5, 1.5, 0);
    glVertex3f (66.5, 1.5, 0);
    glVertex3f (66.5, 4, 0);
    glVertex3f (63.5, 4, 0);
    glEnd();



    glColor3ub(214, 178, 104);
    glBegin(GL_POLYGON);
    glVertex3f (63.5, 3, 0);
    glVertex3f (66.5, 3, 0);
    glVertex3f (65, 4.8, 0);
    glEnd();

    glColor3ub(214, 178, 104);
    glBegin(GL_POLYGON);
    glVertex3f (63.5, 2, 0);
    glVertex3f (66.5, 2, 0);
    glVertex3f (65, .8, 0);
    glEnd();


    glColor3ub(214, 178, 104);
    glBegin(GL_POLYGON);
    glVertex3f (64, 2, 0);
    glVertex3f (64, 3.8, 0);
    glVertex3f (62, 3, 0);
    glEnd();


    glColor3ub(214, 178, 104);
    glBegin(GL_POLYGON);
    glVertex3f (66, 2, 0);
    glVertex3f (66, 3.8, 0);
    glVertex3f (68, 3, 0);
    glEnd();




}

//Hotel

void hotel()
{

    //background

    glColor3ub(85, 220, 205);
    glBegin(GL_POLYGON);
    glVertex3f (74, 40, 0);
    glVertex3f (102, 40, 0);
    glVertex3f (102, 68, 0);
    glVertex3f (74, 68, 0);
    glEnd();

    glColor3ub(255, 192, 61);
    glBegin(GL_POLYGON);
    glVertex3f (74, 40, 0);
    glVertex3f (102, 40, 0);
    glVertex3f (102, 58, 0);
    glVertex3f (74, 58, 0);
    glEnd();


    //front small

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (76, 52, 0);
    glVertex3f (100, 52, 0);
    glVertex3f (100, 52.3, 0);
    glVertex3f (76, 52.3, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (76, 52.3, 0);
    glVertex3f (100, 52.3, 0);
    glVertex3f (100, 52.5, 0);
    glVertex3f (76, 52.5, 0);
    glEnd();


    //light

    //left

    glColor3ub(90, 85, 122);
    glBegin(GL_POLYGON);
    glVertex3f (75, 48, 0);
    glVertex3f (75.5, 48, 0);
    glVertex3f (75.5, 66, 0);
    glVertex3f (75, 66, 0);
    glEnd();


    glColor3ub(90, 85, 122);
    glBegin(GL_POLYGON);
    glVertex3f (75, 66, 0);
    glVertex3f (75, 66.4, 0);
    glVertex3f (79.5, 67.4, 0);
    glVertex3f (79.5, 67, 0);
    glEnd();

    glColor3ub (242, 127, 36);

    circle(1, 1, 80, 66.7);

    //right

    glColor3ub(90, 85, 122);
    glBegin(GL_POLYGON);
    glVertex3f (99, 48, 0);
    glVertex3f (99.5, 48, 0);
    glVertex3f (99.5, 66, 0);
    glVertex3f (99, 66, 0);
    glEnd();

    glColor3ub(90, 85, 122);
    glBegin(GL_POLYGON);
    glVertex3f (99.5, 66, 0);
    glVertex3f (99.5, 66.4, 0);
    glVertex3f (95, 67.4, 0);
    glVertex3f (95, 67, 0);
    glEnd();

    glColor3ub (242, 127, 36);

    circle(1, 1, 95, 66.7);


    //2nd room

    glColor3ub(125, 160, 188);
    glBegin(GL_POLYGON);
    glVertex3f (77, 52.5, 0);
    glVertex3f (98, 52.5, 0);
    glVertex3f (98, 59, 0);
    glVertex3f (77, 59, 0);
    glEnd();

    //white line

    for(float pk = 0; pk <= 19.5; pk+= 0.8)
    {
        glColor3ub(160, 176, 189);
        glBegin(GL_POLYGON);
        glVertex3f (pk+78, 52.5, 0);
        glVertex3f (pk+78.1, 52.5, 0);
        glVertex3f (pk+78.1, 59, 0);
        glVertex3f (pk+78, 59, 0);
        glEnd();
    }


    //window left
    glColor3ub(46, 31, 67);
    glBegin(GL_POLYGON);
    glVertex3f (96, 56, 0);
    glVertex3f (97.5, 56, 0);
    glVertex3f (97.5, 58, 0);
    glVertex3f (96, 58, 0);
    glEnd();


    glColor3ub(182, 203, 201);
    glBegin(GL_POLYGON);
    glVertex3f (96, 57, 0);
    glVertex3f (97.5, 57, 0);
    glVertex3f (97.5, 57.1, 0);
    glVertex3f (96, 57.1, 0);
    glEnd();

     //window right

    glColor3ub(46, 31, 67);
    glBegin(GL_POLYGON);
    glVertex3f (77.5, 56, 0);
    glVertex3f (78.5, 56, 0);
    glVertex3f (78.5, 58, 0);
    glVertex3f (77.5, 58, 0);
    glEnd();


    glColor3ub(182, 203, 201);
    glBegin(GL_POLYGON);
    glVertex3f (77.5, 57, 0);
    glVertex3f (78.5, 57, 0);
    glVertex3f (78.5, 57.1, 0);
    glVertex3f (77.5, 57.1, 0);
    glEnd();


    //black

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (77, 59, 0);
    glVertex3f (98, 59, 0);
    glVertex3f (98, 59.4, 0);
    glVertex3f (77, 59.4, 0);
    glEnd();

    //blue


    glColor3ub(115, 182, 222);
    glBegin(GL_POLYGON);
    glVertex3f (77, 59.4, 0);
    glVertex3f (98, 59.4, 0);
    glVertex3f (98, 60, 0);
    glVertex3f (77, 60, 0);
    glEnd();

    //1st room

    glColor3ub(167, 196, 200);
    glBegin(GL_POLYGON);
    glVertex3f (81, 51.5, 0);
    glVertex3f (94, 51.5, 0);
    glVertex3f (94, 61.5, 0);
    glVertex3f (81, 61.5, 0);
    glEnd();

    //black

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (78, 50.7, 0);
    glVertex3f (96, 50.7, 0);
    glVertex3f (96, 51, 0);
    glVertex3f (78, 51, 0);
    glEnd();

    //white

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (81, 51.5, 0);
    glVertex3f (94, 51.5, 0);
    glVertex3f (96, 51, 0);
    glVertex3f (78, 51, 0);
    glEnd();


    //bamboo

    //left
    glColor3ub(113, 181, 222);
    glBegin(GL_POLYGON);
    glVertex3f (79, 51.2, 0);
    glVertex3f (79.5, 51.2, 0);
    glVertex3f (79.5, 61.5, 0);
    glVertex3f (79, 61.5, 0);
    glEnd();


    //right

    glColor3ub(113, 181, 222);
    glBegin(GL_POLYGON);
    glVertex3f (95, 51.2, 0);
    glVertex3f (95.5, 51.2, 0);
    glVertex3f (95.5, 61.5, 0);
    glVertex3f (95, 61.5, 0);
    glEnd();

    //upper piller

    glColor3ub(115, 182, 222);
    glBegin(GL_POLYGON);
    glVertex3f (78, 61.5, 0);
    glVertex3f (97, 61.5, 0);
    glVertex3f (97, 64, 0);
    glVertex3f (78, 64, 0);
    glEnd();

    //black

    //left
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (79, 62.3, 0);
    glVertex3f (96.5, 62.3, 0);
    glVertex3f (96.5, 62.8, 0);
    glVertex3f (79, 62.8, 0);
    glEnd();

    //white line

    for(int pk = 0; pk <= 12; pk+= 1)
    {
        glColor3ub(182, 203, 201);
        glBegin(GL_POLYGON);
        glVertex3f (pk+82, 51.5, 0);
        glVertex3f (pk+82.2, 51.5, 0);
        glVertex3f (pk+82.2, 61.5, 0);
        glVertex3f (pk+82, 61.5, 0);
        glEnd();
    }

    //door

    glColor3ub(101, 52, 143);
    glBegin(GL_POLYGON);
    glVertex3f (82.5, 51.5, 0);
    glVertex3f (86, 51.5, 0);
    glVertex3f (86, 58.5, 0);
    glVertex3f (82.5, 58.5, 0);
    glEnd();


    //red

    glColor3ub(113, 34, 37);
    glBegin(GL_POLYGON);
    glVertex3f (82.8, 51.5, 0);
    glVertex3f (85.7, 51.5, 0);
    glVertex3f (85.7, 58.2, 0);
    glVertex3f (82.8, 58.2, 0);
    glEnd();

    //agun

    glColor3ub(242, 127, 36);
    glBegin(GL_POLYGON);
    glVertex3f (83.3, 54, 0);
    glVertex3f (85.4, 54, 0);
    glVertex3f (85.4, 58.2, 0);
    glVertex3f (83.3, 58.2, 0);
    glEnd();

    glColor3ub(101, 52, 143);
    glBegin(GL_POLYGON);
    glVertex3f (84, 54.2, 0);
    glVertex3f (85, 54.2, 0);
    glVertex3f (85, 58.2, 0);
    glVertex3f (84, 58.2, 0);
    glEnd();

    //window right1

    glColor3ub(101, 52, 143);
    glBegin(GL_POLYGON);
    glVertex3f (88, 55, 0);
    glVertex3f (90, 55, 0);
    glVertex3f (90, 58.5, 0);
    glVertex3f (88, 58.5, 0);
    glEnd();

    glColor3ub(46, 31, 67);
    glBegin(GL_POLYGON);
    glVertex3f (88.2, 55, 0);
    glVertex3f (89.8, 55, 0);
    glVertex3f (89.8, 57.5, 0);
    glVertex3f (88.2, 57.5, 0);
    glEnd();


    glColor3ub(242, 127, 36);
    glBegin(GL_POLYGON);
    glVertex3f (88.2, 57.5, 0);
    glVertex3f (89.8, 57.5, 0);
    glVertex3f (89.8, 58.2, 0);
    glVertex3f (88.2, 58.2, 0);
    glEnd();

    glColor3ub(182, 203, 201);
    glBegin(GL_POLYGON);
    glVertex3f (88.2, 56.4, 0);
    glVertex3f (89.8, 56.4, 0);
    glVertex3f (89.8, 56.5, 0);
    glVertex3f (88.2, 56.5, 0);
    glEnd();

    //window right2

    glColor3ub(101, 52, 143);
    glBegin(GL_POLYGON);
    glVertex3f (91.5, 55, 0);
    glVertex3f (93.5, 55, 0);
    glVertex3f (93.5, 58.5, 0);
    glVertex3f (91.5, 58.5, 0);
    glEnd();

    glColor3ub(46, 31, 67);
    glBegin(GL_POLYGON);
    glVertex3f (91.7, 55.2, 0);
    glVertex3f (93.2, 55.2, 0);
    glVertex3f (93.2, 56, 0);
    glVertex3f (91.7, 56, 0);
    glEnd();

    glColor3ub(242, 127, 36);
    glBegin(GL_POLYGON);
    glVertex3f (91.7, 56, 0);
    glVertex3f (93.2, 56, 0);
    glVertex3f (93.2, 58.3, 0);
    glVertex3f (91.7, 58.3, 0);
    glEnd();

    glColor3ub(182, 203, 201);
    glBegin(GL_POLYGON);
    glVertex3f (91.7, 56.8, 0);
    glVertex3f (93.2, 56.8, 0);
    glVertex3f (93.2, 56.7, 0);
    glVertex3f (91.7, 56.7, 0);
    glEnd();

    //text


    char string5[]="MOTEL";
    void *font5=GLUT_BITMAP_TIMES_ROMAN_24;
    int k;
    glColor3ub(158,89,202);
    glRasterPos2f(83,65);
    for(k=0;k<strlen(string5);k++)
            glutBitmapCharacter(font5,string5[k]);


    char string[]="VACANCY";
    void *font=GLUT_BITMAP_TIMES_ROMAN_10;
    glColor3ub(158,89,202);
    glRasterPos2f(84,63);
    for(k=0;k<strlen(string);k++)
            glutBitmapCharacter(font,string[k]);

}

//Road Function

void road()
{
    //Road top to button

    glColor3ub(88, 88, 76);
    glBegin(GL_POLYGON);
    glVertex3f (98, 0, 0);
    glVertex3f (134, 0, 0);
    glVertex3f (130, 68, 0);
    glVertex3f (102, 68, 0);
    glEnd();

    //left Border

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (98, 0, 0);
    glVertex3f (100, 0, 0);
    glVertex3f (100, 5, 0);
    glVertex3f (98, 5, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (98.3, 5, 0);
    glVertex3f (100.3, 5, 0);
    glVertex3f (100.3, 10, 0);
    glVertex3f (98.3, 10, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (98.6, 10, 0);
    glVertex3f (100.6, 10, 0);
    glVertex3f (100.6, 15, 0);
    glVertex3f (98.6, 15, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (98.7, 15, 0);
    glVertex3f (100.7, 15, 0);
    glVertex3f (100.7, 20, 0);
    glVertex3f (98.7, 20, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (98.8, 20, 0);
    glVertex3f (100.8, 20, 0);
    glVertex3f (100.8, 25, 0);
    glVertex3f (98.8, 25, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (100.6, 40, 0);
    glVertex3f (102.6, 40, 0);
    glVertex3f (102.6, 49, 0);
    glVertex3f (100.6, 49, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (100.85, 49, 0);
    glVertex3f (102.85, 49, 0);
    glVertex3f (102.85, 54, 0);
    glVertex3f (100.85, 54, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (100.99, 54, 0);
    glVertex3f (102.99, 54, 0);
    glVertex3f (102.99, 59, 0);
    glVertex3f (100.99, 59, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (101.35, 59, 0);
    glVertex3f (103.35, 59, 0);
    glVertex3f (103.35, 64, 0);
    glVertex3f (101.35, 64, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (101.5, 64, 0);
    glVertex3f (103.5, 64, 0);
    glVertex3f (103.5, 68, 0);
    glVertex3f (101.5, 68, 0);
    glEnd();


    //right white

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (131.85, 0, 0);
    glVertex3f (133.85, 0, 0);
    glVertex3f (133.85, 5, 0);
    glVertex3f (131.85, 5, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (131.7, 5, 0);
    glVertex3f (133.7, 5, 0);
    glVertex3f (133.7, 10, 0);
    glVertex3f (131.7, 10, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (131.6, 10, 0);
    glVertex3f (133.6, 10, 0);
    glVertex3f (133.6, 15, 0);
    glVertex3f (131.6, 15, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (131.5, 15, 0);
    glVertex3f (133.5, 15, 0);
    glVertex3f (133.5, 20, 0);
    glVertex3f (131.5, 20, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (131.3, 20, 0);
    glVertex3f (133.3, 20, 0);
    glVertex3f (133.3, 25, 0);
    glVertex3f (131.3, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (131.1, 25, 0);
    glVertex3f (133.1, 25, 0);
    glVertex3f (133.1, 30, 0);
    glVertex3f (131.1, 30, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (130.9, 30, 0);
    glVertex3f (132.9, 30, 0);
    glVertex3f (132.9, 35, 0);
    glVertex3f (130.9, 35, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (130.6, 35, 0);
    glVertex3f (132.6, 35, 0);
    glVertex3f (132.6, 40, 0);
    glVertex3f (130.6, 40, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (130.1, 40, 0);
    glVertex3f (132.1, 40, 0);
    glVertex3f (132.1, 48, 0);
    glVertex3f (130.1, 48, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (129, 48, 0);
    glVertex3f (131, 48, 0);
    glVertex3f (131, 53, 0);
    glVertex3f (129, 53, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (128.6, 53, 0);
    glVertex3f (130.6, 53, 0);
    glVertex3f (130.6, 58, 0);
    glVertex3f (128.6, 58, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (128.3, 58, 0);
    glVertex3f (130.3, 58, 0);
    glVertex3f (130.3, 63, 0);
    glVertex3f (128.3, 63, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (128, 63, 0);
    glVertex3f (130, 63, 0);
    glVertex3f (130, 68, 0);
    glVertex3f (128, 68, 0);
    glEnd();
}

void road_cross_middle()
{
     //Road Crossing middle


    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (116, 0, 0);
    glVertex3f (117, 0, 0);
    glVertex3f (117, 3, 0);
    glVertex3f (116, 3, 0);
    glEnd();

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (116, 5, 0);
    glVertex3f (117, 5, 0);
    glVertex3f (117, 8, 0);
    glVertex3f (116, 8, 0);
    glEnd();

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (116, 10, 0);
    glVertex3f (117, 10, 0);
    glVertex3f (117, 13, 0);
    glVertex3f (116, 13, 0);
    glEnd();


    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (116, 15, 0);
    glVertex3f (117, 15, 0);
    glVertex3f (117, 18, 0);
    glVertex3f (116, 18, 0);
    glEnd();


    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (116, 20, 0);
    glVertex3f (117, 20, 0);
    glVertex3f (117, 23, 0);
    glVertex3f (116, 23, 0);
    glEnd();





    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (116, 44, 0);
    glVertex3f (117, 44, 0);
    glVertex3f (117, 47, 0);
    glVertex3f (116, 47, 0);
    glEnd();


    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (116, 49, 0);
    glVertex3f (117, 49, 0);
    glVertex3f (117, 52, 0);
    glVertex3f (116, 52, 0);
    glEnd();

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (116, 54, 0);
    glVertex3f (117, 54, 0);
    glVertex3f (117, 57, 0);
    glVertex3f (116, 57, 0);
    glEnd();

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (116, 59, 0);
    glVertex3f (117, 59, 0);
    glVertex3f (117, 62, 0);
    glVertex3f (116, 62, 0);
    glEnd();

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (116, 64, 0);
    glVertex3f (117, 64, 0);
    glVertex3f (117, 68, 0);
    glVertex3f (116, 68, 0);
    glEnd();
}


//Road Cross for People Function


void road_cross_people()
{

    //upper


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (102, 42, 0);
    glVertex3f (132, 42, 0);
    glVertex3f (132, 44, 0);
    glVertex3f (102, 44, 0);
    glEnd();




    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (103, 42, 0);
    glVertex3f (103.5, 42, 0);
    glVertex3f (104.5, 44, 0);
    glVertex3f (104, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (105, 42, 0);
    glVertex3f (105.5, 42, 0);
    glVertex3f (106.5, 44, 0);
    glVertex3f (106, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (107, 42, 0);
    glVertex3f (107.5, 42, 0);
    glVertex3f (108.5, 44, 0);
    glVertex3f (108, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (109, 42, 0);
    glVertex3f (109.5, 42, 0);
    glVertex3f (110.5, 44, 0);
    glVertex3f (110, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (111, 42, 0);
    glVertex3f (111.5, 42, 0);
    glVertex3f (112.5, 44, 0);
    glVertex3f (112, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (113, 42, 0);
    glVertex3f (113.5, 42, 0);
    glVertex3f (114.5, 44, 0);
    glVertex3f (114, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (115, 42, 0);
    glVertex3f (115.5, 42, 0);
    glVertex3f (116.5, 44, 0);
    glVertex3f (116, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (117, 42, 0);
    glVertex3f (117.5, 42, 0);
    glVertex3f (118.5, 44, 0);
    glVertex3f (118, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (119, 42, 0);
    glVertex3f (119.5, 42, 0);
    glVertex3f (120.5, 44, 0);
    glVertex3f (120, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (121, 42, 0);
    glVertex3f (121.5, 42, 0);
    glVertex3f (122.5, 44, 0);
    glVertex3f (122, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (123, 42, 0);
    glVertex3f (123.5, 42, 0);
    glVertex3f (124.5, 44, 0);
    glVertex3f (124, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (125, 42, 0);
    glVertex3f (125.5, 42, 0);
    glVertex3f (126.5, 44, 0);
    glVertex3f (126, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (127, 42, 0);
    glVertex3f (127.5, 42, 0);
    glVertex3f (128.5, 44, 0);
    glVertex3f (128, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (129, 42, 0);
    glVertex3f (129.5, 42, 0);
    glVertex3f (130.5, 44, 0);
    glVertex3f (130, 44, 0);
    glEnd();





    // Under


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (100.7, 23, 0);
    glVertex3f (132, 23, 0);
    glVertex3f (132, 25, 0);
    glVertex3f (100.7, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (101, 23, 0);
    glVertex3f (101.5, 23, 0);
    glVertex3f (102.5, 25, 0);
    glVertex3f (102, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (103, 23, 0);
    glVertex3f (103.5, 23, 0);
    glVertex3f (104.5, 25, 0);
    glVertex3f (104, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (105, 23, 0);
    glVertex3f (105.5, 23, 0);
    glVertex3f (106.5, 25, 0);
    glVertex3f (106, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (107, 23, 0);
    glVertex3f (107.5, 23, 0);
    glVertex3f (108.5, 25, 0);
    glVertex3f (108, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (109, 23, 0);
    glVertex3f (109.5, 23, 0);
    glVertex3f (110.5, 25, 0);
    glVertex3f (110, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (111, 23, 0);
    glVertex3f (111.5, 23, 0);
    glVertex3f (112.5, 25, 0);
    glVertex3f (112, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (113, 23, 0);
    glVertex3f (113.5, 23, 0);
    glVertex3f (114.5, 25, 0);
    glVertex3f (114, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (115, 23, 0);
    glVertex3f (115.5, 23, 0);
    glVertex3f (116.5, 25, 0);
    glVertex3f (116, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (117, 23, 0);
    glVertex3f (117.5, 23, 0);
    glVertex3f (118.5, 25, 0);
    glVertex3f (118, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (119, 23, 0);
    glVertex3f (119.5, 23, 0);
    glVertex3f (120.5, 25, 0);
    glVertex3f (120, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (121, 23, 0);
    glVertex3f (121.5, 23, 0);
    glVertex3f (122.5, 25, 0);
    glVertex3f (122, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (123, 23, 0);
    glVertex3f (123.5, 23, 0);
    glVertex3f (124.5, 25, 0);
    glVertex3f (124, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (125, 23, 0);
    glVertex3f (125.5, 23, 0);
    glVertex3f (126.5, 25, 0);
    glVertex3f (126, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (127, 23, 0);
    glVertex3f (127.5, 23, 0);
    glVertex3f (128.5, 25, 0);
    glVertex3f (128, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (129, 23, 0);
    glVertex3f (129.5, 23, 0);
    glVertex3f (130.5, 25, 0);
    glVertex3f (130, 25, 0);
    glEnd();




    //1st

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (101.5, 28, 0);
    glVertex3f (103.5, 28, 0);
    glVertex3f (103.5, 37, 0);
    glVertex3f (101.5, 37, 0);
    glEnd();





    //2nd

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (105.5, 28, 0);
    glVertex3f (107.5, 28, 0);
    glVertex3f (107.5, 37, 0);
    glVertex3f (105.5, 37, 0);
    glEnd();




    //3rd


    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (109.5, 28, 0);
    glVertex3f (111.5, 28, 0);
    glVertex3f (111.5, 37, 0);
    glVertex3f (109.5, 37, 0);
    glEnd();




     //4th

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (113.5, 28, 0);
    glVertex3f (115.5, 28, 0);
    glVertex3f (115.5, 37, 0);
    glVertex3f (113.5, 37, 0);
    glEnd();








    //5th

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (117.5, 28, 0);
    glVertex3f (119.5, 28, 0);
    glVertex3f (119.5, 37, 0);
    glVertex3f (117.5, 37, 0);
    glEnd();





    //6th

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (121.5, 28, 0);
    glVertex3f (123.5, 28, 0);
    glVertex3f (123.5, 37, 0);
    glVertex3f (121.5, 37, 0);
    glEnd();









    //7th

    glColor3ub(254, 185, 1);
    glBegin(GL_POLYGON);
    glVertex3f (125.5, 28, 0);
    glVertex3f (127.5, 28, 0);
    glVertex3f (127.5, 37, 0);
    glVertex3f (125.5, 37, 0);
    glEnd();





}




//Left Road

void left_road()
{


    glColor3ub(88, 88, 76);
    glBegin(GL_POLYGON);
    glVertex3f (70, 26, 0);
    glVertex3f (101, 26, 0);
    glVertex3f (101, 39, 0);
    glVertex3f (70, 39, 0);
    glEnd();





    //car1



    glColor3ub(0, 88, 76);
    glBegin(GL_POLYGON);
    glVertex3f (77, 27, 0);
    glVertex3f (87, 27, 0);
    glVertex3f (87, 29.5, 0);
    glVertex3f (77, 29.5, 0);
    glEnd();



    glColor3ub(0, 88, 76);
    glBegin(GL_POLYGON);
    glVertex3f (78, 29.5, 0);
    glVertex3f (84, 29.5, 0);
    glVertex3f (82, 31, 0);
    glVertex3f (79, 31, 0);
    glEnd();

    glColor3ub(0, 0, 76);
    glBegin(GL_POLYGON);
    glVertex3f (79, 29.7, 0);
    glVertex3f (83.5, 29.7, 0);
    glVertex3f (81.8, 30.8, 0);
    glVertex3f (79.5, 30.8, 0);
    glEnd();


    glColor3ub (0, 0, 0);

    circle(1, 1, 80, 27);

    glColor3ub (0, 0, 0);

    circle(1, 1, 85, 27);




    //car 2

    glColor3ub(0, 88, 76);
    glBegin(GL_POLYGON);
    glVertex3f (77, 33, 0);
    glVertex3f (87, 33, 0);
    glVertex3f (87, 35.5, 0);
    glVertex3f (77, 35.5, 0);
    glEnd();



    glColor3ub(0, 88, 76);
    glBegin(GL_POLYGON);
    glVertex3f (78, 35.5, 0);
    glVertex3f (84, 35.5, 0);
    glVertex3f (82, 37, 0);
    glVertex3f (79, 37, 0);
    glEnd();

    glColor3ub(0, 0, 76);
    glBegin(GL_POLYGON);
    glVertex3f (79, 35.7, 0);
    glVertex3f (83.5, 35.7, 0);
    glVertex3f (81.8, 36.8, 0);
    glVertex3f (79.5, 36.8, 0);
    glEnd();


    glColor3ub (0, 0, 0);

    circle(1, 1, 80, 33);

    glColor3ub (0, 0, 0);

    circle(1, 1, 85, 33);


    //Bottom Border

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (70, 26, 0);
    glVertex3f (74, 26, 0);
    glVertex3f (74, 25, 0);
    glVertex3f (70, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (74, 26, 0);
    glVertex3f (78, 26, 0);
    glVertex3f (78, 25, 0);
    glVertex3f (74, 25, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (78, 26, 0);
    glVertex3f (82, 26, 0);
    glVertex3f (82, 25, 0);
    glVertex3f (78, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (82, 26, 0);
    glVertex3f (86, 26, 0);
    glVertex3f (86, 25, 0);
    glVertex3f (82, 25, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (86, 26, 0);
    glVertex3f (90, 26, 0);
    glVertex3f (90, 25, 0);
    glVertex3f (86, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (90, 26, 0);
    glVertex3f (94, 26, 0);
    glVertex3f (94, 25, 0);
    glVertex3f (90, 25, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (94, 26, 0);
    glVertex3f (98, 26, 0);
    glVertex3f (98, 25, 0);
    glVertex3f (94, 25, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (98, 26, 0);
    glVertex3f (101.5, 26, 0);
    glVertex3f (101.5, 25, 0);
    glVertex3f (98, 25, 0);
    glEnd();



    //Top Border

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (70, 39, 0);
    glVertex3f (74, 39, 0);
    glVertex3f (74, 40, 0);
    glVertex3f (70, 40, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (74, 39, 0);
    glVertex3f (78, 39, 0);
    glVertex3f (78, 40, 0);
    glVertex3f (74, 40, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (78, 39, 0);
    glVertex3f (82, 39, 0);
    glVertex3f (82, 40, 0);
    glVertex3f (78, 40, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (82, 39, 0);
    glVertex3f (86, 39, 0);
    glVertex3f (86, 40, 0);
    glVertex3f (82, 40, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (86, 39, 0);
    glVertex3f (90, 39, 0);
    glVertex3f (90, 40, 0);
    glVertex3f (86, 40, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (90, 39, 0);
    glVertex3f (94, 39, 0);
    glVertex3f (94, 40, 0);
    glVertex3f (90, 40, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (94, 39, 0);
    glVertex3f (98, 39, 0);
    glVertex3f (98, 40, 0);
    glVertex3f (94, 40, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (98, 39, 0);
    glVertex3f (102, 39, 0);
    glVertex3f (102, 40, 0);
    glVertex3f (98, 40, 0);
    glEnd();










}

//Lamp Post Function

float l1 = 0;


void lamp_post()
{


     //Lamp Post bottom left

     //Bamboo

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (96, 25, 0);
    glVertex3f (97.5, 25, 0);
    glVertex3f (97.5,37, 0);
    glVertex3f (96, 37, 0);
    glEnd();

    //Rod

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (91, 30, 0);
    glVertex3f (103, 30, 0);
    glVertex3f (103,30.5, 0);
    glVertex3f (91, 30.5, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (91, 30, 0);
    glVertex3f (91.5, 30, 0);
    glVertex3f (91.5,33, 0);
    glVertex3f (91, 33, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (103, 30, 0);
    glVertex3f (103.5, 30, 0);
    glVertex3f (103.5,33, 0);
    glVertex3f (103, 33, 0);
    glEnd();



    //Rod Upper

    //circle

    glColor3ub (254, 185, 1);

    circle(3, 3, 96.7, 37);


    //Bulb Left

    glColor3ub (255, 255, 255);

    circle(2, 2, 91.2, 34);



    //Bulb Right

    glColor3ub (255, 255, 255);

    circle(2, 2, 103.3, 34);

}


//Traffic Light Function

float n = 0;



void traffic_light()
{
     //Traffic Light

    glColor3ub(90, 85, 122);
    glBegin(GL_POLYGON);
    glVertex3f (131.5, 35, 0);
    glVertex3f (133, 35, 0);
    glVertex3f (133,50, 0);
    glVertex3f (131.5, 50, 0);
    glEnd();


    glColor3ub (158, 105, 25);
    glBegin(GL_POLYGON);
    glVertex3f (129, 50, 0);
    glVertex3f (135, 50, 0);
    glVertex3f (135, 68, 0);
    glVertex3f (129, 68, 0);
    glEnd();


    glColor3ub (0, 1, 255);
    glBegin(GL_POLYGON);
    glVertex3f (129.5, 50.5, 0);
    glVertex3f (134.5, 50.5, 0);
    glVertex3f (134.5, 67.5, 0);
    glVertex3f (129.5, 67.5, 0);
    glEnd();


    if(n < 130.10)
    {
        n += 0.5;
    }

    else
    {
        n = 0;
    }



   glutPostRedisplay();


    int k = n*n;

    glColor3ub(1, (k*1000)%255, 1);

    circle(2, 2, 132, 64);




    glColor3ub (255, 0, 0);

    circle(2, 2, 132, 58.5);

    glColor3ub (255, 230, 4);

    circle(2, 2, 132, 53);

}


//Small House

void small_house()
{
    //Left Portion

    glColor3ub(158, 105, 25);
    glBegin(GL_POLYGON);
    glVertex3f (77.5, 50.5, 0);
    glVertex3f (78.5, 46.5, 0);
    glVertex3f (75.5, 46.5, 0);
    glEnd();


    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (77.5, 50.5, 0);
    glVertex3f (77.65, 50.5, 0);
    glVertex3f (75.65, 46.5, 0);
    glVertex3f (75.5, 46.5, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (78, 50.5, 0);
    glVertex3f (78.15, 50.5, 0);
    glVertex3f (76.15, 46.5, 0);
    glVertex3f (76, 46.5, 0);
    glEnd();




    //upper Portion

    glColor3ub(158, 105, 25);
    glBegin(GL_POLYGON);
    glVertex3f (77.5, 50.5, 0);
    glVertex3f (85.5, 50.5, 0);
    glVertex3f (86.5, 46.5, 0);
    glVertex3f (78.5, 46.5, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (77.5, 50.5, 0);
    glVertex3f (85.5, 50.5, 0);
    glVertex3f (85.5, 50.65, 0);
    glVertex3f (77.5, 50.65, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (78.5, 46.5, 0);
    glVertex3f (86.5, 46.5, 0);
    glVertex3f (86.5, 46.65, 0);
    glVertex3f (78.5, 46.65, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (77.5, 50.5, 0);
    glVertex3f (77.65, 50.5, 0);
    glVertex3f (78.65, 46.5, 0);
    glVertex3f (78.5, 46.5, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (85.5, 50.5, 0);
    glVertex3f (85.65, 50.5, 0);
    glVertex3f (86.65, 46.5, 0);
    glVertex3f (86.5, 46.5, 0);
    glEnd();



    //Font Portion

    glColor3ub(158, 105, 25);
    glBegin(GL_POLYGON);
    glVertex3f (78.8, 46.5, 0);
    glVertex3f (86.2, 46.5, 0);
    glVertex3f (86.2, 39, 0);
    glVertex3f (78.8, 39, 0);
    glEnd();


    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (78.8, 39, 0);
    glVertex3f (86.2, 39, 0);
    glVertex3f (86.2, 39.15, 0);
    glVertex3f (78.8, 39.15, 0);
    glEnd();


    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (86.05, 46.5, 0);
    glVertex3f (86.2, 46.5, 0);
    glVertex3f (86.2, 39, 0);
    glVertex3f (86.05, 39, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (78.75, 46.5, 0);
    glVertex3f (78.95, 46.5, 0);
    glVertex3f (78.95, 39, 0);
    glVertex3f (78.75, 39, 0);
    glEnd();



    //Door

    glColor3ub(100, 57, 14);
    glBegin(GL_POLYGON);
    glVertex3f (81, 45, 0);
    glVertex3f (84, 45, 0);
    glVertex3f (84, 39.15, 0);
    glVertex3f (81, 39.15, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (81, 44.85, 0);
    glVertex3f (84, 44.85, 0);
    glVertex3f (84, 45.05, 0);
    glVertex3f (81, 45.05, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (81, 45, 0);
    glVertex3f (81.20, 45, 0);
    glVertex3f (81.20, 39, 0);
    glVertex3f (81, 39, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (84, 45, 0);
    glVertex3f (84.20, 45, 0);
    glVertex3f (84.20, 39, 0);
    glVertex3f (84, 39, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (82.5, 45, 0);
    glVertex3f (82.70, 45, 0);
    glVertex3f (82.70, 39, 0);
    glVertex3f (82.5, 39, 0);
    glEnd();

    //Left Under Portion

    glColor3ub(158, 105, 25);
    glBegin(GL_POLYGON);
    glVertex3f (78.8, 46.5, 0);
    glVertex3f (76, 46.5, 0);
    glVertex3f (76, 39, 0);
    glVertex3f (78.8, 39, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (76, 46.5, 0);
    glVertex3f (76.15, 46.5, 0);
    glVertex3f (76.15, 39, 0);
    glVertex3f (76, 39, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (76, 39, 0);
    glVertex3f (78.8, 39, 0);
    glVertex3f (78.8, 39.2, 0);
    glVertex3f (76, 39.2, 0);
    glEnd();


    glColor3ub(100, 57, 14);
    glBegin(GL_POLYGON);
    glVertex3f (76.8, 45, 0);
    glVertex3f (78, 45, 0);
    glVertex3f (78, 43, 0);
    glVertex3f (76.8, 43, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (76, 46.5, 0);
    glVertex3f (78.8, 46.5, 0);
    glVertex3f (78.8, 46.7, 0);
    glVertex3f (76, 46.7, 0);
    glEnd();





    glColor3ub(8, 130, 19);
    glBegin(GL_POLYGON);
    glVertex3f (70, 41, 0);
    glVertex3f (90, 41, 0);
    glVertex3f (90, 39, 0);
    glVertex3f (70, 39, 0);
    glEnd();



}





//House Function

void house()
{



    //remove something
    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (74.5, 6.5, 0);
    glVertex3f (98, 6.5, 0);
    glVertex3f (98, 1, 0);
    glVertex3f (74.5, 1, 0);
    glEnd();


    glColor3ub(120, 114, 38);
    glBegin(GL_POLYGON);
    glVertex3f (76.5, 2.5, 0);
    glVertex3f (97, 2.5, 0);
    glVertex3f (97, 1, 0);
    glVertex3f (76.5, 1, 0);
    glEnd();


    glColor3ub(0, 114, 38);
    glBegin(GL_POLYGON);
    glVertex3f (76.5, 2.5, 0);
    glVertex3f (97, 2.5, 0);
    glVertex3f (96, 5.5, 0);
    glVertex3f (75.5, 5.5, 0);
    glEnd();



    glColor3ub(120, 114, 38);
    glBegin(GL_POLYGON);
    glVertex3f (75.5, 5.5, 0);
    glVertex3f (75.2, 3.5, 0);
    glVertex3f (76.5, .8, 0);
    glVertex3f (76.5, 2.5, 0);
    glEnd();



    //shadow


    glColor3ub(120, 114, 38);
    glBegin(GL_POLYGON);
    glVertex3f (75.2, 9, 0);
    glVertex3f (77, 4, 0);
    glVertex3f (77, 24, 0);
    glVertex3f (75.2, 20, 0);
    glEnd();


    //Full Building

    glColor3ub(204, 114, 38);
    glBegin(GL_POLYGON);
    glVertex3f (77, 4, 0);
    glVertex3f (96, 4, 0);
    glVertex3f (96, 24, 0);
    glVertex3f (77, 24, 0);
    glEnd();

    //Gate

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (83, 6, 0);
    glVertex3f (90, 6, 0);
    glVertex3f (90, 9, 0);
    glVertex3f (83, 9, 0);
    glEnd();

    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (86.5, 6, 0.0);
    glVertex3f (86.5, 9, 0.0);
    glEnd();



    //1st window

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (78, 10, 0);
    glVertex3f (79, 10, 0);
    glVertex3f (79, 11, 0);
    glVertex3f (78, 11, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (80, 10, 0);
    glVertex3f (81, 10, 0);
    glVertex3f (81, 11, 0);
    glVertex3f (80, 11, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (82, 10, 0);
    glVertex3f (83, 10, 0);
    glVertex3f (83, 11, 0);
    glVertex3f (82, 11, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (84, 10, 0);
    glVertex3f (85, 10, 0);
    glVertex3f (85, 11, 0);
    glVertex3f (84, 11, 0);
    glEnd();


    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (86, 10, 0);
    glVertex3f (87, 10, 0);
    glVertex3f (87, 11, 0);
    glVertex3f (86, 11, 0);
    glEnd();

    for(int o = 0; o <= 17; o+= 2)
    {
        glColor3ub(98, 138, 200);
        glBegin(GL_POLYGON);
        glVertex3f (o+78, 10, 0);
        glVertex3f (o+79, 10, 0);
        glVertex3f (o+79, 11, 0);
        glVertex3f (o+78, 11, 0);
        glEnd();
    }


     //Left 2nd window



    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (78, 12, 0);
    glVertex3f (79, 12, 0);
    glVertex3f (79, 13, 0);
    glVertex3f (78, 13, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (80, 12, 0);
    glVertex3f (81, 12, 0);
    glVertex3f (81, 13, 0);
    glVertex3f (80, 13, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (82, 12, 0);
    glVertex3f (83, 12, 0);
    glVertex3f (83, 13, 0);
    glVertex3f (82, 13, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (84, 12, 0);
    glVertex3f (85, 12, 0);
    glVertex3f (85, 13, 0);
    glVertex3f (84, 13, 0);
    glEnd();


    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (86, 12, 0);
    glVertex3f (87, 12, 0);
    glVertex3f (87, 13, 0);
    glVertex3f (86, 13, 0);
    glEnd();


    for(int o = 0; o <= 17; o+= 2)
    {
        glColor3ub(98, 138, 200);
        glBegin(GL_POLYGON);
        glVertex3f (o+78, 12, 0);
        glVertex3f (o+79, 12, 0);
        glVertex3f (o+79, 13, 0);
        glVertex3f (o+78, 13, 0);
        glEnd();
    }

    //Left 3rd window


    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (78, 14, 0);
    glVertex3f (79, 14, 0);
    glVertex3f (79, 15, 0);
    glVertex3f (78, 15, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (80, 14, 0);
    glVertex3f (81, 14, 0);
    glVertex3f (81, 15, 0);
    glVertex3f (80, 15, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (82, 14, 0);
    glVertex3f (83, 14, 0);
    glVertex3f (83, 15, 0);
    glVertex3f (82, 15, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (84, 14, 0);
    glVertex3f (85, 14, 0);
    glVertex3f (85, 15, 0);
    glVertex3f (84, 15, 0);
    glEnd();


    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (86, 14, 0);
    glVertex3f (87, 14, 0);
    glVertex3f (87, 15, 0);
    glVertex3f (86, 15, 0);
    glEnd();


    for(int o = 0; o <= 17; o+= 2)
    {
        glColor3ub(98, 138, 200);
        glBegin(GL_POLYGON);
        glVertex3f (o+78, 14, 0);
        glVertex3f (o+79, 14, 0);
        glVertex3f (o+79, 15, 0);
        glVertex3f (o+78, 15, 0);
        glEnd();
    }

    //Left 4th window



    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (78, 16, 0);
    glVertex3f (79, 16, 0);
    glVertex3f (79, 17, 0);
    glVertex3f (78, 17, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (80, 16, 0);
    glVertex3f (81, 16, 0);
    glVertex3f (81, 17, 0);
    glVertex3f (80, 17, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (82, 16, 0);
    glVertex3f (83, 16, 0);
    glVertex3f (83, 17, 0);
    glVertex3f (82, 17, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (84, 16, 0);
    glVertex3f (85, 16, 0);
    glVertex3f (85, 17, 0);
    glVertex3f (84, 17, 0);
    glEnd();

     glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (86, 16, 0);
    glVertex3f (87, 16, 0);
    glVertex3f (87, 17, 0);
    glVertex3f (86, 17, 0);
    glEnd();


    for(int o = 0; o <= 17; o+= 2)
    {
        glColor3ub(98, 138, 200);
        glBegin(GL_POLYGON);
        glVertex3f (o+78, 16, 0);
        glVertex3f (o+79, 16, 0);
        glVertex3f (o+79, 17, 0);
        glVertex3f (o+78, 17, 0);
        glEnd();
    }

     //Left 5th window


    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (78, 18, 0);
    glVertex3f (79, 18, 0);
    glVertex3f (79, 19, 0);
    glVertex3f (78, 19, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (80, 18, 0);
    glVertex3f (81, 18, 0);
    glVertex3f (81, 19, 0);
    glVertex3f (80, 19, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (82, 18, 0);
    glVertex3f (83, 18, 0);
    glVertex3f (83, 19, 0);
    glVertex3f (82, 19, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (84, 18, 0);
    glVertex3f (85, 18, 0);
    glVertex3f (85, 19, 0);
    glVertex3f (84, 19, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (86, 18, 0);
    glVertex3f (87, 18, 0);
    glVertex3f (87, 19, 0);
    glVertex3f (86, 19, 0);
    glEnd();


    for(int o = 0; o <= 17; o+= 2)
    {
        glColor3ub(98, 138, 200);
        glBegin(GL_POLYGON);
        glVertex3f (o+78, 18, 0);
        glVertex3f (o+79, 18, 0);
        glVertex3f (o+79, 19, 0);
        glVertex3f (o+78, 19, 0);
        glEnd();
    }


     //Left 6th window


    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (78, 20, 0);
    glVertex3f (79, 20, 0);
    glVertex3f (79, 21, 0);
    glVertex3f (78, 21, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (80, 20, 0);
    glVertex3f (81, 20, 0);
    glVertex3f (81, 21, 0);
    glVertex3f (80, 21, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (82, 20, 0);
    glVertex3f (83, 20, 0);
    glVertex3f (83, 21, 0);
    glVertex3f (82, 21, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (84, 20, 0);
    glVertex3f (85, 20, 0);
    glVertex3f (85, 21, 0);
    glVertex3f (84, 21, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (86, 20, 0);
    glVertex3f (87, 20, 0);
    glVertex3f (87, 21, 0);
    glVertex3f (86, 21, 0);
    glEnd();


    for(int o = 0; o <= 17; o+= 2)
    {
        glColor3ub(98, 138, 200);
        glBegin(GL_POLYGON);
        glVertex3f (o+78, 20, 0);
        glVertex3f (o+79, 20, 0);
        glVertex3f (o+79, 21, 0);
        glVertex3f (o+78, 21, 0);
        glEnd();
    }

    //Left 7th window


    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (78, 22, 0);
    glVertex3f (79, 22, 0);
    glVertex3f (79, 23, 0);
    glVertex3f (78, 23, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (80, 22, 0);
    glVertex3f (81, 22, 0);
    glVertex3f (81, 23, 0);
    glVertex3f (80, 23, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (82, 22, 0);
    glVertex3f (83, 22, 0);
    glVertex3f (83, 23, 0);
    glVertex3f (82, 23, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (84, 22, 0);
    glVertex3f (85, 22, 0);
    glVertex3f (85, 23, 0);
    glVertex3f (84, 23, 0);
    glEnd();

    glColor3ub(98, 138, 200);
    glBegin(GL_POLYGON);
    glVertex3f (86, 22, 0);
    glVertex3f (87, 22, 0);
    glVertex3f (87, 23, 0);
    glVertex3f (86, 23, 0);
    glEnd();


    for(int o = 0; o <= 17; o+= 2)
    {
        glColor3ub(98, 138, 200);
        glBegin(GL_POLYGON);
        glVertex3f (o+78, 22, 0);
        glVertex3f (o+79, 22, 0);
        glVertex3f (o+79, 23, 0);
        glVertex3f (o+78, 23, 0);
        glEnd();
    }


}





//Horse car Function

void horse_car()
{

    //Wheel 1

    glColor3ub (255, 0, 0);

    circle(2, 2, 89.5, 42);

    glColor3ub (8, 130, 19);

    circle(1, 1, 89.5, 42);


    //Wheel 2

    glColor3ub (255, 0, 0);

    circle(2, 2, 94.2, 42);

    glColor3ub (8, 130, 19);

    circle(1, 1, 94.2, 42);









    //Sit


    glColor3ub(254, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (87.5, 44, 0);
    glVertex3f (87.5, 44.5, 0);
    glVertex3f (102.7, 44.5, 0);
    glVertex3f (102.7, 44, 0);
    glEnd();





    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (88, 44, 0.0);
    glVertex3f (88, 49, 0);
    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (89, 44, 0.0);
    glVertex3f (89, 49, 0);
    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (90, 44, 0.0);
    glVertex3f (90, 49, 0);
    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (91, 44, 0.0);
    glVertex3f (91, 49, 0);
    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (92, 44, 0.0);
    glVertex3f (92, 49, 0);
    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (93, 44, 0.0);
    glVertex3f (93, 49, 0);
    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (94, 44, 0.0);
    glVertex3f (94, 49, 0);
    glEnd();


    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (95, 44, 0.0);
    glVertex3f (95, 49, 0);
    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (96, 44, 0.0);
    glVertex3f (96, 49, 0);
    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (97, 44, 0.0);
    glVertex3f (97, 49, 0);
    glEnd();







    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (88, 45.5, 0.0);
    glVertex3f (97, 45.5, 0);
    glEnd();


    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (88, 46.5, 0.0);
    glVertex3f (97, 46.5, 0);
    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (88, 47.5, 0.0);
    glVertex3f (97, 47.5, 0);
    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (88, 48.5, 0.0);
    glVertex3f (97, 48.5, 0);
    glEnd();




    //Horse



    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (96.3, 44.4, 0);
    glVertex3f (99.8, 44.4, 0);
    glVertex3f (99.8, 44, 0);
    glVertex3f (96.3, 44, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (97.3, 42.4, 0);
    glVertex3f (100, 42.4, 0);
    glVertex3f (100, 42, 0);
    glVertex3f (97.3, 42, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (96, 44.4, 0);
    glVertex3f (96.4, 44.4, 0);
    glVertex3f (96.4, 41, 0);
    glVertex3f (96, 41, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (97, 43, 0);
    glVertex3f (97.4, 43, 0);
    glVertex3f (97.4, 41, 0);
    glVertex3f (97, 41, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (96, 41, 0);
    glVertex3f (97, 41, 0);
    glVertex3f (97, 41.4, 0);
    glVertex3f (96, 41.4, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (98.5, 42, 0);
    glVertex3f (98.8, 42, 0);
    glVertex3f (98.8, 41, 0);
    glVertex3f (98.5, 41, 0);
    glEnd();


    /*

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (106.5, 30.3, 0.0);
    glVertex3f (106.8, 30.8, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (106.8, 30.8, 0.0);
    glVertex3f (107.2, 30.3, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (107.2, 30.3, 0.0);
    glVertex3f (107.5, 30.3, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (107.5, 30.3, 0.0);
    glVertex3f (107.8, 30.8, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (107.8, 30.8, 0.0);
    glVertex3f (108.3, 29.8, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (107.5, 29.8, 0.0);
    glVertex3f (108.3, 29.8, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (107.6, 29.8, 0.0);
    glVertex3f (107.5, 29.3, 0);
    glEnd();






    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (107.4, 28.8, 0.0);
    glVertex3f (107.3, 28.3, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (107.3, 28.3, 0.0);
    glVertex3f (106, 28.3, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (106.5, 28.3, 0.0);
    glVertex3f (106.5, 28.8, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (106.7, 28.3, 0.0);
    glVertex3f (106.7, 28.8, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (107, 29, 0.0);
    glVertex3f (107, 28.3, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (107.5, 29.5, 0.0);
    glVertex3f (107.5, 28.3, 0);
    glEnd();



    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (108, 30.7, 0.0);
    glVertex3f (108, 31.5, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (107.5, 30.5, 0.0);
    glVertex3f (107.5, 32, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f (108.5, 30.5, 0.0);
    glVertex3f (108.5, 32, 0);
    glEnd();

    */
}


float p = 0;

//Sky Function

void sky()
{




    glColor3ub(43, 119, 204);
    glBegin(GL_POLYGON);
    glVertex3f (0, 59, 0);
    glVertex3f (135, 59, 0);
    glVertex3f (135, 68, 0);
    glVertex3f (0, 68, 0);
    glEnd();

    glColor3ub(168, 169, 173);
    glBegin(GL_POLYGON);
    glVertex3f (0, 59, 0);
    glVertex3f (135, 59, 0);
    glVertex3f (135, 58.5, 0);
    glVertex3f (0, 58.5, 0);
    glEnd();

    glColor3ub(106, 167, 151);
    glBegin(GL_POLYGON);
    glVertex3f (0, 58.5, 0);
    glVertex3f (135, 58.5, 0);
    glVertex3f (135, 58, 0);
    glVertex3f (0, 58, 0);
    glEnd();

    glColor3ub(204, 144, 108);
    glBegin(GL_POLYGON);
    glVertex3f (0, 58, 0);
    glVertex3f (135, 58, 0);
    glVertex3f (135, 57.5, 0);
    glVertex3f (0, 57.5, 0);
    glEnd();

    glColor3ub(196, 112, 86);
    glBegin(GL_POLYGON);
    glVertex3f (0, 57.5, 0);
    glVertex3f (135, 57.5, 0);
    glVertex3f (135, 57, 0);
    glVertex3f (0, 57, 0);
    glEnd();

    glColor3ub(173, 94, 88);
    glBegin(GL_POLYGON);
    glVertex3f (0, 57, 0);
    glVertex3f (135, 57, 0);
    glVertex3f (135, 56.5, 0);
    glVertex3f (0, 56.5, 0);
    glEnd();

    glColor3ub(127, 75, 92);
    glBegin(GL_POLYGON);
    glVertex3f (0, 56.5, 0);
    glVertex3f (135, 56.5, 0);
    glVertex3f (135, 56, 0);
    glVertex3f (0, 56, 0);
    glEnd();

    glColor3ub(242, 120, 78);
    glBegin(GL_POLYGON);
    glVertex3f (0, 56, 0);
    glVertex3f (135, 56, 0);
    glVertex3f (135, 55, 0);
    glVertex3f (0, 55, 0);
    glEnd();







    glColor3ub(8, 130, 19);
    glBegin(GL_POLYGON);
    glVertex3f (0, 0, 0);
    glVertex3f (135, 0, 0);
    glVertex3f (135, 55, 0);
    glVertex3f (0, 55, 0);
    glEnd();

    //sun






}

//Sun Function


float b = 0;

void sun()
{

    if(p <= 140)
    {
        p += 0.02;
    }

    else
    {
        p = -10;
    }

    glutPostRedisplay();


    glColor3f (247, 213, 0);

    circle(3, 3, p+2, 63);

}

//Sea Function


float s = 0;

void sea()
{
    glColor3ub(36, 167, 173);
    glBegin(GL_POLYGON);
    glVertex3f (0, 55, 0);
    glVertex3f (135, 55, 0);
    glVertex3f (135, 35, 0);
    glVertex3f (0, 35, 0);
    glEnd();



    //Boat 1


    if(s <= 140)
    {
        s += 0.05;
    }

    else
    {
        s = -120;
    }

    glutPostRedisplay();




    for(float i = 20; i <= 100; i+= 20)
    {
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex3f (i+s+1, 51.5, 0);
        glVertex3f (i+s-.5, 53, 0);
        glVertex3f (i+s+11, 53, 0);
        glVertex3f (i+s+9.5, 51.5, 0);
        glEnd();

        glColor3ub(201, 185, 160);
        glBegin(GL_POLYGON);
        glVertex3f (i+s+2, 53, 0);
        glVertex3f (i+s+9.8, 53, 0);
        glVertex3f (i+s+9.3, 55, 0);
        glVertex3f (i+s+3, 55, 0);
        glEnd();
    }





    //boat row 3

    for(float i = -6; i <= 120; i+= 40)
    {
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex3f (i+9, 47, 0);
        glVertex3f (i+18, 47, 0);
        glVertex3f (i+18, 49.5, 0);
        glVertex3f (i+9, 49.5, 0);
        glEnd();

        glColor3ub(157,149, 136);
        glBegin(GL_POLYGON);
        glVertex3f (i+9.5, 48.2, 0);
        glVertex3f (i+12, 48.2, 0);
        glVertex3f (i+12, 49.2, 0);
        glVertex3f (i+9.5, 49.2, 0);
        glEnd();

        glColor3ub(157,149, 136);
        glBegin(GL_POLYGON);
        glVertex3f (i+12.5, 48.2, 0);
        glVertex3f (i+15, 48.2, 0);
        glVertex3f (i+15, 49.2, 0);
        glVertex3f (i+12.5, 49.2, 0);
        glEnd();

        glColor3ub(157,149, 136);
        glBegin(GL_POLYGON);
        glVertex3f (i+15.5, 48.2, 0);
        glVertex3f (i+18, 48.2, 0);
        glVertex3f (i+18, 49.2, 0);
        glVertex3f (i+15.5, 49.2, 0);
        glEnd();






        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex3f (i+9, 47, 0);
        glVertex3f (i+9, 49.5, 0);
        glVertex3f (i+6, 49, 0);
        glEnd();

        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex3f (i+18, 47, 0);
        glVertex3f (i+18, 49.5, 0);
        glVertex3f (i+21, 49, 0);
        glEnd();


        glColor3ub(157,149, 136);
        glBegin(GL_POLYGON);
        glVertex3f (i+18.5, 48.4, 0);
        glVertex3f (i+18.5, 49, 0);
        glVertex3f (i+21, 48.7, 0);
        glEnd();

        glColor3ub(157,149, 136);
        glBegin(GL_POLYGON);
        glVertex3f (i+9, 48.4, 0);
        glVertex3f (i+9, 49, 0);
        glVertex3f (i+6.5, 48.7, 0);
        glEnd();
    }
}






//Fence or Partition

void pertition()
{

    glColor3ub(175,136, 95);
    glBegin(GL_POLYGON);
    glVertex3f (70, 0, 0);
    glVertex3f (74.5, 0, 0);
    glVertex3f (74.5, 26, 0);
    glVertex3f (70, 26, 0);
    glEnd();

    glColor3ub(175,136, 95);
    glBegin(GL_POLYGON);
    glVertex3f (70, 39, 0);
    glVertex3f (74.5, 39, 0);
    glVertex3f (74.5, 68, 0);
    glVertex3f (70, 68, 0);
    glEnd();




    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70.5, 0, 0);
    glVertex3f (70.6, 0, 0);
    glVertex3f (70.6, 68, 0);
    glVertex3f (70.5, 68, 0);
    glEnd();



    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (71.5, 0, 0);
    glVertex3f (71.6, 0, 0);
    glVertex3f (71.6, 68, 0);
    glVertex3f (71.5, 68, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (72.5, 0, 0);
    glVertex3f (72.6, 0, 0);
    glVertex3f (72.6, 68, 0);
    glVertex3f (72.5, 68, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (73.5, 0, 0);
    glVertex3f (73.6, 0, 0);
    glVertex3f (73.6, 68, 0);
    glVertex3f (73.5, 68, 0);
    glEnd();


    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 3, 0);
    glVertex3f (74.5, 3, 0);
    glVertex3f (74.5, 3.1, 0);
    glVertex3f (70, 3.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 6, 0);
    glVertex3f (74.5, 6, 0);
    glVertex3f (74.5, 6.1, 0);
    glVertex3f (70, 6.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 9, 0);
    glVertex3f (74.5, 9, 0);
    glVertex3f (74.5, 9.1, 0);
    glVertex3f (70, 9.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 12, 0);
    glVertex3f (74.5, 12, 0);
    glVertex3f (74.5, 12.1, 0);
    glVertex3f (70, 12.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 15, 0);
    glVertex3f (74.5, 15, 0);
    glVertex3f (74.5, 15.1, 0);
    glVertex3f (70, 15.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 18, 0);
    glVertex3f (74.5, 18, 0);
    glVertex3f (74.5, 18.1, 0);
    glVertex3f (70, 18.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 21, 0);
    glVertex3f (74.5,21, 0);
    glVertex3f (74.5, 21.1, 0);
    glVertex3f (70, 21.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 24, 0);
    glVertex3f (74.5, 24, 0);
    glVertex3f (74.5, 24.1, 0);
    glVertex3f (70, 24.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 27, 0);
    glVertex3f (74.5, 27, 0);
    glVertex3f (74.5, 27.1, 0);
    glVertex3f (70, 27.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 30, 0);
    glVertex3f (74.5, 30, 0);
    glVertex3f (74.5, 30.1, 0);
    glVertex3f (70, 30.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 33, 0);
    glVertex3f (74.5,33, 0);
    glVertex3f (74.5, 33.1, 0);
    glVertex3f (70, 33.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 36, 0);
    glVertex3f (74.5, 36, 0);
    glVertex3f (74.5, 36.1, 0);
    glVertex3f (70, 36.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 39, 0);
    glVertex3f (74.5, 39, 0);
    glVertex3f (74.5, 39.1, 0);
    glVertex3f (70, 39.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 42, 0);
    glVertex3f (74.5,42, 0);
    glVertex3f (74.5, 42.1, 0);
    glVertex3f (70, 42.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 45, 0);
    glVertex3f (74.5, 45, 0);
    glVertex3f (74.5, 45.1, 0);
    glVertex3f (70, 45.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 48, 0);
    glVertex3f (74.5, 48, 0);
    glVertex3f (74.5, 48.1, 0);
    glVertex3f (70, 48.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 51, 0);
    glVertex3f (74.5,51, 0);
    glVertex3f (74.5, 51.1, 0);
    glVertex3f (70, 51.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 54, 0);
    glVertex3f (74.5, 54, 0);
    glVertex3f (74.5, 54.1, 0);
    glVertex3f (70, 54.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 57, 0);
    glVertex3f (74.5, 57, 0);
    glVertex3f (74.5, 57.1, 0);
    glVertex3f (70, 57.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 60, 0);
    glVertex3f (74.5, 60, 0);
    glVertex3f (74.5, 60.1, 0);
    glVertex3f (70, 60.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 63, 0);
    glVertex3f (74.5, 63, 0);
    glVertex3f (74.5, 63.1, 0);
    glVertex3f (70, 63.1, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 66, 0);
    glVertex3f (74.5, 66, 0);
    glVertex3f (74.5, 66.1, 0);
    glVertex3f (70, 66.1, 0);
    glEnd();


    //middle

    glColor3ub(88,88, 76);
    glBegin(GL_POLYGON);
    glVertex3f (70, 26, 0);
    glVertex3f (74.5, 26, 0);
    glVertex3f (74.5, 39, 0);
    glVertex3f (70, 39, 0);
    glEnd();


    //down

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 25.5, 0);
    glVertex3f (74.5, 25.5, 0);
    glVertex3f (74.5, 26.5, 0);
    glVertex3f (70, 26.5, 0);
    glEnd();


    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 32, 0);
    glVertex3f (74.5, 32, 0);
    glVertex3f (74.5, 32.5, 0);
    glVertex3f (70, 32.5, 0);
    glEnd();


    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 28, 0);
    glVertex3f (74.5, 28, 0);
    glVertex3f (74.5, 28.5, 0);
    glVertex3f (70, 28.5, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 30, 0);
    glVertex3f (74.5, 30, 0);
    glVertex3f (74.5, 30.5, 0);
    glVertex3f (70, 30.5, 0);
    glEnd();


    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 26, 0);
    glVertex3f (70.5, 26, 0);
    glVertex3f (70.5, 32.5, 0);
    glVertex3f (70, 32.5, 0);
    glEnd();


    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (72, 26, 0);
    glVertex3f (72.5, 26, 0);
    glVertex3f (72.5, 32.5, 0);
    glVertex3f (72, 32.5, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (74, 26, 0);
    glVertex3f (74.5, 26, 0);
    glVertex3f (74.5, 32.5, 0);
    glVertex3f (74, 32.5, 0);
    glEnd();



    //up

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 40, 0);
    glVertex3f (74.5, 40, 0);
    glVertex3f (74.5, 38.7, 0);
    glVertex3f (70, 38.7, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 37, 0);
    glVertex3f (74.5, 37, 0);
    glVertex3f (74.5, 37.5, 0);
    glVertex3f (70, 37.5, 0);
    glEnd();



    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 35, 0);
    glVertex3f (74.5, 35, 0);
    glVertex3f (74.5, 35.5, 0);
    glVertex3f (70, 35.5, 0);
    glEnd();


    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 33, 0);
    glVertex3f (74.5, 33, 0);
    glVertex3f (74.5, 33.5, 0);
    glVertex3f (70, 33.5, 0);
    glEnd();


    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (70, 33, 0);
    glVertex3f (70.5, 33, 0);
    glVertex3f (70.5, 39, 0);
    glVertex3f (70, 39, 0);
    glEnd();


    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (72, 33, 0);
    glVertex3f (72.5, 33, 0);
    glVertex3f (72.5, 39, 0);
    glVertex3f (72, 39, 0);
    glEnd();

    glColor3ub(0,0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (74, 33, 0);
    glVertex3f (74.5, 33, 0);
    glVertex3f (74.5, 39, 0);
    glVertex3f (74, 39, 0);
    glEnd();

    //key





    glColor3ub (168, 168, 168);

    circle(1.3, 1, 72.3, 33);

    glColor3ub (88, 88, 76);

    circle(1, .7, 72.3, 33);

    glColor3ub(174,136, 74);
    glBegin(GL_POLYGON);
    glVertex3f (73, 31.8, 0);
    glVertex3f (75.5, 31.8, 0);
    glVertex3f (75.5, 33.9, 0);
    glVertex3f (73, 33.9, 0);
    glEnd();


    glColor3ub (0, 0, 0);

    circle(.5, .5, 74, 32.8);

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (73.8, 32.5, 0);
    glVertex3f (75.2, 32.5, 0);
    glVertex3f (75.2, 33, 0);
    glVertex3f (73.8, 33, 0);
    glEnd();



}


//Car Function
int speed = 1;

void car1()
{
    if(c >= -20)
        {
            c = c - 0.5;
        }

        else
        {
            c = 76;
        }


        glutPostRedisplay();





    //wheel

    //left

    glColor3ub(40, 40, 40);
    glBegin(GL_POLYGON);
    glVertex3f (104, c+1.5, 0);
    glVertex3f (107, c+1.5, 0);
    glVertex3f (107, c+4, 0);
    glVertex3f (104, c+4, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (105, c+1.5, 0);
    glVertex3f (105.1, c+1.5, 0);
    glVertex3f (105.1, c+4, 0);
    glVertex3f (105, c+4, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (106, c+1.5, 0);
    glVertex3f (106.1, c+1.5, 0);
    glVertex3f (106.1, c+4, 0);
    glVertex3f (106, c+4, 0);
    glEnd();

    //right


    glColor3ub(30, 30, 30);
    glBegin(GL_POLYGON);
    glVertex3f (112, c+1.5, 0);
    glVertex3f (115, c+1.5, 0);
    glVertex3f (115, c+4, 0);
    glVertex3f (112, c+4, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (113, c+1.5, 0);
    glVertex3f (113.1, c+1.5, 0);
    glVertex3f (113.1, c+4, 0);
    glVertex3f (113, c+4, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (114, c+1.5, 0);
    glVertex3f (114.1, c+1.5, 0);
    glVertex3f (114.1, c+4, 0);
    glVertex3f (114, c+4, 0);
    glEnd();


    //Front

    glColor3ub(232, 17, 35);
    glBegin(GL_POLYGON);
    glVertex3f (104.3, c+3, 0);
    glVertex3f (114.7, c+3, 0);
    glVertex3f (114.7, c+7, 0);
    glVertex3f (104.3, c+7, 0);
    glEnd();


    //glass

    glColor3ub(232, 17, 35);
    glBegin(GL_POLYGON);
    glVertex3f (104.3, c+7, 0);
    glVertex3f (114.7, c+7, 0);
    glVertex3f (113.5, c+9, 0);
    glVertex3f (105.5, c+9, 0);
    glEnd();



    //left glass

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (105.6, c+9, 0);
    glVertex3f (105.6, c+9.4, 0);
    glVertex3f (103, c+9.4, 0);
    glVertex3f (103, c+9, 0);
    glEnd();


    glColor3ub(232, 17, 35);
    glBegin(GL_POLYGON);
    glVertex3f (103, c+9.4, 0);
    glVertex3f (103, c+10.5, 0);
    glVertex3f (105, c+10.5, 0);
    glVertex3f (105, c+9.4, 0);
    glEnd();




    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (112.6, c+9, 0);
    glVertex3f (112.6, c+9.4, 0);
    glVertex3f (116, c+9.4, 0);
    glVertex3f (116, c+9, 0);
    glEnd();



    glColor3ub(232, 17, 35);
    glBegin(GL_POLYGON);
    glVertex3f (114, c+9.4, 0);
    glVertex3f (114, c+10.5, 0);
    glVertex3f (116, c+10.5, 0);
    glVertex3f (116, c+9.4, 0);
    glEnd();


    //upper glass

    glColor3ub(232, 17, 35);
    glBegin(GL_POLYGON);
    glVertex3f (105.5, c+9, 0);
    glVertex3f (113.5, c+9, 0);
    glVertex3f (112.5, c+12.3, 0);
    glVertex3f (106.5, c+12.3, 0);
    glEnd();

    glColor3ub(187, 219, 217);
    glBegin(GL_POLYGON);
    glVertex3f (105.9, c+9.3, 0);
    glVertex3f (113.1, c+9.3, 0);
    glVertex3f (112.2, c+11.7, 0);
    glVertex3f (106.8, c+11.7, 0);
    glEnd();


    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (106, c+9.3, 0);
    glVertex3f (106.5, c+9.3, 0);
    glVertex3f (109.5, c+10.5, 0);
    glVertex3f (109, c+10.5, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (108, c+9.3, 0);
    glVertex3f (108.5, c+9.3, 0);
    glVertex3f (111.5, c+10.5, 0);
    glVertex3f (111, c+10.5, 0);
    glEnd();


    //down

    glColor3ub(64, 64, 66);
    glBegin(GL_POLYGON);
    glVertex3f (104.3, c+3, 0);
    glVertex3f (114.7, c+3, 0);
    glVertex3f (114.7, c+4, 0);
    glVertex3f (104.3, c+4, 0);
    glEnd();


    //remove

    glColor3ub(88, 88, 86);
    glBegin(GL_POLYGON);
    glVertex3f (107.7, c+3, 0);
    glVertex3f (111, c+3, 0);
    glVertex3f (111, c+3.5, 0);
    glVertex3f (107.7, c+3.5, 0);
    glEnd();

    //black

    glColor3ub(4, 4, 1);
    glBegin(GL_POLYGON);
    glVertex3f (104.3, c+3.5, 0);
    glVertex3f (107, c+3.5, 0);
    glVertex3f (107, c+3.7, 0);
    glVertex3f (104.3, c+3.7, 0);
    glEnd();



    glColor3ub(4, 4, 1);
    glBegin(GL_POLYGON);
    glVertex3f (114.7, c+3.5, 0);
    glVertex3f (112.5, c+3.5, 0);
    glVertex3f (112.5, c+3.7, 0);
    glVertex3f (114.7, c+3.7, 0);
    glEnd();


    //left

    glColor3ub(64, 64, 66);
    glBegin(GL_POLYGON);
    glVertex3f (104.3, c+3.7, 0);
    glVertex3f (107, c+3.7, 0);
    glVertex3f (107, c+4.5, 0);
    glVertex3f (104.3, c+4.5, 0);
    glEnd();


    glColor3ub(64, 64, 66);
    glBegin(GL_POLYGON);
    glVertex3f (106.7, c+4.5, 0);
    glVertex3f (107, c+4.5, 0);
    glVertex3f (108, c+5.5, 0);
    glVertex3f (107.7, c+5.5, 0);
    glEnd();

    glColor3ub(64, 64, 66);
    glBegin(GL_POLYGON);
    glVertex3f (114.7, c+3.7, 0);
    glVertex3f (112.5, c+3.7, 0);
    glVertex3f (112.5, c+4.5, 0);
    glVertex3f (114.7, c+4.5, 0);
    glEnd();

    glColor3ub(64, 64, 66);
    glBegin(GL_POLYGON);
    glVertex3f (112.7, c+4.5, 0);
    glVertex3f (113, c+4.5, 0);
    glVertex3f (112, c+5.5, 0);
    glVertex3f (111.7, c+5.5, 0);
    glEnd();



    //light left down

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (104.3, c+6, 0);
    glVertex3f (106.3, c+6, 0);
    glVertex3f (106.8, c+5, 0);
    glVertex3f (104.9, c+5, 0);
    glEnd();

    glColor3ub (255, 255, 255);

    circle(.3, .3, 105.5, c+5.5);


    //light right down

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (112.3, c+6, 0);
    glVertex3f (114, c+6, 0);
    glVertex3f (114.5, c+5, 0);
    glVertex3f (112.9, c+5, 0);
    glEnd();

    glColor3ub (255, 255, 255);

    circle(.3, .3, 113.5, c+5.5);

    //light up left

    glColor3ub (255, 255, 255);

    circle(.7, .3, 105.3, c+7.5);

    //light up down

    glColor3ub (255, 255, 255);

    circle(.7, .3, 113.6, c+7.5);


    //line add



    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (107.7, c+5.8, 0);
    glVertex3f (112, c+5.8, 0);
    glVertex3f (112, c+4.5, 0);
    glVertex3f (107.7, c+4.5, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (107.7, c+4.8, 0);
    glVertex3f (112, c+4.8, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (107.7, c+5, 0);
    glVertex3f (112, c+5, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (107.7, c+5.2, 0);
    glVertex3f (112, c+5.2, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (107.7, c+5.4, 0);
    glVertex3f (112, c+5.4, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (108, c+5.8, 0);
    glVertex3f (108, c+4.5, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (108.5, c+5.8, 0);
    glVertex3f (108.5, c+4.5, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (109, c+5.8, 0);
    glVertex3f (109, c+4.5, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (109.5, c+5.8, 0);
    glVertex3f (109.5, c+4.5, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (110, c+5.8, 0);
    glVertex3f (110, c+4.5, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (110.5, c+5.8, 0);
    glVertex3f (110.5, c+4.5, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (111, c+5.8, 0);
    glVertex3f (111, c+4.5, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex3f (111.5, c+5.8, 0);
    glVertex3f (111.5, c+4.5, 0);
    glEnd();






    //line add

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (106, c+6.5, 0);
    glVertex3f (113, c+6.5, 0);
    glVertex3f (112, c+8, 0);
    glVertex3f (107, c+8, 0);
    glEnd();



    //Name

    char string[]="BMW";
    void *font=GLUT_BITMAP_TIMES_ROMAN_10;
    int k;
    glColor3ub(255,255,255);
    glRasterPos2f(108,c+8.1);
    for(k=0;k<strlen(string);k++)
            glutBitmapCharacter(font,string[k]);



}

//Car2 Function

float r = 0;

void car2()
{



    if(speed == 1)
    {
        if(r <= 120)
        {
            r = r + 0.2;
        }

        else
        {
            r = -20;
        }


        glutPostRedisplay();
    }

    else if(speed == 2)
        {
            if(r <= 120)
            {
                r = r + 0.8;
            }

            else
            {
                r = -20;
            }


            glutPostRedisplay();
        }


    else if(speed == 3)
    {
        //
    }



    //wheel

    //left

    glColor3ub(40, 40, 40);
    glBegin(GL_POLYGON);
    glVertex3f (120, r+1.5, 0);
    glVertex3f (123, r+1.5, 0);
    glVertex3f (123, r+4, 0);
    glVertex3f (120, r+4, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (121, r+1.5, 0);
    glVertex3f (121.1, r+1.5, 0);
    glVertex3f (121.1, r+4, 0);
    glVertex3f (121, r+4, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (122, r+1.5, 0);
    glVertex3f (122.1, r+1.5, 0);
    glVertex3f (122.1, r+4, 0);
    glVertex3f (122, r+4, 0);
    glEnd();

    //right


    glColor3ub(30, 30, 30);
    glBegin(GL_POLYGON);
    glVertex3f (126, r+1.5, 0);
    glVertex3f (129, r+1.5, 0);
    glVertex3f (129, r+4, 0);
    glVertex3f (126, r+4, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (127, r+1.5, 0);
    glVertex3f (127.1, r+1.5, 0);
    glVertex3f (127.1, r+4, 0);
    glVertex3f (127, r+4, 0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (128, r+1.5, 0);
    glVertex3f (128.1, r+1.5, 0);
    glVertex3f (128.1, r+4, 0);
    glVertex3f (128, r+4, 0);
    glEnd();

    //down

    glColor3ub(216, 216, 216);
    glBegin(GL_POLYGON);
    glVertex3f (119.3, r+3, 0);
    glVertex3f (129.7, r+3, 0);
    glVertex3f (129.7, r+5, 0);
    glVertex3f (119.3, r+5, 0);
    glEnd();


    //left tube

    glColor3ub (0, 0, 0);

    circle(1, 1, 121.3, r+3.5);

    glColor3ub (255, 255, 255);

    circle(.8, .8, 121.3, r+3.5);

    glColor3ub (0, 0, 0);

    circle(.6, .6, 121.3, r+3.5);

    //right tube

    glColor3ub (0, 0, 0);

    circle(1, 1, 127.7, r+3.5);

    glColor3ub (255, 255, 255);

    circle(.8, .8, 127.7, r+3.5);

    glColor3ub (0, 0, 0);

    circle(.6, .6, 127.7, r+3.5);



    //remove

    glColor3ub(53, 48, 54);
    glBegin(GL_POLYGON);
    glVertex3f (123, r+3, 0);
    glVertex3f (126, r+3, 0);
    glVertex3f (126, r+4.2, 0);
    glVertex3f (123, r+4.2, 0);
    glEnd();

    //middle

    glColor3ub(207, 65, 64);
    glBegin(GL_POLYGON);
    glVertex3f (119.3, r+5, 0);
    glVertex3f (129.7, r+5, 0);
    glVertex3f (129.7, r+8.5, 0);
    glVertex3f (119.3, r+8.5, 0);
    glEnd();

    //middle up

    glColor3ub(207, 65, 64);
    glBegin(GL_POLYGON);
    glVertex3f (119.3, r+8.5, 0);
    glVertex3f (129.7, r+8.5, 0);
    glVertex3f (128.5, r+10, 0);
    glVertex3f (120.5, r+10, 0);
    glEnd();



    //upper

    glColor3ub(207, 65, 64);
    glBegin(GL_POLYGON);
    glVertex3f (120.5, r+10, 0);
    glVertex3f (128.5, r+10, 0);
    glVertex3f (127.5, r+15, 0);
    glVertex3f (121.5, r+15, 0);
    glEnd();

    //remove
    glColor3ub(187, 219, 217);
    glBegin(GL_POLYGON);
    glVertex3f (120.8, r+10, 0);
    glVertex3f (128.2, r+10, 0);
    glVertex3f (127, r+15, 0);
    glVertex3f (122, r+15, 0);
    glEnd();

    //upper line

    glColor3ub(207, 65, 64);
    glBegin(GL_POLYGON);
    glVertex3f (121, r+14.5, 0);
    glVertex3f (128, r+14.5, 0);
    glVertex3f (127.6, r+15, 0);
    glVertex3f (121.6, r+15, 0);
    glEnd();

    //left glass

    glColor3ub(207, 65, 64);
    glBegin(GL_POLYGON);
    glVertex3f (119.5, r+11, 0);
    glVertex3f (120.7, r+11, 0);
    glVertex3f (120.7, r+10, 0);
    glVertex3f (119.5, r+10, 0);
    glEnd();

    glColor3ub(207, 65, 64);
    glBegin(GL_POLYGON);
    glVertex3f (118.2, r+10, 0);
    glVertex3f (120, r+10, 0);
    glVertex3f (120, r+12.7, 0);
    glVertex3f (118.2, r+12.7, 0);
    glEnd();

    glColor3ub(187, 219, 217);
    glBegin(GL_POLYGON);
    glVertex3f (118.5, r+10.5, 0);
    glVertex3f (119.6, r+10.5, 0);
    glVertex3f (119.6, r+12.4, 0);
    glVertex3f (118.5, r+12.4, 0);
    glEnd();


    //right glass

    glColor3ub(207, 65, 64);
    glBegin(GL_POLYGON);
    glVertex3f (128, r+11, 0);
    glVertex3f (129.2, r+11, 0);
    glVertex3f (129.2, r+10, 0);
    glVertex3f (128, r+10, 0);
    glEnd();

    glColor3ub(207, 65, 64);
    glBegin(GL_POLYGON);
    glVertex3f (128.8, r+10, 0);
    glVertex3f (130.3, r+10, 0);
    glVertex3f (130.3, r+12.7, 0);
    glVertex3f (128.8, r+12.7, 0);
    glEnd();

    glColor3ub(187, 219, 217);
    glBegin(GL_POLYGON);
    glVertex3f (129, r+10.5, 0);
    glVertex3f (130, r+10.5, 0);
    glVertex3f (130, r+12.4, 0);
    glVertex3f (129, r+12.4, 0);
    glEnd();


    //style

    glColor3ub(38, 38, 38);
    glBegin(GL_POLYGON);
    glVertex3f (122, r+9, 0);
    glVertex3f (122.5, r+9, 0);
    glVertex3f (122.5, r+10.8, 0);
    glVertex3f (122, r+10.8, 0);
    glEnd();

    glColor3ub(38, 38, 38);
    glBegin(GL_POLYGON);
    glVertex3f (126, r+9, 0);
    glVertex3f (126.5, r+9, 0);
    glVertex3f (126.5, r+10.8, 0);
    glVertex3f (126, r+10.8, 0);
    glEnd();


    glColor3ub(38, 38, 38);
    glBegin(GL_POLYGON);
    glVertex3f (122, r+10.8, 0);
    glVertex3f (126.5, r+10.8, 0);
    glVertex3f (126.5, r+11, 0);
    glVertex3f (122, r+11, 0);
    glEnd();

    //light

    glColor3ub(38, 38, 38);
    glBegin(GL_POLYGON);
    glVertex3f (120, r+6.5, 0);
    glVertex3f (128.5, r+6.5, 0);
    glVertex3f (128.5, r+8.5, 0);
    glVertex3f (120, r+8.5, 0);
    glEnd();

    //left

    glColor3ub(246, 204, 68);
    glBegin(GL_POLYGON);
    glVertex3f (120.5, r+6.8, 0);
    glVertex3f (121.5, r+6.8, 0);
    glVertex3f (121.5, r+7.3, 0);
    glVertex3f (120.5, r+7.3, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (121.8, r+6.8, 0);
    glVertex3f (122.8, r+6.8, 0);
    glVertex3f (122.8, r+7.3, 0);
    glVertex3f (121.8, r+7.3, 0);
    glEnd();

    glColor3ub(250, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (120.5, r+7.6, 0);
    glVertex3f (122.8, r+7.6, 0);
    glVertex3f (122.8, r+8.3, 0);
    glVertex3f (120.5, r+8.3, 0);
    glEnd();


    //right

    glColor3ub(246, 204, 68);
    glBegin(GL_POLYGON);
    glVertex3f (125.8, r+6.8, 0);
    glVertex3f (126.8, r+6.8, 0);
    glVertex3f (126.8, r+7.3, 0);
    glVertex3f (125.8, r+7.3, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (127, r+6.8, 0);
    glVertex3f (128, r+6.8, 0);
    glVertex3f (128, r+7.3, 0);
    glVertex3f (127, r+7.3, 0);
    glEnd();

    glColor3ub(250, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (125.8, r+7.6, 0);
    glVertex3f (128, r+7.6, 0);
    glVertex3f (128, r+8.3, 0);
    glVertex3f (125.8, r+8.3, 0);
    glEnd();


    //red

    glColor3ub(207, 65, 64);
    glBegin(GL_POLYGON);
    glVertex3f (123, r+8.3, 0);
    glVertex3f (125.5, r+8.3, 0);
    glVertex3f (125.5, r+7.3, 0);
    glVertex3f (123, r+7.3, 0);
    glEnd();


    //No plate

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (121.5, r+5.2, 0);
    glVertex3f (127.5, r+5.2, 0);
    glVertex3f (127.5, r+6.3, 0);
    glVertex3f (121.5, r+6.3, 0);
    glEnd();

     //No

    char string[]="  1617  KZP";
    void *font=GLUT_BITMAP_TIMES_ROMAN_10;
    int k;
    glColor3ub(0,0,0);
    glRasterPos2f(122,r+5.3);
    for(k=0;k<strlen(string);k++)
            glutBitmapCharacter(font,string[k]);


}

void second_road()
{

    //main road

    glColor3ub(142, 143, 145);
    glBegin(GL_POLYGON);
    glVertex3f (0, 0, 0);
    glVertex3f (135, 0, 0);
    glVertex3f (135, 25, 0);
    glVertex3f (0, 25, 0);
    glEnd();

    //middle


    for(int ti = 0; ti <= 135; ti+= 5)
    {
        glColor3ub(254, 185, 1);
        glBegin(GL_POLYGON);
        glVertex3f (ti+0.5, 12.5, 0);
        glVertex3f (ti+4, 12.5, 0);
        glVertex3f (ti+4, 13.5, 0);
        glVertex3f (ti+0.5, 13.5, 0);
        glEnd();
    }

    //upper


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (0, 25, 0);
    glVertex3f (135, 25, 0);
    glVertex3f (135, 26, 0);
    glVertex3f (0, 26, 0);
    glEnd();

    //lower


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (0, 0.5, 0);
    glVertex3f (135, 0.5, 0);
    glVertex3f (135, 1.5, 0);
    glVertex3f (0, 1.5, 0);
    glEnd();

}

float pl = 0;

float p2 = 0;

void plane()
{
    //plane 1

    if(pl <= 140)
    {
        pl += 0.05;
    }

    else
    {
        pl = -100;
    }

    glutPostRedisplay();



    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (pl+50, 60, 0);
    glVertex3f (pl+58, 60, 0);
    glVertex3f (pl+58, 63, 0);
    glVertex3f (pl+50, 63, 0);
    glEnd();

    //fan

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (pl+45, 61, 0);
    glVertex3f (pl+50, 61, 0);
    glVertex3f (pl+50, 62, 0);
    glVertex3f (pl+45, 62, 0);
    glEnd();

    //back

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (pl+44, 61, 0);
    glVertex3f (pl+45.2, 61, 0);
    glVertex3f (pl+45.2, 63.5, 0);
    glVertex3f (pl+44, 63.5, 0);
    glEnd();

    //up

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (pl+53.5, 63, 0);
    glVertex3f (pl+54.5, 63, 0);
    glVertex3f (pl+54.5, 64.5, 0);
    glVertex3f (pl+53.5, 64.5, 0);
    glEnd();

    //flaying upper part

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (pl+48, 64.5, 0);
    glVertex3f (pl+60, 64.5, 0);
    glVertex3f (pl+60, 65, 0);
    glVertex3f (pl+48, 65, 0);
    glEnd();










    //plane 2



     if(p2 <= 140)
    {
        p2 += 0.05;
    }

    else
    {
        p2 = -100;
    }

    glutPostRedisplay();








    //circle part

    glColor3ub (255, 255, 255);

    circle(4, 4, p2+87, 63);



    glColor3ub (43, 119, 204);

    circle(3.5, 3.5, p2+87, 63);



    //remove

    glColor3ub(43, 119, 204);
    glBegin(GL_POLYGON);
    glVertex3f (p2+80, 63, 0);
    glVertex3f (p2+92, 63, 0);
    glVertex3f (p2+92, 59, 0);
    glVertex3f (p2+80, 59, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+90.5, 63, 0);
    glVertex3f (p2+91, 63, 0);
    glVertex3f (p2+91, 62, 0);
    glVertex3f (p2+90.5, 62, 0);
    glEnd();


    //under


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+80, 60, 0);
    glVertex3f (p2+92, 60, 0);
    glVertex3f (p2+92, 61, 0);
    glVertex3f (p2+80, 61, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+92, 60, 0);
    glVertex3f (p2+92, 61, 0);
    glVertex3f (p2+93, 61.5, 0);
    glEnd();

    //black

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (p2+81, 60.4, 0);
    glVertex3f (p2+92, 60.4, 0);
    glVertex3f (p2+92, 60.5, 0);
    glVertex3f (p2+81, 60.5, 0);
    glEnd();


    // back

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+75, 62, 0);
    glVertex3f (p2+93, 62, 0);
    glVertex3f (p2+93, 62.3, 0);
    glVertex3f (p2+75, 62.3, 0);
    glEnd();

    //back up

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+75, 63, 0);
    glVertex3f (p2+83, 63, 0);
    glVertex3f (p2+83, 63.3, 0);
    glVertex3f (p2+75, 63.3, 0);
    glEnd();

    //back last

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+73, 64, 0);
    glVertex3f (p2+73.3, 64, 0);
    glVertex3f (p2+75, 62.3, 0);
    glVertex3f (p2+75, 62, 0);
    glEnd();



    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+73, 64, 0);
    glVertex3f (p2+73.3, 64, 0);
    glVertex3f (p2+75, 63.3, 0);
    glVertex3f (p2+75, 63, 0);
    glEnd();

    //four part

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+86, 62.3, 0);
    glVertex3f (p2+88, 62.3, 0);
    glVertex3f (p2+88, 65, 0);
    glVertex3f (p2+86, 65, 0);
    glEnd();

    //remove

    glColor3ub(43, 119, 204);
    glBegin(GL_POLYGON);
    glVertex3f (p2+86.3, 62.6, 0);
    glVertex3f (p2+87.7, 62.6, 0);
    glVertex3f (p2+87.7, 64.7, 0);
    glVertex3f (p2+86.3, 64.7, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+86.9, 62.3, 0);
    glVertex3f (p2+87.1, 62.3, 0);
    glVertex3f (p2+87.1, 67.7, 0);
    glVertex3f (p2+86.9, 67.7, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+78, 67.5, 0);
    glVertex3f (p2+96, 67.5, 0);
    glVertex3f (p2+96, 67.7, 0);
    glVertex3f (p2+78, 67.7, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+84.5, 65.7, 0);
    glVertex3f (p2+89.5, 65.7, 0);
    glVertex3f (p2+89.5, 66, 0);
    glVertex3f (p2+84.5, 66, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+89, 66, 0);
    glVertex3f (p2+89.3, 66, 0);
    glVertex3f (p2+89.3, 64, 0);
    glVertex3f (p2+89, 64, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+89, 64, 0);
    glVertex3f (p2+90.5, 64, 0);
    glVertex3f (p2+90.5, 63.7, 0);
    glVertex3f (p2+89, 63.7, 0);
    glEnd();

    //chaka

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+84, 61, 0);
    glVertex3f (p2+84.6, 61, 0);
    glVertex3f (p2+84.6, 62, 0);
    glVertex3f (p2+84, 62, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+89, 61, 0);
    glVertex3f (p2+89.6, 61, 0);
    glVertex3f (p2+90, 62, 0);
    glVertex3f (p2+89.4, 62, 0);
    glEnd();

    //fan


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+83.9, 62.7, 0);
    glVertex3f (p2+84.1, 62.7, 0);
    glVertex3f (p2+87.1, 67.5, 0);
    glVertex3f (p2+86.9, 67.5, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+80.9, 65.7, 0);
    glVertex3f (p2+81.4, 65.7, 0);
    glVertex3f (p2+87.4, 67.5, 0);
    glVertex3f (p2+86.9, 67.5, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+94.9, 66, 0);
    glVertex3f (p2+95.4, 66, 0);
    glVertex3f (p2+87.4, 67.5, 0);
    glVertex3f (p2+86.9, 67.5, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (p2+90.9, 65.5, 0);
    glVertex3f (p2+91.1, 65.5, 0);
    glVertex3f (p2+87.4, 67.5, 0);
    glVertex3f (p2+86.9, 67.5, 0);
    glEnd();







}
/*
void motor()
{

    //Cycle



    //Back Wheel

    glColor3ub (255, 255, 255);

    circle(3, 3, 3.5, 17);

    glColor3ub (142, 143, 145);

    circle(2.8, 2.8, 3.5, 17);

    //Font Wheel

    glColor3ub (255, 255, 255);

    circle(3, 3, 16.3, 17);

    glColor3ub (142, 143, 145);

    circle(2.8, 2.8, 16.3, 17);

    //Middle Function

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (3.3, 17, 0);
    glVertex3f (12, 17, 0);
    glVertex3f (12, 17.2, 0);
    glVertex3f (3.3, 17.2, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (5, 21, 0);
    glVertex3f (13.9, 21, 0);
    glVertex3f (13.9, 21.2, 0);
    glVertex3f (5, 21.2, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (3.3, 17, 0);
    glVertex3f (3.5, 17, 0);
    glVertex3f (5.2, 21, 0);
    glVertex3f (5, 21, 0);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (11.8, 17, 0);
    glVertex3f (12, 17, 0);
    glVertex3f (14, 21, 0);
    glVertex3f (13.8, 21, 0);
    glEnd();

    //sit

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (5, 21, 0);
    glVertex3f (5.3, 21, 0);
    glVertex3f (5.3, 22, 0);
    glVertex3f (5, 22, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (4, 22, 0);
    glVertex3f (7, 22, 0);
    glVertex3f (7, 24, 0);
    glVertex3f (4, 24, 0);
    glEnd();

    //Handle

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (16, 17, 0);
    glVertex3f (16.3, 17, 0);
    glVertex3f (12.3, 24, 0);
    glVertex3f (12, 24, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (12.1, 23.7, 0);
    glVertex3f (12.1, 24, 0);
    glVertex3f (11, 24, 0);
    glVertex3f (11, 23.7, 0);
    glEnd();



}
*/


//bus function

//yellow

float z = 0;

void bus()
{

    if(z >= -130)
    {
        z -= 0.08;
    }

    else{

        z = 80;
    }

    glutPostRedisplay();



    glColor3ub(245, 175, 19);
    glBegin(GL_POLYGON);
    glVertex3f (z+113, 3, 0);
    glVertex3f (z+130, 3, 0);
    glVertex3f (z+130, 11, 0);
    glVertex3f (z+113, 11, 0);
    glEnd();

    glColor3ub(245, 175, 19);
    glBegin(GL_POLYGON);
    glVertex3f (z+110.5, 8, 0);
    glVertex3f (z+113, 8, 0);
    glVertex3f (z+113, 3, 0);
    glVertex3f (z+110.5, 3, 0);
    glEnd();

    glColor3ub(43, 60, 78);
    glBegin(GL_POLYGON);
    glVertex3f (z+113.5, 10, 0);
    glVertex3f (z+129, 10, 0);
    glVertex3f (z+129, 7, 0);
    glVertex3f (z+113.5, 7, 0);
    glEnd();


    glColor3ub(65, 97, 120);
    glBegin(GL_POLYGON);
    glVertex3f (z+110.5, 8, 0);
    glVertex3f (z+113, 11, 0);
    glVertex3f (z+113, 8, 0);
    glEnd();


    glColor3ub(87, 87, 89);
    glBegin(GL_POLYGON);
    glVertex3f (z+111.5, 7, 0);
    glVertex3f (z+113, 7, 0);
    glVertex3f (z+113, 3.5, 0);
    glVertex3f (z+111.5, 3.5, 0);
    glEnd();

    for(float i = 0; i <= 15; i+= 3.10)
    {
        glColor3ub(65, 97, 120);
        glBegin(GL_POLYGON);
        glVertex3f (i+z+114, 9.5, 0);
        glVertex3f (i+z+116.3, 9.5, 0);
        glVertex3f (i+z+116.3, 7.5, 0);
        glVertex3f (i+z+114, 7.5, 0);
        glEnd();
    }

    //wheel
    //right

    glColor3ub (58, 58, 60);

    circle(1.5, 1.5, z+126, 3);

    glColor3ub (180, 181, 183);

    circle(1, 1, z+126, 3);


    //wheel
    //left

    glColor3ub (58, 58, 60);

    circle(1.5, 1.5, z+116, 3);

    glColor3ub (180, 181, 183);

    circle(1, 1, z+116, 3);

    //light

    glColor3ub(157, 33, 38);
    glBegin(GL_POLYGON);
    glVertex3f (z+128, 4.2, 0);
    glVertex3f (z+129.5, 4.2, 0);
    glVertex3f (z+129.5, 5.2, 0);
    glVertex3f (z+128, 5.2, 0);
    glEnd();



    glColor3ub(157, 33, 38);
    glBegin(GL_POLYGON);
    glVertex3f (z+128, 5.7, 0);
    glVertex3f (z+129.5, 5.7, 0);
    glVertex3f (z+129.5, 6.7, 0);
    glVertex3f (z+128, 6.7, 0);
    glEnd();


    //box

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (z+119, 5.6, 0);
    glVertex3f (z+123, 5.6, 0);
    glVertex3f (z+123, 5.5, 0);
    glVertex3f (z+119, 5.5, 0);
    glEnd();

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (z+119, 5.6, 0);
    glVertex3f (z+119.1, 5.6, 0);
    glVertex3f (z+119.1, 3, 0);
    glVertex3f (z+119, 3, 0);
    glEnd();

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (z+123, 5.6, 0);
    glVertex3f (z+123.1, 5.6, 0);
    glVertex3f (z+123.1, 3, 0);
    glVertex3f (z+123, 3, 0);
    glEnd();

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (z+121, 5.6, 0);
    glVertex3f (z+121.1, 5.6, 0);
    glVertex3f (z+121.1, 3, 0);
    glVertex3f (z+121, 3, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (z+119.7, 4, 0);
    glVertex3f (z+120.2, 4, 0);
    glVertex3f (z+120.2, 4.5, 0);
    glVertex3f (z+119.7, 4.5, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (z+121.7, 4, 0);
    glVertex3f (z+122.2, 4, 0);
    glVertex3f (z+122.2, 4.5, 0);
    glVertex3f (z+121.7, 4.5, 0);
    glEnd();



}

//bus2 white

float b2 = -50;

void bus2()
{

    if(z >= -130)
    {
        b2 -= 0.08;
    }

    else{

        b2 = 80;
    }

    glutPostRedisplay();



    glColor3ub(242, 242, 242);
    glBegin(GL_POLYGON);
    glVertex3f (b2+113, 3, 0);
    glVertex3f (b2+130, 3, 0);
    glVertex3f (b2+130, 11, 0);
    glVertex3f (b2+113, 11, 0);
    glEnd();

    glColor3ub(242, 242, 242);
    glBegin(GL_POLYGON);
    glVertex3f (b2+110.5, 8, 0);
    glVertex3f (b2+113, 8, 0);
    glVertex3f (b2+113, 3, 0);
    glVertex3f (b2+110.5, 3, 0);
    glEnd();

    glColor3ub(84, 84, 86);
    glBegin(GL_POLYGON);
    glVertex3f (b2+113.5, 10, 0);
    glVertex3f (b2+129, 10, 0);
    glVertex3f (b2+129, 7, 0);
    glVertex3f (b2+113.5, 7, 0);
    glEnd();


    glColor3ub(23, 170, 178);
    glBegin(GL_POLYGON);
    glVertex3f (b2+110.5, 8, 0);
    glVertex3f (b2+113, 11, 0);
    glVertex3f (b2+113, 8, 0);
    glEnd();


    glColor3ub(87, 87, 89);
    glBegin(GL_POLYGON);
    glVertex3f (b2+111.5, 7, 0);
    glVertex3f (b2+113, 7, 0);
    glVertex3f (b2+113, 3.5, 0);
    glVertex3f (b2+111.5, 3.5, 0);
    glEnd();

    for(float i = 0; i <= 15; i+= 3.10)
    {
        glColor3ub(23, 170, 178);
        glBegin(GL_POLYGON);
        glVertex3f (i+b2+114, 9.5, 0);
        glVertex3f (i+b2+116.3, 9.5, 0);
        glVertex3f (i+b2+116.3, 7.5, 0);
        glVertex3f (i+b2+114, 7.5, 0);
        glEnd();
    }

    //wheel
    //right

    glColor3ub (58, 58, 60);

    circle(1.5, 1.5, b2+126, 3);

    glColor3ub (180, 181, 183);

    circle(1, 1, b2+126, 3);


    //wheel
    //left

    glColor3ub (58, 58, 60);

    circle(1.5, 1.5, b2+116, 3);

    glColor3ub (180, 181, 183);

    circle(1, 1, b2+116, 3);


    //light

    glColor3ub(254, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (b2+128, 4.2, 0);
    glVertex3f (b2+129.5, 4.2, 0);
    glVertex3f (b2+129.5, 5.2, 0);
    glVertex3f (b2+128, 5.2, 0);
    glEnd();



    glColor3ub(254, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (b2+128, 5.7, 0);
    glVertex3f (b2+129.5, 5.7, 0);
    glVertex3f (b2+129.5, 6.7, 0);
    glVertex3f (b2+128, 6.7, 0);
    glEnd();


    //box

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (b2+119, 5.6, 0);
    glVertex3f (b2+123, 5.6, 0);
    glVertex3f (b2+123, 5.5, 0);
    glVertex3f (b2+119, 5.5, 0);
    glEnd();

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (b2+119, 5.6, 0);
    glVertex3f (b2+119.1, 5.6, 0);
    glVertex3f (b2+119.1, 3, 0);
    glVertex3f (b2+119, 3, 0);
    glEnd();

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (b2+123, 5.6, 0);
    glVertex3f (b2+123.1, 5.6, 0);
    glVertex3f (b2+123.1, 3, 0);
    glVertex3f (b2+123, 3, 0);
    glEnd();

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (b2+121, 5.6, 0);
    glVertex3f (b2+121.1, 5.6, 0);
    glVertex3f (b2+121.1, 3, 0);
    glVertex3f (b2+121, 3, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (b2+119.7, 4, 0);
    glVertex3f (b2+120.2, 4, 0);
    glVertex3f (b2+120.2, 4.5, 0);
    glVertex3f (b2+119.7, 4.5, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (b2+121.7, 4, 0);
    glVertex3f (b2+122.2, 4, 0);
    glVertex3f (b2+122.2, 4.5, 0);
    glVertex3f (b2+121.7, 4.5, 0);
    glEnd();



}

//bus3 Red

float b3 = -100;

void bus3()
{

    if(b3 >= -130)
    {
        b3 -= 0.08;
    }

    else{

        b3 = 80;
    }

    glutPostRedisplay();



    glColor3ub(228, 39, 1);
    glBegin(GL_POLYGON);
    glVertex3f (b3+113, 3, 0);
    glVertex3f (b3+130, 3, 0);
    glVertex3f (b3+130, 11, 0);
    glVertex3f (b3+113, 11, 0);
    glEnd();




    glColor3ub(228, 39, 1);
    glBegin(GL_POLYGON);
    glVertex3f (b3+110.5, 8, 0);
    glVertex3f (b3+113, 8, 0);
    glVertex3f (b3+113, 3, 0);
    glVertex3f (b3+110.5, 3, 0);
    glEnd();

    glColor3ub(50, 67, 74);
    glBegin(GL_POLYGON);
    glVertex3f (b3+113.5, 10, 0);
    glVertex3f (b3+129, 10, 0);
    glVertex3f (b3+129, 7, 0);
    glVertex3f (b3+113.5, 7, 0);
    glEnd();


    glColor3ub(150, 210, 254);
    glBegin(GL_POLYGON);
    glVertex3f (b3+110.5, 8, 0);
    glVertex3f (b3+113, 11, 0);
    glVertex3f (b3+113, 8, 0);
    glEnd();


    glColor3ub(87, 87, 89);
    glBegin(GL_POLYGON);
    glVertex3f (b3+111.5, 7, 0);
    glVertex3f (b3+113, 7, 0);
    glVertex3f (b3+113, 3.5, 0);
    glVertex3f (b3+111.5, 3.5, 0);
    glEnd();

    for(float i = 0; i <= 15; i+= 3.10)
    {
        glColor3ub(150, 210, 254);
        glBegin(GL_POLYGON);
        glVertex3f (i+b3+114, 9.5, 0);
        glVertex3f (i+b3+116.3, 9.5, 0);
        glVertex3f (i+b3+116.3, 7.5, 0);
        glVertex3f (i+b3+114, 7.5, 0);
        glEnd();
    }

    //wheel
    //right

    glColor3ub (58, 58, 60);

    circle(1.5, 1.5, b3+126, 3);

    glColor3ub (180, 181, 183);

    circle(1, 1, b3+126, 3);


    //wheel
    //left

    glColor3ub (58, 58, 60);

    circle(1.5, 1.5, b3+116, 3);

    glColor3ub (180, 181, 183);

    circle(1, 1, b3+116, 3);

    //light

    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (b3+128, 4.2, 0);
    glVertex3f (b3+129.5, 4.2, 0);
    glVertex3f (b3+129.5, 5.2, 0);
    glVertex3f (b3+128, 5.2, 0);
    glEnd();



    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (b3+128, 5.7, 0);
    glVertex3f (b3+129.5, 5.7, 0);
    glVertex3f (b3+129.5, 6.7, 0);
    glVertex3f (b3+128, 6.7, 0);
    glEnd();


    //box

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (b3+119, 5.6, 0);
    glVertex3f (b3+123, 5.6, 0);
    glVertex3f (b3+123, 5.5, 0);
    glVertex3f (b3+119, 5.5, 0);
    glEnd();

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (b3+119, 5.6, 0);
    glVertex3f (b3+119.1, 5.6, 0);
    glVertex3f (b3+119.1, 3, 0);
    glVertex3f (b3+119, 3, 0);
    glEnd();

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (b3+123, 5.6, 0);
    glVertex3f (b3+123.1, 5.6, 0);
    glVertex3f (b3+123.1, 3, 0);
    glVertex3f (b3+123, 3, 0);
    glEnd();

    glColor3ub(50, 67, 68);
    glBegin(GL_POLYGON);
    glVertex3f (b3+121, 5.6, 0);
    glVertex3f (b3+121.1, 5.6, 0);
    glVertex3f (b3+121.1, 3, 0);
    glVertex3f (b3+121, 3, 0);
    glEnd();

    glColor3ub(251, 185, 68);
    glBegin(GL_POLYGON);
    glVertex3f (b3+119.7, 4, 0);
    glVertex3f (b3+120.2, 4, 0);
    glVertex3f (b3+120.2, 4.5, 0);
    glVertex3f (b3+119.7, 4.5, 0);
    glEnd();

    glColor3ub(251, 185, 68);
    glBegin(GL_POLYGON);
    glVertex3f (b3+121.7, 4, 0);
    glVertex3f (b3+122.2, 4, 0);
    glVertex3f (b3+122.2, 4.5, 0);
    glVertex3f (b3+121.7, 4.5, 0);
    glEnd();


}
/*
//car4
float c4 = 0;

void car4()
{

/*
    if(c4 >= -90)
    {
        c4 -= 0.05;
    }

    else{

        c4 = 100;
    }

    glutPostRedisplay();


    glColor3ub(251, 185, 68);
    glBegin(GL_POLYGON);
    glVertex3f (c4+88, 3, 0);
    glVertex3f (c4+100, 3, 0);
    glVertex3f (c4+100, 6.5, 0);
    glVertex3f (c4+88, 6.5, 0);
    glEnd();


    glColor3ub(251, 185, 68);
    glBegin(GL_POLYGON);
    glVertex3f (c4+89.5, 6.5, 0);
    glVertex3f (c4+98, 6.5, 0);
    glVertex3f (c4+97, 8.5, 0);
    glVertex3f (c4+91, 8.5, 0);
    glEnd();

    glColor3ub(0, 185, 68);
    glBegin(GL_POLYGON);
    glVertex3f (c4+91.5, 6.5, 0);
    glVertex3f (c4+93.5, 6.5, 0);
    glVertex3f (c4+93.5, 8, 0);
    glVertex3f (c4+91.5, 8, 0);
    glEnd();


    glColor3ub(0, 185, 68);
    glBegin(GL_POLYGON);
    glVertex3f (c4+94.5, 6.5, 0);
    glVertex3f (c4+96.5, 6.5, 0);
    glVertex3f (c4+96.5, 8, 0);
    glVertex3f (c4+94.5, 8, 0);
    glEnd();

    //light

    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex3f (c4+98.5, 4.5, 0);
    glVertex3f (c4+99.5, 4.5, 0);
    glVertex3f (c4+99.5, 5.5, 0);
    glVertex3f (c4+98.5, 5.5, 0);
    glEnd();





        //left
        glColor3ub (58, 58, 60);

        circle(1.5, 1.5, c4+91, 3);

        glColor3ub (180, 181, 183);

        circle(1, 1, c4+91, 3);


        //right

        glColor3ub (58, 58, 60);

        circle(1.5, 1.5, c4+97, 3);

        glColor3ub (180, 181, 183);

        circle(1, 1, c4+97, 3);
}
*/
//car

float c1 = -10;

void car()
{


        if(c1 <= 120)
        {
            c1 += 0.09;
        }

        else{

            c1 = -100;
        }

        glColor3ub(65, 97, 120);
        glBegin(GL_POLYGON);
        glVertex3f (c1+30, 15, 0);
        glVertex3f (c1+46, 15, 0);
        glVertex3f (c1+44, 20, 0);
        glColor3ub(65, 97, 0);
        glVertex3f (c1+30, 20, 0);
        glEnd();


        glColor3ub(65, 0, 120);
        glBegin(GL_POLYGON);
        glVertex3f (c1+32, 20, 0);
        glVertex3f (c1+42, 20, 0);
        glVertex3f (c1+40, 23, 0);
        glVertex3f (c1+34, 23, 0);
        glEnd();

        //1 window

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f (c1+34.5, 21, 0);
        glVertex3f (c1+36.5, 21, 0);
        glVertex3f (c1+36.5, 22, 0);
        glVertex3f (c1+34.5, 22, 0);
        glEnd();

        //2 window

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f (c1+37.5, 21, 0);
        glVertex3f (c1+39.5, 21, 0);
        glVertex3f (c1+39.5, 22, 0);
        glVertex3f (c1+37.5, 22, 0);
        glEnd();

        //left
        glColor3ub (58, 58, 60);

        circle(1.5, 1.5, c1+34, 15);

        glColor3ub (180, 181, 183);

        circle(1, 1, c1+34, 15);


        //right

        glColor3ub (58, 58, 60);

        circle(1.5, 1.5, c1+42, 15);

        glColor3ub (180, 181, 183);

        circle(1, 1, c1+42, 15);

}

//car 5


float c5 = 70;

void car5()
{


        if(c5 <= 120)
        {
            c5 += 0.09;
        }

        else{

            c5 = -100;
        }

        glColor3ub(65, 97, 120);
        glBegin(GL_POLYGON);
        glVertex3f (c5+30, 15, 0);
        glVertex3f (c5+46, 15, 0);
        glVertex3f (c5+44, 20, 0);
        glVertex3f (c5+30, 20, 0);
        glEnd();


        glColor3ub(65, 0, 120);
        glBegin(GL_POLYGON);
        glVertex3f (c5+32, 20, 0);
        glVertex3f (c5+42, 20, 0);
        glVertex3f (c5+40, 23, 0);
        glVertex3f (c5+34, 23, 0);
        glEnd();

        //1 window

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f (c5+34.5, 21, 0);
        glVertex3f (c5+36.5, 21, 0);
        glVertex3f (c5+36.5, 22, 0);
        glVertex3f (c5+34.5, 22, 0);
        glEnd();

        //2 window

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f (c5+37.5, 21, 0);
        glVertex3f (c5+39.5, 21, 0);
        glVertex3f (c5+39.5, 22, 0);
        glVertex3f (c5+37.5, 22, 0);
        glEnd();

        //left
        glColor3ub (58, 58, 60);

        circle(1.5, 1.5, c5+34, 15);

        glColor3ub (180, 181, 183);

        circle(1, 1, c5+34, 15);


        //right

        glColor3ub (58, 58, 60);

        circle(1.5, 1.5, c5+42, 15);

        glColor3ub (180, 181, 183);

        circle(1, 1, c5+42, 15);

}

//bus4

float b4 = 0;

void bus4()
{


        if(b4 <= 120)
        {
            b4 += 0.09;
        }

        else{

            b4 = -100;
        }

        glutPostRedisplay();



        glColor3ub(159, 229, 170);
        glBegin(GL_POLYGON);
        glVertex3f (b4+58, 15, 0);
        glVertex3f (b4+82, 15, 0);
        glVertex3f (b4+82, 23, 0);
        glVertex3f (b4+58, 23, 0);
        glEnd();

        glColor3ub(25, 224, 74);
        glBegin(GL_POLYGON);
        glVertex3f (b4+58.2, 15.2, 0);
        glVertex3f (b4+81.8, 15.2, 0);
        glVertex3f (b4+81.8, 22.8, 0);
        glVertex3f (b4+58.2, 22.8, 0);
        glEnd();

        //window

        glColor3ub(1, 2, 6);
        glBegin(GL_POLYGON);
        glVertex3f (b4+59.5, 18, 0);
        glVertex3f (b4+78, 18, 0);
        glVertex3f (b4+78, 21.5, 0);
        glVertex3f (b4+59.5, 21.5, 0);
        glEnd();



        glColor3ub(63, 75, 75);
        glBegin(GL_POLYGON);
        glVertex3f (b4+60, 18.2, 0);
        glVertex3f (b4+63, 18.2, 0);
        glVertex3f (b4+63, 21.3, 0);
        glVertex3f (b4+60, 21.3, 0);
        glEnd();

        glColor3ub(63, 75, 75);
        glBegin(GL_POLYGON);
        glVertex3f (b4+63.5, 18.2, 0);
        glVertex3f (b4+66.5, 18.2, 0);
        glVertex3f (b4+66.5, 21.3, 0);
        glVertex3f (b4+63.5, 21.3, 0);
        glEnd();


        glColor3ub(63, 75, 75);
        glBegin(GL_POLYGON);
        glVertex3f (b4+74.5, 18.2, 0);
        glVertex3f (b4+77.5, 18.2, 0);
        glVertex3f (b4+77.5, 21.3, 0);
        glVertex3f (b4+74.5, 21.3, 0);
        glEnd();

        glColor3ub(63, 75, 75);
        glBegin(GL_POLYGON);
        glVertex3f (b4+71, 18.2, 0);
        glVertex3f (b4+74, 18.2, 0);
        glVertex3f (b4+74, 21.3, 0);
        glVertex3f (b4+71, 21.3, 0);
        glEnd();

        glColor3ub(1, 2, 6);
        glBegin(GL_POLYGON);
        glVertex3f (b4+59.5, 19, 0);
        glVertex3f (b4+78, 19, 0);
        glVertex3f (b4+78, 19.2, 0);
        glVertex3f (b4+59.5, 19.2, 0);
        glEnd();


        for(float i = 0; i <= 3; i+= 1.3)
        {
            glColor3ub(25, 255, 60);
            glBegin(GL_POLYGON);
            glVertex3f (i+b4+67, 15.2, 0);
            glVertex3f (i+b4+68, 15.2, 0);
            glVertex3f (i+b4+68, 20, 0);
            glVertex3f (i+b4+67, 20, 0);
            glEnd();

            glColor3ub(63, 75, 75);
            glBegin(GL_POLYGON);
            glVertex3f (i+b4+67.2, 17, 0);
            glVertex3f (i+b4+67.8, 17, 0);
            glVertex3f (i+b4+67.8, 19.7, 0);
            glVertex3f (i+b4+67.2, 19.7, 0);
            glEnd();
        }



        //wheel

        //left
        glColor3ub (76, 73, 77);

        circle(1.5, 1.5, b4+76, 15);

        glColor3ub (150, 130, 150);

        circle(1, 1, b4+76, 15);

        glColor3ub (76, 73, 77);

        circle(.5, .5, b4+76, 15);


        //right

        glColor3ub (76, 73, 77);

        circle(1.5, 1.5, b4+64, 15);

        glColor3ub (150, 130, 150);

        circle(1, 1, b4+64, 15);

        glColor3ub (76, 73, 77);

        circle(.5, .5, b4+64, 15);

        for(float i = 0; i <= 1.5; i+= 1.1)
        {
            glColor3ub(25, 255, 60);
            glBegin(GL_POLYGON);
            glVertex3f (i+b4+78.5, 15.2, 0);
            glVertex3f (i+b4+80.5, 15.2, 0);
            glVertex3f (i+b4+80.5, 20, 0);
            glVertex3f (i+b4+78.5, 20, 0);
            glEnd();

            glColor3ub(63, 75, 75);
            glBegin(GL_POLYGON);
            glVertex3f (i+b4+78.7, 17, 0);
            glVertex3f (i+b4+80.3, 17, 0);
            glVertex3f (i+b4+80.3, 19.7, 0);
            glVertex3f (i+b4+78.7, 19.7, 0);
            glEnd();
        }


        glColor3ub(25, 224, 74);
        glBegin(GL_POLYGON);
        glVertex3f (b4+59, 23, 0);
        glVertex3f (b4+66, 23, 0);
        glVertex3f (b4+66, 24.5, 0);
        glVertex3f (b4+59, 24.5, 0);
        glEnd();

        glColor3ub(25, 224, 74);
        glBegin(GL_POLYGON);
        glVertex3f (b4+66, 23, 0);
        glVertex3f (b4+66, 24.5, 0);
        glVertex3f (b4+71, 23, 0);
        glEnd();

            glColor3ub(63, 75, 75);
            glBegin(GL_POLYGON);
            glVertex3f (b4+81.8, 18, 0);
            glVertex3f (b4+82.2, 18, 0);
            glVertex3f (b4+82.2, 22, 0);
            glVertex3f (b4+81.8, 22, 0);
            glEnd();

        glColor3ub(25, 224, 74);
        glBegin(GL_POLYGON);
        glVertex3f (b4+82, 22, 0);
        glVertex3f (b4+84, 22, 0);
        glVertex3f (b4+84, 22.5, 0);
        glVertex3f (b4+82, 22.5, 0);
        glEnd();

        glColor3ub(25, 224, 74);
        glBegin(GL_POLYGON);
        glVertex3f (b4+84, 22.5, 0);
        glVertex3f (b4+84.5, 22.5, 0);
        glVertex3f (b4+84.5, 20, 0);
        glVertex3f (b4+84, 20, 0);
        glEnd();

        char string[]="Save the world";
        void *font=GLUT_BITMAP_TIMES_ROMAN_10;
        int k;
        glColor3ub(255,255,255);
        glRasterPos2f(b4+60,23.5);
        for(k=0;k<strlen(string);k++)
                glutBitmapCharacter(font,string[k]);


        char string1[]="ECO";
        void *font1=GLUT_BITMAP_HELVETICA_12;
        glColor3ub(255,255,255);
        glRasterPos2f(b4+72,16.8);
        for(k=0;k<strlen(string1);k++)
                glutBitmapCharacter(font1,string1[k]);

        char string2[]="BUS";
        glColor3ub(255,255,255);
        glRasterPos2f(b4+71,15.7);
        for(k=0;k<strlen(string2);k++)
                glutBitmapCharacter(font1,string2[k]);
}

//tree

void tree()
{
    //tree1

    for(float i = 0; i <= 120; i += 30)
    {
        glColor3ub(25, 0, 74);
        glBegin(GL_POLYGON);
        glVertex3f (i+7, 26, 0);
        glVertex3f (i+9, 26, 0);
        glVertex3f (i+9, 35, 0);
        glVertex3f (i+7, 35, 0);
        glEnd();

        glColor3ub(25, 0, 74);
        glBegin(GL_POLYGON);
        glVertex3f (i+3, 35, 0);
        glVertex3f (i+13, 35, 0);
        glVertex3f (i+8, 40, 0);
        glEnd();

        glColor3ub(25, 0, 74);
        glBegin(GL_POLYGON);
        glVertex3f (i+3, 37, 0);
        glVertex3f (i+13, 37, 0);
        glVertex3f (i+8, 42, 0);
        glEnd();

        glColor3ub(25, 0, 74);
        glBegin(GL_POLYGON);
        glVertex3f (i+3, 39, 0);
        glVertex3f (i+13, 39, 0);
        glVertex3f (i+8, 44, 0);
        glEnd();

        glColor3ub(25, 0, 74);
        glBegin(GL_POLYGON);
        glVertex3f (i+3, 41, 0);
        glVertex3f (i+13, 41, 0);
        glVertex3f (i+8, 46, 0);
        glEnd();
    }

    //tree2

    for(float i = -2; i <= 115; i += 15)
    {

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f (i+12.5, 26, 0);
        glVertex3f (i+21.5, 26, 0);
        glVertex3f (i+21.5, 28, 0);
        glVertex3f (i+12.5, 28, 0);
        glEnd();

        //white
        glColor3ub (255, 255, 255);

        circle(2.5, 2.5, i+15, 28.6);

        glColor3ub (255, 255, 255);

        circle(2.5, 2.5, i+19, 28.6);

        glColor3ub (255, 255, 255);

        circle(2.5, 2.5, i+17, 32);


        glColor3ub (0, 0, 255);

        circle(.2, .2, i+17, 32);

    }


        char string1[]="HE";
        void *font1=GLUT_BITMAP_TIMES_ROMAN_24;
        int k;
        glColor3ub(0,255,0);
        glRasterPos2f(13,28);
        for(k=0;k<strlen(string1);k++)
                glutBitmapCharacter(font1,string1[k]);

        char string2[]="WHO";
        glRasterPos2f(27,28);
        for(k=0;k<strlen(string2);k++)
                glutBitmapCharacter(font1,string2[k]);

        char string3[]="PLANTS";
        glRasterPos2f(40.5,28);
        for(k=0;k<strlen(string3);k++)
                glutBitmapCharacter(font1,string3[k]);

        char string4[]="A";
        glRasterPos2f(59,28);
        for(k=0;k<strlen(string4);k++)
                glutBitmapCharacter(font1,string4[k]);


        char string5[]="TREE";
        glRasterPos2f(72,28);
        for(k=0;k<strlen(string5);k++)
                glutBitmapCharacter(font1,string5[k]);

        char string6[]="PLANTS";
        glRasterPos2f(85.5,28);
        for(k=0;k<strlen(string6);k++)
                glutBitmapCharacter(font1,string6[k]);

        char string7[]="A";
        glRasterPos2f(104,28);
        for(k=0;k<strlen(string7);k++)
                glutBitmapCharacter(font1,string7[k]);

        char string8[]="HOPE";
        glRasterPos2f(117,28);
        for(k=0;k<strlen(string8);k++)
                glutBitmapCharacter(font1,string8[k]);
}


//Keyboard Function

void keyboardFunc( unsigned char key,int x,int y)
{
switch( key )
    {


    case 's':
    case 'S':
		mode=1;
		break;

    case 'e':
    case 'E':
		mode=2;
		break;

    case 'p':
    case 'P':
        speed = 3;
        break;

    case 'h':
    case 'H':
        speed = 2;
        break;

    case 'm':
    case 'M':
        speed = 1;
        break;


    };

}

// in it Function


void init (void)
{
    //Background Color

    glClearColor (255, 0, 0, 0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glPointSize(4.0);
    glPointSize(4.0);

    gluOrtho2D(0, 135, 0, 68);
}



void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);


    if(mode == 1)
    {
        //Call The Field

        field();

        //Call pitch Function

        pitch();





        //Call Ban Flag



        ban_flag();


        //Call India Flag

        ind_flag();

        //Call Tv Logo

        tv_logo();

        //Call The Player Name

        text_player_name();


        //Call Score Card

        score_card();

        //Call Advertise

        advertise();

        //Call Team Logo Ban

        team_logo_ban();


        // Call India Team Logo

        team_logo_ind();


        //Call Players

        players();

        //Hotel function

        hotel();




        //Call Road



        road();



       //Call Middle Road Cross


        road_cross_middle();


        // Call crossing road for people


        road_cross_people();







        //Call Traffic Light

        traffic_light();




        //Call Tree


        //Call House


        house();


        //Call Bi-cycle

        //bi_cycle();





        //Call Small House

        //

        //Call Left Road

        left_road();


        //Call Horse car

       // horse_car();


        //Fence or Partition

        pertition();

        //Car1 Move

        car1();

        //car2 Move

        car2();

         //Call Lamp Post


        lamp_post();

    }

    if(mode == 2)
    {
        //small_house();

        //Call Sky

        sky();



        //Call Sea

        sea();




        //second road

        second_road();

        //plane

        plane();

        //Call sun

        sun();


        //motor

        //motor();

        //bus

        bus();

        //bus2

        bus2();

        //bus3

        bus3();

        //bus4

        bus4();

        //car1

        //car4();

        //car

        car();

        //car 5

        car5();

        //tree

        tree();
    }

    glutPostRedisplay();

    glutSwapBuffers();


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


    glutKeyboardFunc(keyboardFunc);

    glutMainLoop();

    return 0;
}
