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

float w = 0; float xx = 0; float yy = 0; float zz = 0;    void balok(float ss){     float xx=(ss/2);     float yy=(ss/2);     float zz=(ss/2);     glColor3f(0,0,1);


glBegin(GL_POLYGON);          glVertex3f(-xx,yy,zz);         glVertex3f(xx,yy,zz);         glVertex3f(xx,-yy,zz);         glVertex3f(-xx,-yy,zz);     glEnd();     glColor3f(0,1,0);      glBegin(GL_POLYGON);          glVertex3f(-xx,yy,-zz);         glVertex3f(xx,yy,-zz);         glVertex3f(xx,-yy,-zz);         glVertex3f(-xx,-yy,-zz);     glEnd();     glColor3f(0,1,1);      glBegin(GL_POLYGON);          glVertex3f(xx,yy,zz);         glVertex3f(xx,yy,-zz);         glVertex3f(xx,-yy,-zz);         glVertex3f(xx,-yy,zz);     glEnd();     glColor3f(1,0,0);      glBegin(GL_POLYGON);          glVertex3f(-xx,-yy,zz);         glVertex3f(-xx,-yy,-zz);         glVertex3f(-xx,yy,-zz);         glVertex3f(-xx,yy,zz);     glEnd();     glColor3f(1,0,1);      glBegin(GL_POLYGON);         glVertex3f(-xx,yy,zz);         glVertex3f(-xx,yy,-zz);         glVertex3f(xx,yy,-zz);
