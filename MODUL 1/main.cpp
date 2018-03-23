#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(4);

	glBegin(GL_LINES);
    glVertex2f(-4.0,2.0);
    glVertex2f(4.0,2.0);
    glVertex2f(-4.0,-2.0);
    glVertex2f(4.0,-2.0);


    glVertex2f(-2.0,4.0);
    glVertex2f(-2.0,-4.0);
    glVertex2f(2.0,4.0);
    glVertex2f(2.0,-4.0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.7,-0.7);
	glVertex2f(0.7,-0.7);
	glVertex2f(0.7,-0.4);
	glVertex2f(-0.4,-0.4);
	glVertex2f(-0.4,0.0);
	glVertex2f(0.7,0.0);
	glVertex2f(0.7,0.3);
	glVertex2f(-0.4,0.3);
	glVertex2f(-0.4,0.6);
	glVertex2f(0.7,0.6);
	glVertex2f(0.7,0.9);
	glVertex2f(-0.7,0.9);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(-3.0,2.5);
	glVertex2f(-2.5,2.5);
	glVertex2f(-2.5,3.5);
	glVertex2f(-3.0,3.5);
	glVertex2f(-3.2,3.3);
    glVertex2f(-3.2,3.0);
    glVertex2f(-3.0,3.0);


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
	//glutInitWindowPosition(100,100);
	glutCreateWindow("Segitiga Siku-Siku");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}
