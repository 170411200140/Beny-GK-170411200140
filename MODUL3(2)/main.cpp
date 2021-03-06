#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display(){
 glClear(GL_COLOR_BUFFER_BIT);
 glPointSize(4);


 glBegin(GL_POLYGON);
 glColor3f (1,1,0);
 glVertex2f(-0.1,0.3);
 glVertex2f(0.2,0.3);
 glVertex2f(0.2,0.2);
 glVertex2f(-0.1,0.2);
glEnd();


 glBegin(GL_POLYGON);
 glColor3f (1,1,0);
 glVertex2f(-0.1,0.2);
 glVertex2f(0.0,0.2);
 glVertex2f(0.0,-0.2);
 glVertex2f(-0.1,-0.2);

 glEnd();
 glBegin(GL_POLYGON);
 glColor3f (1,1,0);
 glVertex2f(0.0,0.1);
 glVertex2f(0.2,0.1);
 glVertex2f(0.2,-0.1);
 glVertex2f(0.0,-0.1);

 glEnd();
 glBegin(GL_POLYGON);
 glColor3f (1,1,0);
 glVertex2f(-0.1,-0.2);
 glVertex2f(0.2,-0.2);
 glVertex2f(0.2,-0.3);
 glVertex2f(-0.1,-0.3);

 glEnd();








 glFlush();
}

void myinit(){
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-4.0,4.0,-4.0,4.0);
 glMatrixMode(GL_MODELVIEW);
 glClearColor(1.0,1.0,1.0,1.0);
 glColor3f(0.0,0.0,1.0);
}

int main(int argc, char* argv[]){
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(500,500);
 glutInitWindowPosition(100,100);
 glutCreateWindow("Segitiga Siku-Siku");
 glutDisplayFunc(display);
 myinit();
 glutMainLoop();

 return 0;
}
