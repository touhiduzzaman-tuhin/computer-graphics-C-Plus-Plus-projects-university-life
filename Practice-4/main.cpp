#include <windows.h>
#include <GL/gl.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <GL/glut.h>
#include<string.h>



void init (void)
{

    glClearColor (255, 255, 255, 0);   // Background Color
    glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
    glLoadIdentity();
    glOrtho(-100, 100, -100, 100, -100, 100); // To specify the coordinate & Specify the distances to the nearer and farther depth
}

void text()
{
    char string[]="Max";
    void *font=GLUT_BITMAP_TIMES_ROMAN_24;
    int k;
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(200,200);
    for(k=0;k<strlen(string);k++)
            glutBitmapCharacter(font,string[k]);


}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    text();

    glutSwapBuffers();

}




int main(int argc, char** argv)
{
    glutInit(&argc, argv);
   	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH );
    glutInitWindowSize (700, 700);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("FOURTH Class");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
