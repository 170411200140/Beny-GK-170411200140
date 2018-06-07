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
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>
#include <stdlib.h>

void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
    for(int i=0; i<12; i++){
        glRotated(30,0,0,1);
        glPushMatrix();
        if((i)%2==1){
            glColor3f(0,0,1);
            glScalef(0.75,0.75,0);
            glRecti(-44, -3, -35, 6 );
        }else{
            glColor3f(0,0,1);
            glRecti(-34, -3, -25, 6 );// kotak besar
        }
        glPopMatrix();
    }

    glBegin(GL_LINES);
        glColor3f(1,1,0);
        for(float x= -30; x<30; x+=0.1){
            glVertex2f(30*sin(x), 30*cos(x));
        }
        glEnd();
    glFlush();
}
void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-50.0,50.0,-50.0,50.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
}
int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Kotak Berputar 4");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
