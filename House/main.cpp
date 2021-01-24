#include<windows.h>

#include <GL/gl.h>

#include <GL/glut.h>

void display(void)
{
/* clear all pixels */

glClear (GL_COLOR_BUFFER_BIT);

/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (0.50, 0.05, 0.0);

// 2nd Floor

glBegin(GL_POLYGON);
glVertex3f (0.44, 0.75, 0.0);
glVertex3f (0.90, 0.75, 0.0);
glVertex3f (0.88, 0.95, 0.0);
glVertex3f (0.47, 0.95, 0.0);
glEnd();


// line of 2nd Floor Horijontal

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.464, 0.92, 0.0);
glVertex3f (0.882, 0.92, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.461, 0.89, 0.0);
glVertex3f (0.885, 0.89, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.459, 0.86, 0.0);
glVertex3f (0.889, 0.86, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.45, 0.83, 0.0);
glVertex3f (0.891, 0.83, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.447, 0.80, 0.0);
glVertex3f (0.895, 0.80, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.443, 0.78, 0.0);
glVertex3f (0.898, 0.78, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.44, 0.75, 0.0);
glVertex3f (0.90, 0.75, 0.0);
glEnd();


// Line Vertical
glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.44, 0.75, 0.0);
glVertex3f (0.47, 0.95, 0.0);
glEnd();



glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.49, 0.75, 0.0);
glVertex3f (0.52, 0.95, 0.0);
glEnd();


glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.54, 0.75, 0.0);
glVertex3f (0.57, 0.95, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.59, 0.75, 0.0);
glVertex3f (0.62, 0.95, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.64, 0.75, 0.0);
glVertex3f (0.67, 0.95, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.69, 0.75, 0.0);
glVertex3f (0.72, 0.95, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.74, 0.75, 0.0);
glVertex3f (0.77, 0.95, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.79, 0.75, 0.0);
glVertex3f (0.82, 0.95, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.84, 0.75, 0.0);
glVertex3f (0.88, 0.95, 0.0);
glEnd();

glColor3f (0.85, 0.85, 0.85);
glBegin(GL_LINES);
glVertex3f (0.90, 0.75, 0.0);
glVertex3f (0.88, 0.95, 0.0);
glEnd();




//Shadow

glColor3f (0.50, 1.00, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.11, 0.71, 0.0);
glVertex3f (0.93, 0.71, 0.0);
glVertex3f (0.90, 0.71, 0.0);
glVertex3f (0.12, 0.75, 0.0);
glEnd();



// 1st Floor

glColor3f (0.50, 0.05, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.08, 0.65, 0.0);
glVertex3f (0.93, 0.65, 0.0);
glVertex3f (0.90, 0.75, 0.0);
glVertex3f (0.12, 0.75, 0.0);
glEnd();

// first Floor line horijontal

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.08, 0.65, 0.0);
glVertex3f (0.93, 0.65, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.088, 0.67, 0.0);
glVertex3f (0.924, 0.67, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.095, 0.69, 0.0);
glVertex3f (0.916, 0.69, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.105, 0.71, 0.0);
glVertex3f (0.911, 0.71, 0.0);
glEnd();

// 1st floor vertical


glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.08, 0.65, 0.0);
glVertex3f (0.105, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.13, 0.65, 0.0);
glVertex3f (0.16, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.18, 0.65, 0.0);
glVertex3f (0.21, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.23, 0.65, 0.0);
glVertex3f (0.26, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.28, 0.65, 0.0);
glVertex3f (0.31, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.33, 0.65, 0.0);
glVertex3f (0.36, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.38, 0.65, 0.0);
glVertex3f (0.41, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.43, 0.65, 0.0);
glVertex3f (0.46, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.48, 0.65, 0.0);
glVertex3f (0.51, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.53, 0.65, 0.0);
glVertex3f (0.56, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.58, 0.65, 0.0);
glVertex3f (0.61, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.63, 0.65, 0.0);
glVertex3f (0.66, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.68, 0.65, 0.0);
glVertex3f (0.71, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.73, 0.65, 0.0);
glVertex3f (0.76, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.78, 0.65, 0.0);
glVertex3f (0.81, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.83, 0.65, 0.0);
glVertex3f (0.86, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.88, 0.65, 0.0);
glVertex3f (0.91, 0.71, 0.0);
glEnd();

