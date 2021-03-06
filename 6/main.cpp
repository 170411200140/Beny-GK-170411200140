/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display(void) {   glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);     glColor3f(1.0, 1.0, 1.0);     glRotatef(0,0,0,0);     glPushMatrix();     glRotatef(45,45,45,45);     glScalef(4,1,1);     glutWireCube(4);     glPopMatrix();        glPushMatrix();     glRotatef(45,45,45,45);     glScalef(1,4,1);     glutWireCube(4);     glPopMatrix();        glFlush();  } void init(void) {      glClearColor (0.0, 0.0, 0.0, 0.0);      glMatrixMode(GL_PROJECTION);      glLoadIdentity();     glOrtho(-10.0, 10.0, 10.0,10.0, -10.0, 10.0);     glMatrixMode(GL_MODELVIEW);     glShadeModel (GL_FLAT);     glEnable(GL_DEPTH_TEST);  }  int main(int argc, char** argv){     glutInit(&argc, argv);      glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);



    glutInitWindowSize(400, 400);     glutInitWindowPosition(100, 100);     glutCreateWindow("Balok X");     init();      glutDisplayFunc(display);     glutMainLoop();     return 0;  }
