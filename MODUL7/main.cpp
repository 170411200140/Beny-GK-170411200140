#include <windows.h> #ifdef __APPLE__ #include <GLUT/glut.h> #else #include <GL/glut.h> #endif

#include <stdlib.h>

float d = 0;
float x2 = 0;
float y2 = 0; float z2 = 0;

void kubus(float s)
 {
     float x1=(s/2);
     float y1=(s/2);
     float z1=(s/2);
      glColor3d(0,0.5,1);
       glBegin(GL_POLYGON);
       glVertex3d(-x1,y1,z1);
       glVertex3d(x1,y1,z1);
        glVertex3d(x1,-y1,z1);
        glVertex3d(-x1,-y1,z1);     glEnd();     glColor3d(0,0.5,1);     glBegin(GL_POLYGON);     glVertex3d(-x1,y1,-z1);     glVertex3d(x1,y1,-z1);     glVertex3d(x1,-y1,-z1);     glVertex3d(-x1,-y1,-z1);     glEnd();     glColor3d(1,0,0);     glBegin(GL_POLYGON);
    glVertex3d(x1,y1,z1);     glVertex3d(x1,y1,-z1);     glVertex3d(x1,-y1,-z1);     glVertex3d(x1,-y1,z1);     glEnd();     glColor3d(1,0,0);     glBegin(GL_POLYGON);     glVertex3d(-x1,-y1,z1);     glVertex3d(-x1,-y1,-z1);     glVertex3d(-x1,y1,-z1);     glVertex3d(-x1,y1,z1);     glEnd();     glColor3d(1,0,1);     glBegin(GL_POLYGON);     glVertex3d(-x1,y1,z1);     glVertex3d(-x1,y1,-z1);     glVertex3d(x1,y1,-z1);     glVertex3d(x1,y1,z1);     glEnd();     glColor3d(1,1,0);     glBegin(GL_POLYGON);     glVertex3d(-x1,-y1,z1);     glVertex3d(-x1,-y1,-z1);     glVertex3d(x1,-y1,-z1);     glVertex3d(x1,-y1,z1);     glEnd();

}

void kotak(float m, float n , float o){

    glBegin(GL_POLYGON);     glColor3f(m,n,o);     glVertex3d(0,-6,9.1 );     glVertex3d(0,-1,9.1);     glVertex3d(3,-1,9.1);     glVertex3d(3,-6,9.1);     glEnd(); }

void display(void) {     glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);     glColor3f(1.0, 1.0, 1.0);     glPointSize(10);     glRotated(d,x2,y2,z2);

    glPushMatrix();
    glColor3f(1,0.5,0);     glBegin(GL_POLYGON);     glVertex3d(-9,-15,9.1);     glVertex3d(9,-15,9.1);     glVertex3d(25,-25,9.1);     glVertex3d(-25,-25,9.1);     glEnd();     glPopMatrix();

    glPushMatrix();     glTranslated(0,-2,0);     glColor3f(0.9,0.7,0.2);     glScaled(0.8, 1.0, 0.8);     glRotated(45, 0, 1, 0);     glRotated(-90, 1, 0, 0);     //glutWireCone(2,3,4,1);     glutSolidCone(24,15,4,24);     glPopMatrix();

    glPushMatrix();     glTranslated(0,-6,0);     kubus(18);     glPopMatrix();

    glPushMatrix();     glColor3f(1,0,0);     glTranslated(-15,-15,25);     glScaled(0.5,7,1);     glutSolidCube(2);     glPopMatrix();

    glPushMatrix();     glColor3f(1,0,0);     glTranslated(15,-15,25);     glScaled(0.5,7,1);     glutSolidCube(2);     glPopMatrix();

    glPushMatrix();     glColor3f(1,1,1);     glTranslated(-15,-6.7,25);     glScaled(0.5,0.5,1);     glutSolidSphere(3,7,9);     glPopMatrix();


    glPushMatrix();     glColor3f(1,1,1);
    glTranslated(15,-6.7,25);     glScaled(0.5,0.5,1);     glutSolidSphere(3,7,9);     glPopMatrix();

    // pintu     glPushMatrix();     glTranslated(-5.5,-4,0);     glScaled(1.5,1.8,1);     kotak(1,0,0);     glPopMatrix();

    glPushMatrix();     glTranslated(-5.5,-11,0.1);     glScaled(0.25,0.125,1);     kotak(0,0,0);     glPopMatrix();

    //jendela     glPushMatrix();     glTranslated(2.5,-5.5,0);     glScaled(0.5,0.3,1);     kotak(1,0,0);     glPopMatrix();

    glPushMatrix();     glTranslated(4.5,-5.5,0);     glScaled(0.5,0.3,1);     kotak(1,0,0);     glPopMatrix();

    glPushMatrix();     glTranslated(2.5,-7.5,0);     glScaled(0.5,0.3,1);     kotak(1,0,0);     glPopMatrix();

    glPushMatrix();     glTranslated(4.5,-7.5,0);     glScaled(0.5,0.3,1);     kotak(1,0,0);     glPopMatrix();

    glPushMatrix();     glTranslated(2.5,-9.5,0);     glScaled(0.5,0.3,1);     kotak(1,0,0);     glPopMatrix();

     glPushMatrix();     glTranslated(4.5,-9.5,0);     glScaled(0.5,0.3,1);     kotak(1,0,0);     glPopMatrix();

    glFlush(); }

void kunci(unsigned char key, int x, int y) {     switch (key)     {

//    case 27 :     case 'q':         exit(0);         break;     case 'a':         d=1;         x2=1;         y2=0;         z2=0;         glutPostRedisplay();         break;     case 's':         d=1;         x2=0;         y2=1;         z2=0;         glutPostRedisplay();         break;     case 'd':         d=1;         x2=0;         y2=0;         z2=1;         glutPostRedisplay();         break;     } }

void init(void) {     glClearColor (0.0, 0.0, 0.0, 0.0);     glMatrixMode(GL_PROJECTION);     glLoadIdentity();
    glOrtho(-25.0,25.0,-25.0,25.0,-25.0,25.0);     glMatrixMode(GL_MODELVIEW);     glShadeModel (GL_FLAT);     glEnable(GL_DEPTH_TEST); } int main(int argc, char** argv) {     glutInit(&argc, argv);     glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);     glutInitWindowSize(600,600);     glutInitWindowPosition(100, 100);     glutCreateWindow("Kubus");     init();     glutDisplayFunc(display);     glutKeyboardFunc(kunci);     glutMainLoop();     return 0; }