glColor3f (0.90, 0.90, 0.90);
glBegin(GL_LINES);
glVertex3f (0.93, 0.65, 0.0);
glVertex3f (0.91, 0.71, 0.0);
glEnd();






// 3rd step

glColor3f (0.50, 0.05, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.10, 0.64, 0.0);
glVertex3f (0.92, 0.64, 0.0);
glVertex3f (0.92, 0.65, 0.0);
glVertex3f (0.10, 0.65, 0.0);
glEnd();




// Room

glColor3f (0.29, 0.2, 0.40);
glBegin(GL_POLYGON);
glVertex3f (0.15, 0.30, 0.0);
glVertex3f (0.85, 0.30, 0.0);
glVertex3f (0.85, 0.64, 0.0);
glVertex3f (0.15, 0.64, 0.0);
glEnd();


//Dish Line

glColor3f (0.50, 0.05, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.01, 0.05, 0.0);
glVertex3f (0.02, 0.05, 0.0);
glVertex3f (0.02, 0.70, 0.0);
glVertex3f (0.01, 0.70, 0.0);
glEnd();







// window Left

glColor3f (1.0, 0.25, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.56, 0.30, 0.0);
glVertex3f (0.58, 0.31, 0.0);
glVertex3f (0.58, 0.64, 0.0);
glVertex3f (0.56, 0.64, 0.0);
glEnd();

// window right

glColor3f (1.0, 0.25, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.80, 0.31, 0.0);
glVertex3f (0.82, 0.30, 0.0);
glVertex3f (0.82, 0.64, 0.0);
glVertex3f (0.80, 0.64, 0.0);
glEnd();


// window left white down


glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.565, 0.31, 0.0);
glVertex3f (0.575, 0.32, 0.0);
glVertex3f (0.575, 0.47, 0.0);
glVertex3f (0.565, 0.47, 0.0);
glEnd();


// window left white up


glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.565, 0.48, 0.0);
glVertex3f (0.575, 0.48, 0.0);
glVertex3f (0.575, 0.63, 0.0);
glVertex3f (0.565, 0.63, 0.0);
glEnd();




// window right white down


glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.815, 0.31, 0.0);
glVertex3f (0.805, 0.32, 0.0);
glVertex3f (0.805, 0.47, 0.0);
glVertex3f (0.815, 0.47, 0.0);
glEnd();


// window right white up


glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.815, 0.48, 0.0);
glVertex3f (0.805, 0.48, 0.0);
glVertex3f (0.805, 0.63, 0.0);
glVertex3f (0.815, 0.63, 0.0);
glEnd();


// Black portion


glColor3f (0.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.64, 0.33, 0.0);
glVertex3f (0.74, 0.33, 0.0);
glVertex3f (0.74, 0.50, 0.0);
glVertex3f (0.64, 0.50, 0.0);
glEnd();


glColor3f (0.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.64, 0.50, 0.0);
glVertex3f (0.74, 0.50, 0.0);
glVertex3f (0.71, 0.55, 0.0);
glVertex3f (0.67, 0.55, 0.0);
glEnd();


//window greel horizontal


glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.58, 0.45, 0.0);
glVertex3f (0.80, 0.45, 0.0);
glVertex3f (0.80, 0.46, 0.0);
glVertex3f (0.58, 0.46, 0.0);
glEnd();


glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.58, 0.32, 0.0);
glVertex3f (0.80, 0.32, 0.0);
glVertex3f (0.80, 0.33, 0.0);
glVertex3f (0.58, 0.33, 0.0);
glEnd();


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.60, 0.33, 0.0);
glVertex3f (0.605, 0.33, 0.0);
glVertex3f (0.605, 0.45, 0.0);
glVertex3f (0.60, 0.45, 0.0);
glEnd();


//window greel horizontal


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.60, 0.33, 0.0);
glVertex3f (0.605, 0.33, 0.0);
glVertex3f (0.605, 0.62, 0.0);
glVertex3f (0.60, 0.62, 0.0);
glEnd();


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.62, 0.33, 0.0);
glVertex3f (0.625, 0.33, 0.0);
glVertex3f (0.625, 0.62, 0.0);
glVertex3f (0.62, 0.62, 0.0);
glEnd();


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.64, 0.33, 0.0);
glVertex3f (0.645, 0.33, 0.0);
glVertex3f (0.645, 0.62, 0.0);
glVertex3f (0.64, 0.62, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.66, 0.33, 0.0);
glVertex3f (0.665, 0.33, 0.0);
glVertex3f (0.665, 0.62, 0.0);
glVertex3f (0.66, 0.62, 0.0);
glEnd();


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.68, 0.33, 0.0);
glVertex3f (0.685, 0.33, 0.0);
glVertex3f (0.685, 0.62, 0.0);
glVertex3f (0.68, 0.62, 0.0);
glEnd();


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.70, 0.33, 0.0);
glVertex3f (0.705, 0.33, 0.0);
glVertex3f (0.705, 0.62, 0.0);
glVertex3f (0.70, 0.62, 0.0);
glEnd();



glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.72, 0.33, 0.0);
glVertex3f (0.725, 0.33, 0.0);
glVertex3f (0.725, 0.62, 0.0);
glVertex3f (0.72, 0.62, 0.0);
glEnd();


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.74, 0.33, 0.0);
glVertex3f (0.745, 0.33, 0.0);
glVertex3f (0.745, 0.62, 0.0);
glVertex3f (0.74, 0.62, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.76, 0.33, 0.0);
glVertex3f (0.765, 0.33, 0.0);
glVertex3f (0.765, 0.62, 0.0);
glVertex3f (0.76, 0.62, 0.0);
glEnd();


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.78, 0.33, 0.0);
glVertex3f (0.785, 0.33, 0.0);
glVertex3f (0.785, 0.62, 0.0);
glVertex3f (0.78, 0.62, 0.0);
glEnd();


// with out black part

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.585, 0.465, 0.0);
glVertex3f (0.635, 0.465, 0.0);
glVertex3f (0.635, 0.50, 0.0);
glVertex3f (0.585, 0.60, 0.0);
glEnd();


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.745, 0.465, 0.0);
glVertex3f (0.795, 0.465, 0.0);
glVertex3f (0.795, 0.60, 0.0);
glVertex3f (0.745, 0.50, 0.0);
glEnd();


glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.58, 0.61, 0.0);
glVertex3f (0.80, 0.61, 0.0);
glVertex3f (0.80, 0.62, 0.0);
glVertex3f (0.58, 0.62, 0.0);
glEnd();



glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.28, 0.30, 0.0);
glVertex3f (0.29, 0.30, 0.0);
glVertex3f (0.29, 0.64, 0.0);
glVertex3f (0.28, 0.64, 0.0);
glEnd();






// Left Window

glColor3f (1.0, 0.25, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.18, 0.30, 0.0);
glVertex3f (0.23, 0.31, 0.0);
glVertex3f (0.23, 0.64, 0.0);
glVertex3f (0.18, 0.64, 0.0);
glEnd();


// window Left white down


glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.185, 0.31, 0.0);
glVertex3f (0.225, 0.32, 0.0);
glVertex3f (0.225, 0.47, 0.0);
glVertex3f (0.185, 0.47, 0.0);
glEnd();


// window Left white up


glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.185, 0.48, 0.0);
glVertex3f (0.225, 0.48, 0.0);
glVertex3f (0.225, 0.63, 0.0);
glVertex3f (0.185, 0.63, 0.0);
glEnd();


//Left window greel

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.32, 0.0);
glVertex3f (0.28, 0.32, 0.0);
glVertex3f (0.28, 0.325, 0.0);
glVertex3f (0.23, 0.325, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.34, 0.0);
glVertex3f (0.28, 0.34, 0.0);
glVertex3f (0.28, 0.345, 0.0);
glVertex3f (0.23, 0.345, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.36, 0.0);
glVertex3f (0.28, 0.36, 0.0);
glVertex3f (0.28, 0.365, 0.0);
glVertex3f (0.23, 0.365, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.38, 0.0);
glVertex3f (0.28, 0.38, 0.0);
glVertex3f (0.28, 0.385, 0.0);
glVertex3f (0.23, 0.385, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.40, 0.0);
glVertex3f (0.28, 0.40, 0.0);
glVertex3f (0.28, 0.405, 0.0);
glVertex3f (0.23, 0.405, 0.0);
glEnd();


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.42, 0.0);
glVertex3f (0.28, 0.42, 0.0);
glVertex3f (0.28, 0.425, 0.0);
glVertex3f (0.23, 0.425, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.44, 0.0);
glVertex3f (0.28, 0.44, 0.0);
glVertex3f (0.28, 0.445, 0.0);
glVertex3f (0.23, 0.445, 0.0);
glEnd();

glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.47, 0.0);
glVertex3f (0.28, 0.47, 0.0);
glVertex3f (0.28, 0.475, 0.0);
glVertex3f (0.23, 0.475, 0.0);
glEnd();



glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.50, 0.0);
glVertex3f (0.28, 0.50, 0.0);
glVertex3f (0.28, 0.505, 0.0);
glVertex3f (0.23, 0.505, 0.0);
glEnd();


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.52, 0.0);
glVertex3f (0.28, 0.52, 0.0);
glVertex3f (0.28, 0.525, 0.0);
glVertex3f (0.23, 0.525, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.54, 0.0);
glVertex3f (0.28, 0.54, 0.0);
glVertex3f (0.28, 0.545, 0.0);
glVertex3f (0.23, 0.545, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.56, 0.0);
glVertex3f (0.28, 0.56, 0.0);
glVertex3f (0.28, 0.565, 0.0);
glVertex3f (0.23, 0.565, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.58, 0.0);
glVertex3f (0.28, 0.58, 0.0);
glVertex3f (0.28, 0.585, 0.0);
glVertex3f (0.23, 0.585, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.60, 0.0);
glVertex3f (0.28, 0.60, 0.0);
glVertex3f (0.28, 0.605, 0.0);
glVertex3f (0.23, 0.605, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.23, 0.62, 0.0);
glVertex3f (0.28, 0.62, 0.0);
glVertex3f (0.28, 0.625, 0.0);
glVertex3f (0.23, 0.625, 0.0);
glEnd();



//Door


glColor3f (0.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.33, 0.32, 0.0);
glVertex3f (0.52, 0.32, 0.0);
glVertex3f (0.52, 0.64, 0.0);
glVertex3f (0.33, 0.64, 0.0);
glEnd();


// Black portion


glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.37, 0.35, 0.0);
glVertex3f (0.48, 0.35, 0.0);
glVertex3f (0.48, 0.55, 0.0);
glVertex3f (0.37, 0.55, 0.0);
glEnd();


glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.37, 0.55, 0.0);
glVertex3f (0.48, 0.55, 0.0);
glVertex3f (0.45, 0.60, 0.0);
glVertex3f (0.40, 0.60, 0.0);
glEnd();


glColor3f (0.60, 0.80, 0.80);
glBegin(GL_POLYGON);
glVertex3f (0.34, 0.33, 0.0);
glVertex3f (0.35, 0.33, 0.0);
glVertex3f (0.35, 0.62, 0.0);
glVertex3f (0.34, 0.62, 0.0);
glEnd();

glColor3f (0.60, 0.80, 0.80);
glBegin(GL_POLYGON);
glVertex3f (0.50, 0.33, 0.0);
glVertex3f (0.51, 0.33, 0.0);
glVertex3f (0.51, 0.62, 0.0);
glVertex3f (0.50, 0.62, 0.0);
glEnd();





glColor3f (0.60, 0.80, 0.80);
glBegin(GL_POLYGON);
glVertex3f (0.35, 0.33, 0.0);
glVertex3f (0.50, 0.33, 0.0);
glVertex3f (0.50, 0.335, 0.0);
glVertex3f (0.35, 0.335, 0.0);
glEnd();


glColor3f (0.60, 0.80, 0.80);
glBegin(GL_POLYGON);
glVertex3f (0.35, 0.615, 0.0);
glVertex3f (0.50, 0.615, 0.0);
glVertex3f (0.50, 0.62, 0.0);
glVertex3f (0.35, 0.62, 0.0);
glEnd();


glColor3f (0.60, 0.50, 0.80);
glBegin(GL_POLYGON);
glVertex3f (0.47, 0.36, 0.0);
glVertex3f (0.475, 0.35, 0.0);
glVertex3f (0.375, 0.55, 0.0);
glVertex3f (0.37, 0.54, 0.0);
glEnd();

glColor3f (0.60, 0.50, 0.80);
glBegin(GL_POLYGON);
glVertex3f (0.37, 0.36, 0.0);
glVertex3f (0.375, 0.35, 0.0);
glVertex3f (0.475, 0.55, 0.0);
glVertex3f (0.47, 0.54, 0.0);
glEnd();

glColor3f (0.60, 0.50, 0.80);
glBegin(GL_POLYGON);
glVertex3f (0.42, 0.35, 0.0);
glVertex3f (0.425, 0.35, 0.0);
glVertex3f (0.425, 0.60, 0.0);
glVertex3f (0.42, 0.60, 0.0);
glEnd();


