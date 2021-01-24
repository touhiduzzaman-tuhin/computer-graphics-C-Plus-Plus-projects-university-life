#include<windows.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<math.h>

float p = 0;
int m =0;
int inc = 0.0;

int day = 0;

void init (void)
{

glClearColor (1,1,1, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0,135,0,68, -1.0, 1.0);
}

void circle( GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy,GLint a,GLint b)
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=a;i<=b;i++)
    {

        float  angle = 2.0f *3.1416*i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));



    }
    glEnd();
}

void circle1(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
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

void circle2(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(cx, cy);

    for(int i = 0; i <= 50; i++)
    {

        float angle = 2.0f * 3.14156f * i/100;

        float x = rx * cosf(angle);

        float y = ry * sinf(angle);

        glVertex2f((x + cx), (y + cy));
    }

    glEnd();
}


void Rain()
{

    if(p >= 0)
    {
        p -= 0.45;
    }

    else{
        p = 4;
    }

    glutPostRedisplay();

    for(int j=0;j<80;j=j+4)
    {
        for(int i=-100;i<=200;i=i+4)
        {
        glColor3f (24,24,24);
        circle(1,1,i-p,j+1*p,85,92);

        }
    }
}

float mn = 0;

void road()
{
     glColor3ub(30,30,30);

    glBegin(GL_POLYGON);
    glVertex2f (35,0);
    glVertex2f (85,0);
    glVertex2f (59,40);
    glVertex2f (56,40);
    glEnd();

    glColor3ub(15,12,17);

    glBegin(GL_POLYGON);
   glVertex2f (37,0);
    glVertex2f (84,0);
    glVertex2f (70,50);
    glVertex2f (45,50);
    glEnd();






    if(mn <= 37)
    {
        mn += 0.05;
    }

    else
    {
        mn = -28;
    }

    glutPostRedisplay();



    //umbrella

    glColor3ub (0,0,43);
    glBegin(GL_POLYGON);
    glVertex3f (56, mn+13.2, 0.0);
    glVertex3f (55.3, mn+13.2, 0);
    glVertex3f (55.3, mn+19, 0.0);
    glVertex3f (56, mn+19, 0.0);
    glEnd();

    glColor3ub(67,163,73);
    circle2(7, 7, 56, mn+19);

    glColor3ub(231,77,128);
    circle2(5, 5, 56, mn+19);


    glColor3ub(1, 105, 175);
    circle2(3, 3, 56, mn+19);



    glColor3ub(136,90,77);
    circle2(1, 1, 56, mn+19);

    //line

    glColor3ub (0,0,43);
    glBegin(GL_POLYGON);
    glVertex3f (55.5, mn+14, 0.0);
    glVertex3f (55.8, mn+14, 0);
    glVertex3f (55.8, mn+26, 0.0);
    glVertex3f (55.5, mn+26, 0.0);
    glEnd();



    glColor3ub(0,0,0);
    circle1(1.3, 1.3, 52, mn+17);


    glColor3ub (175,42,43);
    glBegin(GL_POLYGON);
    glVertex3f (51.4, mn+15.8, 0.0);
    glVertex3f (52.6, mn+15.8, 0);
    glVertex3f (52.6, mn+15.2, 0.0);
    glVertex3f (51.4, mn+15.2, 0.0);
    glEnd();


    glColor3ub (0,42,43);
    glBegin(GL_POLYGON);
    glVertex3f (50, mn+15.2, 0.0);
    glVertex3f (54, mn+15.2, 0);
    glVertex3f (54, mn+10, 0.0);
    glVertex3f (50, mn+10, 0.0);
    glEnd();


    //hand

    glColor3ub (0,0,43);
    glBegin(GL_POLYGON);
    glVertex3f (49.4, mn+15.2, 0.0);
    glVertex3f (50.1, mn+15.2, 0);
    glVertex3f (49, mn+13.2, 0.0);
    glVertex3f (48.3, mn+13.2, 0.0);
    glEnd();

    glColor3ub (0,0,43);
    glBegin(GL_POLYGON);
    glVertex3f (49, mn+13.2, 0.0);
    glVertex3f (48.3, mn+13.2, 0);
    glVertex3f (49.4, mn+11.2, 0.0);
    glVertex3f (50.1, mn+11.2, 0.0);
    glEnd();

    //2

    glColor3ub (0,0,43);
    glBegin(GL_POLYGON);
    glVertex3f (53.9, mn+15.2, 0.0);
    glVertex3f (54.7, mn+15.2, 0);
    glVertex3f (56, mn+13.2, 0.0);
    glVertex3f (55.3, mn+13.2, 0.0);
    glEnd();

    glColor3ub (0,0,43);
    glBegin(GL_POLYGON);
    glVertex3f (56, mn+13.2, 0.0);
    glVertex3f (55.3, mn+13.2, 0);
    glVertex3f (55.3, mn+16.2, 0.0);
    glVertex3f (56, mn+16.2, 0.0);
    glEnd();

    //leg

    glColor3ub (0,42,43);
    glBegin(GL_POLYGON);
    glVertex3f (50.5, mn+10, 0.0);
    glVertex3f (51.3, mn+10, 0);
    glVertex3f (51.3, mn+7.5, 0.0);
    glVertex3f (50.5, mn+7.5, 0.0);
    glEnd();

    glColor3ub (0,42,43);
    glBegin(GL_POLYGON);
    glVertex3f (52.7, mn+10, 0.0);
    glVertex3f (53.5, mn+10, 0);
    glVertex3f (53.5, mn+7.5, 0.0);
    glVertex3f (52.7, mn+7.5, 0.0);
    glEnd();

    //man right


    glColor3ub(0,0,0);
    circle1(1.3, 1.3, 59, mn+17);


    glColor3ub (175,42,43);
    glBegin(GL_POLYGON);
    glVertex3f (58.4, mn+15.8, 0.0);
    glVertex3f (59.6, mn+15.8, 0);
    glVertex3f (59.6, mn+15.2, 0.0);
    glVertex3f (58.4, mn+15.2, 0.0);
    glEnd();


    glColor3ub (0,42,43);
    glBegin(GL_POLYGON);
    glVertex3f (57, mn+15.2, 0.0);
    glVertex3f (61, mn+15.2, 0);
    glVertex3f (61, mn+10, 0.0);
    glVertex3f (57, mn+10, 0.0);
    glEnd();


    //hand

    glColor3ub (0,0,43);
    glBegin(GL_POLYGON);
    glVertex3f (56.4, mn+15.2, 0.0);
    glVertex3f (57.1, mn+15.2, 0);
    glVertex3f (56.5, mn+13.2, 0.0);
    glVertex3f (55.8, mn+13.2, 0.0);
    glEnd();

    glColor3ub (0,0,43);
    glBegin(GL_POLYGON);
    glVertex3f (56.5, mn+13.2, 0.0);
    glVertex3f (55.8, mn+13.2, 0);
    glVertex3f (56.4, mn+11.2, 0.0);
    glVertex3f (57.1, mn+11.2, 0.0);
    glEnd();

    //2

    glColor3ub (0,0,43);
    glBegin(GL_POLYGON);
    glVertex3f (60.9, mn+15.2, 0.0);
    glVertex3f (61.7, mn+15.2, 0);
    glVertex3f (63, mn+13.2, 0.0);
    glVertex3f (62.3, mn+13.2, 0.0);
    glEnd();

    glColor3ub (0,0,43);
    glBegin(GL_POLYGON);
    glVertex3f (63, mn+13.2, 0.0);
    glVertex3f (62.3, mn+13.2, 0);
    glVertex3f (61.3, mn+11.2, 0.0);
    glVertex3f (62, mn+11.2, 0.0);
    glEnd();

    //leg

    glColor3ub (0,42,43);
    glBegin(GL_POLYGON);
    glVertex3f (57.5, mn+10, 0.0);
    glVertex3f (58.3, mn+10, 0);
    glVertex3f (58.3, mn+7.5, 0.0);
    glVertex3f (57.5, mn+7.5, 0.0);
    glEnd();

    glColor3ub (0,42,43);
    glBegin(GL_POLYGON);
    glVertex3f (59.7, mn+10, 0.0);
    glVertex3f (60.5, mn+10, 0);
    glVertex3f (60.5, mn+7.5, 0.0);
    glVertex3f (59.7, mn+7.5, 0.0);
    glEnd();





}



void Background()
{
    glColor3ub (6,0,43);
    glBegin(GL_POLYGON);
    glVertex3f (0,0, 0.0);
    glVertex3f (135,0, 0.0);
    glVertex3f (135, 68, 0.0);
    glVertex3f (0, 68, 0.0);
    glEnd();


}







void Tree1()
{
   glColor3ub(46,33,7);
    glBegin(GL_POLYGON);
    glVertex3f (4,0, 0.0);
    glVertex3f (6,0, 0.0);
    glVertex3f (6,20, 0.0);
    glVertex3f (4,20, 0.0);
    glEnd();

    glColor3ub(22,96,36);
    circle(3.5,3.5,3,18,0,100);

    glColor3ub(22,96,36);
    circle(3.5,3.5,7,18,0,100);

    glColor3ub(22,96,36);
    circle(3,2.8,3.5,22,0,100);

    glColor3ub(22,96,36);
    circle(2.8,2.8,6.5,22,0,100);

    glColor3ub(22,96,36);
    circle(2.9,2.9,4.75,26,0,100);

     glColor3ub(22,96,36);
    circle(3,3,5,17.5,0,100);


}



void Tree5()
{

 glColor3ub(46,33,7);
    glBegin(GL_POLYGON);
    glVertex3f (30,0, 0.0);
    glVertex3f (34,0, 0.0);
    glVertex3f (33,35, 0.0);
    glVertex3f (31,35, 0.0);
    glEnd();


     glColor3ub(22,96,36);
    circle(5,4,28,33,0,100);

    glColor3ub(22,96,36);
    circle(5,4,36,33,0,100);

    glColor3ub(22,96,36);
    circle(5,4,29,38,0,100);

    glColor3ub(22,96,36);
    circle(5,4,35,38,0,100);

    glColor3ub(22,96,36);
    circle(5,6,32,40,0,100);



}

void House()
{
     glColor3ub(22,25,0);
    glBegin(GL_POLYGON);
    glVertex3f (10,0, 0.0);
    glVertex3f (30,0, 0.0);
    glVertex3f (30,20, 0.0);
    glVertex3f (10,20, 0.0);
    glEnd();

    //roof

    glColor3ub(173,113,0);
    glBegin(GL_POLYGON);
    glVertex3f (8,20, 0.0);
    glVertex3f (32,20, 0.0);
    glVertex3f (20,30, 0.0);
    glEnd();
    //window

    glColor3ub(255,252,158);
    glBegin(GL_POLYGON);
    glVertex3f (13,10, 0.0);
    glVertex3f (19,10, 0.0);
    glVertex3f (19,15, 0.0);
    glVertex3f (13,15, 0.0);
    glEnd();

    glColor3ub(255,252,158);
    glBegin(GL_POLYGON);
    glVertex3f (21,10, 0.0);
    glVertex3f (27,10, 0.0);
    glVertex3f (27,15, 0.0);
    glVertex3f (21,15, 0.0);
    glEnd();

}

void Tree2()
{
   glColor3ub(64,44,8);
    glBegin(GL_POLYGON);
    glVertex3f (128,0, 0.0);
    glVertex3f (131,0, 0.0);
    glVertex3f (131,20, 0.0);
    glVertex3f (128,20, 0.0);
    glEnd();

    glColor3ub(22,96,36);
    circle(5,5,127,21,0,100);

    glColor3ub(22,96,36);
    circle(5,5,132,21,0,100);

    glColor3ub(22,96,36);
    circle(4,4,128,25,0,100);

    glColor3ub(22,96,36);
    circle(4,4,131,25,0,100);

    glColor3ub(22,96,36);
    circle(4,4,129,27,0,100);

    glColor3ub(22,96,36);
    circle(4,4,130,27,0,100);

    glColor3ub(22,96,36);
    circle(3,3,129.5,29,0,100);


}




void Tree3()
{
   glColor3ub(46,33,7);
    glBegin(GL_POLYGON);
    glVertex3f (109,0, 0.0);
    glVertex3f (114,0, 0.0);
    glVertex3f (114,20, 0.0);
    glVertex3f (109,20, 0.0);
    glEnd();

    glColor3ub(22,96,36);
    circle(10,10,109,21,0,100);

    glColor3ub(22,96,36);
    circle(10,10,114,21,0,100);

    glColor3ub(22,96,36);
    circle(7.5,7.5,110,28,0,100);

    glColor3ub(22,96,36);
    circle(7.5,7.5,113,28,0,100);

    glColor3ub(22,96,36);
    circle(7,7,111,32,0,100);

    glColor3ub(22,96,36);
    circle(7,7,112,32,0,100);

    glColor3ub(22,96,36);
    circle(5,5,111.5,37,0,100);


}



void Tree4()
{
    glColor3ub(66,34,11);
    glBegin(GL_POLYGON);
    glVertex3f (90,0, 0.0);
    glVertex3f (93,0, 0.0);
    glVertex3f (93,20, 0.0);
    glVertex3f (90,20, 0.0);
    glEnd();

    glColor3ub(22,96,36);
    glBegin(GL_POLYGON);
    glVertex3f (82,10, 0.0);
    glVertex3f (101,10, 0.0);
    glVertex3f (91.5,30, 0.0);
    glEnd();

      glColor3ub(22,96,36);
    glBegin(GL_POLYGON);
    glVertex3f (83,15, 0.0);
    glVertex3f (100,15, 0.0);
    glVertex3f (91.5,35, 0.0);
    glEnd();

    glColor3ub(22,96,36);
    glBegin(GL_POLYGON);
    glVertex3f (84,20, 0.0);
    glVertex3f (99,20, 0.0);
    glVertex3f (91.5,40, 0.0);
    glEnd();



}






void Grass()
{


    for(int i=0;i<140;i=i+3)
    {
       glColor3ub(37,170,79);
       circle(2,3,i,2,0,100);
    }

      for(int i=0;i<140;i=i+2)
    {
    glColor3ub(37,170,79);
    glBegin(GL_POLYGON);
    glVertex3f (i,0, 0.0);
    glVertex3f (i+4.5,0, 0.0);
    glVertex3f (i+4,5.5, 0.0);
    glEnd();
    }

    //border
    glColor3ub(66,34,11);
    glBegin(GL_POLYGON);
    glVertex3f (0,0, 0.0);
    glVertex3f (135,0, 0.0);
    glVertex3f (135,1.5, 0.0);
    glVertex3f (0,1.5, 0.0);
    glEnd();


}



void Cloud()
{

   for(int i=130;i>=0;i=i-20)
   {
    glColor3ub(200,208,200);
    circle(5,5,i-8,68,0,100);

    glColor3ub(200,208,200);
    circle(5,5,i-2,68,0,100);

    glColor3ub(119,128,143);
    circle(5,5,i-10,68,0,100);

    glColor3ub(119,128,143);
    circle(5,5,i-0,68,0,100);

    glColor3ub(119,128,143);
    circle(7,7,i-5,68,0,100);

   }
}





void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);



        Background();


        road();
         House();

        Tree1();
        Tree2();
        Tree3();
        Tree4();
        Tree5();

        Grass();
        Rain();
        Cloud();




    glutSwapBuffers();
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (1350, 680);
glutInitWindowPosition (10, 10);
glutCreateWindow ("Final Project");
init ();
glutDisplayFunc(display);
//sndPlaySound("music.wav",SND_ASYNC);
glutMainLoop();


return 0;
}
