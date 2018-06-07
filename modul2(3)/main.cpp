#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display(){  glClear(GL_COLOR_BUFFER_BIT);

glColor3f (1,0,1);
glRectf (-0.6,-0.2,-0.5,-0.1);
glRectf(-0.5,-0.1,-0.4,0.0);
glRectf(-0.4,0.0,-0.3,0.1);
glRectf(-0.3,0.1,-0.2,0.2);
glRectf(-0.2,0.2,-0.1,0.3);
glRectf(-0.1,0.3,-0.0,0.4);
glRectf(-0.0,0.4,0.1,0.5);
glRectf(0.7,-0.2,0.6,-0.1);
glRectf(0.6,-0.1,0.5,-0.0);
glRectf(0.5,-0.0,0.4,0.1);
glRectf(0.4,0.1,0.3,0.2);
glRectf(0.3,0.2,0.2,0.3);
glRectf(0.2,0.3,0.1,0.4);
glRectf(-0.2,0.0,-0.1,0.1);
glRectf(-0.1,0.0,0.0,0.1);
glRectf(0.0,0.0,0.1,0.1);
glRectf(0.1,0.0,0.2,0.1);
glRectf(0.2,0.0,0.3,0.1);




 glFlush(); }

void myinit(){  glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-1.0,1.0,-1.0,1.0);
glMatrixMode(GL_MODELVIEW);
glClearColor(0.0,0.0,0.0,0.0);
 glColor3f (1.0, 1.0, 0.0);  }

int main(int argc, char* argv[]){  glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(100,100);
glutCreateWindow("Primitif Bangun Datar");
glutDisplayFunc(display);
 myinit();
 glutMainLoop();

 return 0; }