//First siri

glColor3f (0.50, 0.25, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.31, 0.26, 0.0);
glVertex3f (0.54, 0.26, 0.0);
glVertex3f (0.54, 0.30, 0.0);
glVertex3f (0.31, 0.30, 0.0);
glEnd();



glColor3f (0.20, 0.30, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.33, 0.27, 0.0);
glVertex3f (0.38, 0.27, 0.0);
glVertex3f (0.38, 0.29, 0.0);
glVertex3f (0.33, 0.29, 0.0);
glEnd();

glColor3f (0.20, 0.30, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.47, 0.27, 0.0);
glVertex3f (0.52, 0.27, 0.0);
glVertex3f (0.52, 0.29, 0.0);
glVertex3f (0.47, 0.29, 0.0);
glEnd();






glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.33, 0.40, 0.0);
glVertex3f (0.33, 0.41, 0.0);
glVertex3f (0.37, 0.41, 0.0);
glVertex3f (0.37, 0.40, 0.0);
glEnd();


glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.33, 0.45, 0.0);
glVertex3f (0.33, 0.46, 0.0);
glVertex3f (0.37, 0.46, 0.0);
glVertex3f (0.37, 0.45, 0.0);
glEnd();

glColor3f (0.50, 0.50, 0.30);
glBegin(GL_POLYGON);
glVertex3f (0.33, 0.50, 0.0);
glVertex3f (0.33, 0.51, 0.0);
glVertex3f (0.37, 0.51, 0.0);
glVertex3f (0.37, 0.50, 0.0);
glEnd();

// Line

glColor3f (0.05, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.38, 0.28, 0.0);
glVertex3f (0.47, 0.28, 0.0);
glEnd();


glColor3f (0.25, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.37, 0.37, 0.0);
glVertex3f (0.48, 0.37, 0.0);
glEnd();

glColor3f (0.25, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.37, 0.41, 0.0);
glVertex3f (0.48, 0.41, 0.0);
glEnd();

glColor3f (0.25, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.37, 0.45, 0.0);
glVertex3f (0.48, 0.45, 0.0);
glEnd();


glColor3f (0.25, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.37, 0.48, 0.0);
glVertex3f (0.48, 0.48, 0.0);
glEnd();

glColor3f (0.25, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.37, 0.51, 0.0);
glVertex3f (0.48, 0.51, 0.0);
glEnd();


glColor3f (0.25, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.37, 0.54, 0.0);
glVertex3f (0.48, 0.54, 0.0);
glEnd();



//Second siri

glColor3f (0.50, 0.25, 0.40);
glBegin(GL_POLYGON);
glVertex3f (0.30, 0.22, 0.0);
glVertex3f (0.55, 0.22, 0.0);
glVertex3f (0.55, 0.26, 0.0);
glVertex3f (0.30, 0.26, 0.0);
glEnd();

glColor3f (0.50, 0.55, 0.50);
glBegin(GL_POLYGON);
glVertex3f (0.32, 0.23, 0.0);
glVertex3f (0.36, 0.23, 0.0);
glVertex3f (0.36, 0.25, 0.0);
glVertex3f (0.32, 0.25, 0.0);
glEnd();

glColor3f (0.50, 0.55, 0.50);
glBegin(GL_POLYGON);
glVertex3f (0.48, 0.23, 0.0);
glVertex3f (0.53, 0.23, 0.0);
glVertex3f (0.53, 0.25, 0.0);
glVertex3f (0.48, 0.25, 0.0);
glEnd();

// Line

glColor3f (0.05, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.36, 0.24, 0.0);
glVertex3f (0.48, 0.24, 0.0);
glEnd();


// 3rd siri

glColor3f (0.50, 0.55, 0.50);
glBegin(GL_POLYGON);
glVertex3f (0.29, 0.18, 0.0);
glVertex3f (0.56, 0.18, 0.0);
glVertex3f (0.56, 0.22, 0.0);
glVertex3f (0.29, 0.22, 0.0);
glEnd();

glColor3f (0.50, 0.25, 0.50);
glBegin(GL_POLYGON);
glVertex3f (0.31, 0.19, 0.0);
glVertex3f (0.36, 0.19, 0.0);
glVertex3f (0.36, 0.21, 0.0);
glVertex3f (0.31, 0.21, 0.0);
glEnd();

glColor3f (0.50, 0.25, 0.50);
glBegin(GL_POLYGON);
glVertex3f (0.49, 0.19, 0.0);
glVertex3f (0.54, 0.19, 0.0);
glVertex3f (0.54, 0.21, 0.0);
glVertex3f (0.49, 0.21, 0.0);
glEnd();

// Line

glColor3f (0.05, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.36, 0.20, 0.0);
glVertex3f (0.49, 0.20, 0.0);
glEnd();



// Fourth Siri

glColor3f (0.50, 0.65, 0.50);
glBegin(GL_POLYGON);
glVertex3f (0.28, 0.14, 0.0);
glVertex3f (0.57, 0.14, 0.0);
glVertex3f (0.57, 0.18, 0.0);
glVertex3f (0.28, 0.18, 0.0);
glEnd();

glColor3f (0.50, 0.65, 0.20);
glBegin(GL_POLYGON);
glVertex3f (0.30, 0.15, 0.0);
glVertex3f (0.35, 0.15, 0.0);
glVertex3f (0.35, 0.17, 0.0);
glVertex3f (0.30, 0.17, 0.0);
glEnd();

glColor3f (0.50, 0.65, 0.20);
glBegin(GL_POLYGON);
glVertex3f (0.50, 0.15, 0.0);
glVertex3f (0.55, 0.15, 0.0);
glVertex3f (0.55, 0.17, 0.0);
glVertex3f (0.50, 0.17, 0.0);
glEnd();


// Line

glColor3f (0.05, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.35, 0.16, 0.0);
glVertex3f (0.50, 0.16, 0.0);
glEnd();

// Fifth Siri

glColor3f (0.70, 0.55, 0.50);
glBegin(GL_POLYGON);
glVertex3f (0.27, 0.10, 0.0);
glVertex3f (0.58, 0.10, 0.0);
glVertex3f (0.58, 0.14, 0.0);
glVertex3f (0.27, 0.14, 0.0);
glEnd();


glColor3f (0.50, 0.65, 0.20);
glBegin(GL_POLYGON);
glVertex3f (0.29, 0.11, 0.0);
glVertex3f (0.34, 0.11, 0.0);
glVertex3f (0.34, 0.13, 0.0);
glVertex3f (0.29, 0.13, 0.0);
glEnd();

glColor3f (0.50, 0.65, 0.20);
glBegin(GL_POLYGON);
glVertex3f (0.51, 0.11, 0.0);
glVertex3f (0.56, 0.11, 0.0);
glVertex3f (0.56, 0.13, 0.0);
glVertex3f (0.51, 0.13, 0.0);
glEnd();

// Line

glColor3f (0.05, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.34, 0.12, 0.0);
glVertex3f (0.51, 0.12, 0.0);
glEnd();


// Tree
glColor3f (0.50, 0.25, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.03, 0.55, 0.0);
glVertex3f (0.12, 0.55, 0.0);
glVertex3f (0.08, 0.63, 0.0);
glEnd();


glColor3f (0.50, 0.25, 0.90);
glBegin(GL_POLYGON);
glVertex3f (0.04, 0.54, 0.0);
glVertex3f (0.11, 0.54, 0.0);
glVertex3f (0.08, 0.61, 0.0);
glEnd();

glColor3f (0.50, 0.05, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.05, 0.53, 0.0);
glVertex3f (0.10, 0.53, 0.0);
glVertex3f (0.08, 0.59, 0.0);
glEnd();

glColor3f (0.50, 0.05, 0.50);
glBegin(GL_POLYGON);
glVertex3f (0.06, 0.52, 0.0);
glVertex3f (0.09, 0.52, 0.0);
glVertex3f (0.08, 0.57, 0.0);
glEnd();

glColor3f (0.05, 0.05, 0.50);
glBegin(GL_LINES);
glVertex3f (0.075, 0.40, 0.0);
glVertex3f (0.075, 0.53, 0.0);
glEnd();






//left left line





/* don't wait!
* start processing buffered OpenGL routines
*/
glutSwapBuffers();
}
void init (void)
{

glClearColor (0.0, 0.0, 0.0, 0.0);   // Background Color
glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0); // To specify the coordinate & Specify the distances to the nearer and farther depth
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
glutInitWindowSize (1000, 1000);
glutInitWindowPosition (100, 100);
glutCreateWindow ("House");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
