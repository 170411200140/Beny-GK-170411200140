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

#include <stdlib.h>


float xMobil=0;
float yMobil=0;
float zMobil=0;

float xRumah=0;
float yRumah=0;
float zRumah=0;

float xPohon=0;
float yPohon=0;
float zPohon=0;

float zCoba=45;

void Pohon(float zPohon,float yPohon,float xPohon){

//batang
glColor3f(0.5, 0.35, 0.05);
glBegin(GL_POLYGON);
glVertex3f(-0.5+zPohon, -0.5+yPohon, 0);
glVertex3f(0.5+zPohon, -0.5+yPohon, 0);
glVertex3f(0.5+zPohon, -0.5+yPohon, 4);
glVertex3f(-0.5+zPohon, -0.5+yPohon, 4);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-0.5+zPohon, -0.5+yPohon, 4);
glVertex3f(-0.5+zPohon, -0.5+yPohon, 0);
glVertex3f(-0.5+zPohon, 0.5+yPohon, 0);
glVertex3f(-0.5+zPohon, 0.5+yPohon, 4);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-0.5+zPohon, 0.5+yPohon, 4);
glVertex3f(-0.5+zPohon, 0.5+yPohon, 0);
glVertex3f(0.5+zPohon, 0.5+yPohon, 0);
glVertex3f(0.5+zPohon, 0.5+yPohon, 4);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(0.5+zPohon, -0.5+yPohon, 4);
glVertex3f(0.5+zPohon, -0.5+yPohon, 0);
glVertex3f(0.5+zPohon, 0.5+yPohon, 0);
glVertex3f(0.5+zPohon, 0.5+yPohon, 4);
glEnd();


//daun bawah
glColor3f(00.000, 0.502, 0.000);
glBegin(GL_POLYGON);
glVertex3f(-4+zPohon, -4+yPohon, 4);
glVertex3f(4+zPohon, -4+yPohon, 4);
glVertex3f(4+zPohon, 4+yPohon, 4);
glVertex3f(-4+zPohon, 4+yPohon, 4);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-4+zPohon, -4+yPohon, 4);
glVertex3f(4+zPohon, -4+yPohon, 4);
glVertex3f(0+zPohon, 0+yPohon, 7);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(4+zPohon, 4+yPohon, 4);
glVertex3f(4+zPohon, -4+yPohon, 4);
glVertex3f(0+zPohon, 0+yPohon, 7);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(4+zPohon, 4+yPohon, 4);
glVertex3f(-4+zPohon, 4+yPohon, 4);
glVertex3f(0+zPohon, 0+yPohon, 7);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-4+zPohon, -4+yPohon, 4);
glVertex3f(-4+zPohon, 4+yPohon, 4);
glVertex3f(0+zPohon, 0+yPohon, 7);
glEnd();

//daun atas
glColor3f(00.000, 0.502, 0.000);
glBegin(GL_POLYGON);
glVertex3f(-2.5+zPohon, -2.5+yPohon, 6);
glVertex3f(2.5+zPohon, -2.5+yPohon, 6);
glVertex3f(2.5+zPohon, 2.5+yPohon, 6);
glVertex3f(-2.5+zPohon, 2.5+yPohon, 6);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-2.5+zPohon, -2.5+yPohon, 6);
glVertex3f(2.5+zPohon, -2.5+yPohon, 6);
glVertex3f(0+zPohon, 0+yPohon, 10);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(2.5+zPohon, 2.5+yPohon, 6);
glVertex3f(2.5+zPohon, -2.5+yPohon, 6);
glVertex3f(0+zPohon, 0+yPohon, 10);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(2.5+zPohon, 2.5+yPohon, 6);
glVertex3f(-2.5+zPohon, 2.5+yPohon, 6);
glVertex3f(0+zPohon, 0+yPohon, 10);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-2.5+zPohon, -2.5+yPohon, 6);
glVertex3f(-2.5+zPohon, 2.5+yPohon, 6);
glVertex3f(0+zPohon, 0+yPohon, 10);
glEnd();

}

void Rumah(float zRumah,float yRumah,float xRumah){

glColor3f(0.980, 0.980, 0.824);
glBegin(GL_POLYGON);
glVertex3f(5.0+zRumah, 3.0+yRumah, 0.0);
glVertex3f(5.0+zRumah, -3.0+yRumah, 0.0);
glVertex3f(5.0+zRumah, -3.0+yRumah, 5.0);
glVertex3f(5.0+zRumah, 3.0+yRumah, 5.0);
glEnd();

//depan pintu
glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex3f(5.01+zRumah, -2.0+yRumah, 4.0);
glVertex3f(5.01+zRumah, -2.0+yRumah, 0.0);
glVertex3f(5.01+zRumah, -0.25+yRumah, 0.0);
glVertex3f(5.01+zRumah, -0.25+yRumah, 4.0);
glEnd();

//depan jendela
glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex3f(5.01+zRumah, 2.0+yRumah, 4.0);
glVertex3f(5.01+zRumah, 2.0+yRumah, 2.0);
glVertex3f(5.01+zRumah, 0.25+yRumah, 2.0);
glVertex3f(5.01+zRumah, 0.25+yRumah, 4.0);
glEnd();


//belakang
glColor3f(0.980, 0.980, 0.824);
glBegin(GL_POLYGON);
glVertex3f(-5.0+zRumah, 3.0+yRumah, 0.0);
glVertex3f(-5.0+zRumah, -3.0+yRumah, 0.0);
glVertex3f(-5.0+zRumah, -3.0+yRumah, 5.0);
glVertex3f(-5.0+zRumah, 3.0+yRumah, 5.0);
glEnd();

//depan pintu
glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex3f(-5.01+zRumah, 2.0+yRumah, 4.0);
glVertex3f(-5.01+zRumah, 2.0+yRumah, 0.0);
glVertex3f(-5.01+zRumah, 0.25+yRumah, 0.0);
glVertex3f(-5.01+zRumah, 0.25+yRumah, 4.0);
glEnd();

//depan jendela
glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex3f(-5.01+zRumah, -2.0+yRumah, 4.0);
glVertex3f(-5.01+zRumah, -2.0+yRumah, 2.0);
glVertex3f(-5.01+zRumah, -0.25+yRumah, 2.0);
glVertex3f(-5.01+zRumah, -0.25+yRumah, 4.0);
glEnd();


//samping kanan
glColor3f(0.980, 0.980, 0.824);
glBegin(GL_POLYGON);
glVertex3f(5.0+zRumah, 3.0+yRumah, 0.0);
glVertex3f(5.0+zRumah, 3.0+yRumah, 5.0);
glVertex3f(-5.0+zRumah, 3.0+yRumah, 5.0);
glVertex3f(-5.0+zRumah, 3.0+yRumah, 0.0);
glEnd();

//samping kanan jendela 1
glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex3f(4.0+zRumah, 3.01+yRumah, 2.0);
glVertex3f(4.0+zRumah, 3.01+yRumah, 4.0);
glVertex3f(2.0+zRumah, 3.01+yRumah, 4.0);
glVertex3f(2.0+zRumah, 3.01+yRumah, 2.0);
glEnd();

//samping kanan jendela 2
glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex3f(1.0+zRumah, 3.01+yRumah, 2.0);
glVertex3f(1.0+zRumah, 3.01+yRumah, 4.0);
glVertex3f(-1.0+zRumah, 3.01+yRumah, 4.0);
glVertex3f(-1.0+zRumah, 3.01+yRumah, 2.0);
glEnd();


//samping kanan jendela
glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex3f(-2.0+zRumah, 3.01+yRumah, 2.0);
glVertex3f(-2.0+zRumah, 3.01+yRumah, 4.0);
glVertex3f(-4.0+zRumah, 3.01+yRumah, 4.0);
glVertex3f(-4.0+zRumah, 3.01+yRumah, 2.0);
glEnd();


//samping kiri
glColor3f(0.980, 0.980, 0.824);
glBegin(GL_POLYGON);
glVertex3f(5.0+zRumah, -3.0+yRumah, 0.0);
glVertex3f(5.0+zRumah, -3.0+yRumah, 5.0);
glVertex3f(-5.0+zRumah, -3.0+yRumah, 5.0);
glVertex3f(-5.0+zRumah, -3.0+yRumah, 0.0);
glEnd();

//samping kiri jendela 1
glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex3f(-4.0+zRumah, -3.01+yRumah, 2.0);
glVertex3f(-4.0+zRumah, -3.01+yRumah, 4.0);
glVertex3f(-2.0+zRumah, -3.01+yRumah, 4.0);
glVertex3f(-2.0+zRumah, -3.01+yRumah, 2.0);
glEnd();

//samping kanan jendela 2
glBegin(GL_POLYGON);
glVertex3f(-1.0+zRumah, -3.01+yRumah, 2.0);
glVertex3f(-1.0+zRumah, -3.01+yRumah, 4.0);
glVertex3f(1.0+zRumah, -3.01+yRumah, 4.0);
glVertex3f(1.0+zRumah, -3.01+yRumah, 2.0);
glEnd();

//samping kanan jendela 3
glBegin(GL_POLYGON);
glVertex3f(2.0+zRumah, -3.01+yRumah, 2.0);
glVertex3f(2.0+zRumah, -3.01+yRumah, 4.0);
glVertex3f(4.0+zRumah, -3.01+yRumah, 4.0);
glVertex3f(4.0+zRumah, -3.01+yRumah, 2.0);
glEnd();



//bagian rumah bawah
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex3f(-5.0+zRumah, -3.0+yRumah, 0.0);
glVertex3f(5.0+zRumah, -3.0+yRumah, 0.0);
glVertex3f(5.0+zRumah, 3.0+yRumah, 0.0);
glVertex3f(-5.0+zRumah, 3.0+yRumah, 0.0);
glEnd();

//bagian rumah atas
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex3f(-6.0+zRumah, -4.0+yRumah, 5.0);
glVertex3f(6.0+zRumah, -4.0+yRumah, 5.0);
glVertex3f(6.0+zRumah, 4.0+yRumah, 5.0);
glVertex3f(-6.0+zRumah, 4.0+yRumah, 5.0);
glEnd();

//atap depan
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex3f(6.0+zRumah, -4.0+yRumah, 5.0);
glVertex3f(6.0+zRumah, 4.0+yRumah, 5.0);
glVertex3f(3.0+zRumah, 0.0+yRumah, 8.0);
glEnd();

//atap kanan
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex3f(6.0+zRumah, 4.0+yRumah, 5.0);
glVertex3f(3.0+zRumah, 0.0+yRumah, 8.0);
glVertex3f(-3.0+zRumah, 0.0+yRumah, 8.0);
glVertex3f(-6.0+zRumah, 4.0+yRumah, 5.0);
glEnd();

//atap kiri
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex3f(6.0+zRumah, -4.0+yRumah, 5.0);
glVertex3f(3.0+zRumah, 0.0+yRumah, 8.0);
glVertex3f(-3.0+zRumah, 0.0+yRumah, 8.0);
glVertex3f(-6.0+zRumah, -4.0+yRumah, 5.0);
glEnd();

//atap belakang
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex3f(-6.0+zRumah, 4.0+yRumah, 5.0);
glVertex3f(-6.0+zRumah, -4.0+yRumah, 5.0);
glVertex3f(-3.0+zRumah, 0.0+yRumah, 8.0);
glEnd();
}


void Mobil(float zMobil,float yMobil,float xMobil,float m1,float m2,float m3){

//bagian bawah
glColor3f(m1,m2,m3);
glBegin(GL_POLYGON);
glVertex3f(-2+zMobil, -11+yMobil, 1);
glVertex3f(-2+zMobil, -5+yMobil, 1);
glVertex3f(2+zMobil, -5+yMobil, 1);
glVertex3f(2+zMobil, -11+yMobil, 1);
glEnd();

//bagian kiri
glColor3f(m1,m2,m3);
glBegin(GL_POLYGON);
glVertex3f(-2+zMobil, -11+yMobil, 1);
glVertex3f(-2+zMobil, -11+yMobil, 2);
glVertex3f(-2+zMobil, -10+yMobil, 2.5);
glVertex3f(-2+zMobil, -9.5+yMobil, 3.5);

glVertex3f(-2+zMobil, -7.5+yMobil, 3.5);
glVertex3f(-2+zMobil, -7+yMobil, 2.5);
glVertex3f(-2+zMobil, -5+yMobil, 2);
glVertex3f(-2+zMobil, -5+yMobil, 1);
glEnd();

//bagian kiri kaca
glColor3f(0.098, 0.098, 0.439);
glBegin(GL_POLYGON);
glVertex3f(-2.01+zMobil, -10+yMobil, 2.5);
glVertex3f(-2.01+zMobil, -9.5+yMobil, 3.5);
glVertex3f(-2.01+zMobil, -7.5+yMobil, 3.5);
glVertex3f(-2.01+zMobil, -7+yMobil, 2.5);
glEnd();


//bagian kanan
glColor3f(m1,m2,m3);
glBegin(GL_POLYGON);
glVertex3f(2+zMobil, -11+yMobil, 1);
glVertex3f(2+zMobil, -11+yMobil, 2);
glVertex3f(2+zMobil, -10+yMobil, 2.5);
glVertex3f(2+zMobil, -9.5+yMobil, 3.5);

glVertex3f(2+zMobil, -7.5+yMobil, 3.5);
glVertex3f(2+zMobil, -7+yMobil, 2.5);
glVertex3f(2+zMobil, -5+yMobil, 2);
glVertex3f(2+zMobil, -5+yMobil, 1);
glEnd();

//bagian kanan kaca
glColor3f(0.098, 0.098, 0.439);
glBegin(GL_POLYGON);
glVertex3f(2.01+zMobil, -10+yMobil, 2.5);
glVertex3f(2.01+zMobil, -9.5+yMobil, 3.5);
glVertex3f(2.01+zMobil, -7.5+yMobil, 3.5);
glVertex3f(2.01+zMobil, -7+yMobil, 2.5);
glEnd();

//bagian depan bawah
glColor3f(m1,m2,m3);
glBegin(GL_POLYGON);
glVertex3f(2+zMobil, -5+yMobil, 1);
glVertex3f(-2+zMobil, -5+yMobil, 1);
glVertex3f(-2+zMobil, -5+yMobil, 2);
glVertex3f(2+zMobil, -5+yMobil, 2);
glEnd();

//bagian depan tengah
glColor3f(m1,m2,m3);
glBegin(GL_POLYGON);
glVertex3f(2+zMobil, -7+yMobil, 2.5);
glVertex3f(-2+zMobil, -7+yMobil, 2.5);
glVertex3f(-2+zMobil, -5+yMobil, 2);
glVertex3f(2+zMobil, -5+yMobil, 2);
glEnd();

//bagian depan atas
glColor3f(m1,m2,m3);
glBegin(GL_POLYGON);
glVertex3f(2+zMobil, -7+yMobil, 2.5);
glVertex3f(-2+zMobil, -7+yMobil, 2.5);
glVertex3f(-2+zMobil, -7.5+yMobil, 3.5);
glVertex3f(2+zMobil, -7.5+yMobil, 3.5);
glEnd();

//bagian depan atas kaca
glColor3f(0.098, 0.098, 0.439);
glBegin(GL_POLYGON);
glVertex3f(1.75+zMobil, -6.69+yMobil, 2.5);
glVertex3f(-1.75+zMobil, -6.69+yMobil, 2.5);
glVertex3f(-1.75+zMobil, -7.49+yMobil, 3.5);
glVertex3f(1.75+zMobil, -7.49+yMobil, 3.5);
glEnd();

//bagian atas
glColor3f(m1,m2,m3);
glBegin(GL_POLYGON);
glVertex3f(2+zMobil, -9.5+yMobil, 3.5);
glVertex3f(-2+zMobil, -9.5+yMobil, 3.5);
glVertex3f(-2+zMobil, -7.5+yMobil, 3.5);
glVertex3f(2+zMobil, -7.5+yMobil, 3.5);
glEnd();

//bagian belakang atas
glColor3f(m1,m2,m3);
glBegin(GL_POLYGON);
glVertex3f(2+zMobil, -9.5+yMobil, 3.5);
glVertex3f(-2+zMobil, -9.5+yMobil, 3.5);
glVertex3f(-2+zMobil, -10+yMobil, 2.5);
glVertex3f(2+zMobil, -10+yMobil, 2.5);
glEnd();

//bagian belakang atas kaca
glColor3f(0.098, 0.098, 0.439);
glBegin(GL_POLYGON);
glVertex3f(1.75+zMobil, -9.51+yMobil, 3.5);
glVertex3f(-1.75+zMobil, -9.51+yMobil, 3.5);
glVertex3f(-1.75+zMobil, -10.01+yMobil, 2.5);
glVertex3f(1.75+zMobil, -10.01+yMobil, 2.5);
glEnd();

//bagian belakang tengah
glColor3f(m1,m2,m3);
glBegin(GL_POLYGON);
glVertex3f(2+zMobil, -11+yMobil, 2);
glVertex3f(-2+zMobil, -11+yMobil, 2);
glVertex3f(-2+zMobil, -10+yMobil, 2.5);
glVertex3f(2+zMobil, -10+yMobil, 2.5);
glEnd();

//bagian belakang bawah
glColor3f(m1,m2,m3);
glBegin(GL_POLYGON);
glVertex3f(2+zMobil, -11+yMobil, 2);
glVertex3f(-2+zMobil, -11+yMobil, 2);
glVertex3f(-2+zMobil, -11+yMobil, 1);
glVertex3f(2+zMobil, -11+yMobil, 1);
glEnd();

//lampu bagian belakang bawah
glColor3f(1,0,0);
glBegin(GL_POLYGON);
glVertex3f(1.75+zMobil, -11.01+yMobil, 1.75);
glVertex3f(1+zMobil, -11.01+yMobil, 1.75);
glVertex3f(1+zMobil, -11.01+yMobil, 1.5);
glVertex3f(1.75+zMobil, -11.01+yMobil, 1.5);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(-1.75+zMobil, -11.01+yMobil, 1.75);
glVertex3f(-1+zMobil, -11.01+yMobil, 1.75);
glVertex3f(-1+zMobil, -11.01+yMobil, 1.5);
glVertex3f(-1.75+zMobil, -11.01+yMobil, 1.5);
glEnd();
}

float Kiripohon1=-5;
float Kiripohon2=35;
float Kirirumah=10;
float Kirimobil=45;

float Kananpohon=10;
float Kananrumah1=35;
float Kananrumah2=-2;
float Kananmobil=25;

float Tengahmobil=-10;

float posisiMobil=0;


float warnaMobil1_1=1.0;
float warnaMobil1_2=1.0;
float warnaMobil1_3=0.0;

float warnaMobil2_1=0.878;
float warnaMobil2_2=1.000;
float warnaMobil2_3=1.000;

float warnaMobil3_1=1.000;
float warnaMobil3_2=0.647;
float warnaMobil3_3=0.000;

float warnaMobil4_1=1.000;
float warnaMobil4_2=0.078;
float warnaMobil4_3=0.576;

void display()
{
glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

//bagian kiri
/*
Pohon(-15,-5,0);
Pohon(-15,35,0);
Rumah(-17,10,0);
Mobil(-5,zCoba,0);
*/
Pohon(-15,Kiripohon1,0);
Pohon(-15,Kiripohon2,0);
Rumah(-17,Kirirumah,0);
Mobil(-5,Kirimobil,0,warnaMobil4_1,warnaMobil4_2,warnaMobil4_3);

//bagian kanan
/*
Pohon(15,10,0);
Rumah(17,35,0);
Rumah(17,-2,0);
Mobil(5,25,0);
*/
Pohon(15,Kananpohon,0);
Rumah(17,Kananrumah1,0);
Rumah(17,Kananrumah2,0);
Mobil(5,Kananmobil,0,warnaMobil3_1,warnaMobil3_2,warnaMobil3_3);

//tengah
Mobil(1,Tengahmobil,1,warnaMobil2_1,warnaMobil2_2,warnaMobil2_3);

Mobil(posisiMobil,-1.5,0,warnaMobil1_1,warnaMobil1_2,warnaMobil1_3);


    //backgrpund langit
    glColor3f(0.000, 0.749, 1.000);
    glBegin(GL_POLYGON);
    glVertex3f(120,50,50.0);
    glVertex3f(-120,50,50.0);
    glVertex3f(-120,50,0.0);
    glVertex3f(120,50,0.0);
    glEnd();

    //gunung
    glColor3f(0.000, 0.392, 0.000);
    glBegin(GL_POLYGON);
        glVertex3d(20,49.9,0.0);
        glVertex3d(-110,49.9,0.0);
        glVertex3d(-20,49.9,30.0);
    glEnd();
    glColor3f(00.000, 0.502, 0.000);
    glBegin(GL_POLYGON);
        glVertex3d(-20,49.95,0.0);
        glVertex3d(110,49.95,0.0);
        glVertex3d(20,49.95,30.0);
    glEnd();


    //garis tengah jalan
    glBegin(GL_LINES);
        glColor3d(1,1,1);
        glVertex3d(2.5,60,0.2);
        glVertex3d(2.5,-13,0.2);

        glVertex3d(-2.5,60,0.2);
        glVertex3d(-2.5,-13,0.2);
    glEnd();

    //jalan
    glColor3f(0.184, 0.310, 0.310);
    glBegin(GL_POLYGON);
    glVertex3f(-8,50,0.1);
    glVertex3f(8,50,0.1);
    glVertex3f(8,-50,0.1);
    glVertex3f(-8,-50,0.1);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3d(-7.7,50,0.2);
    glVertex3d(-7.5,50,0.2);
    glVertex3d(-7.5,-50,0.2);
    glVertex3d(-7.7,-50,0.2);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3d(7.7,50,0.2);
    glVertex3d(7.5,50,0.2);
    glVertex3d(7.5,-50,0.2);
    glVertex3d(7.7,-50,0.2);
    glEnd();

    //rumput
    glColor3f(0.196, 0.804, 0.196);
    glBegin(GL_POLYGON);
    glVertex3f(-120,50,0);
    glVertex3f(120,50,0);
    glVertex3f(120,-50,0);
    glVertex3f(-120,-50,0);
    glEnd();
glFlush();
}

void myinit()
{
    /*
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-13.0,13.0,-13.0,13.0,-13.0,13.0);
    glMatrixMode(GL_MODELVIEW);
    */
    glClearColor(0.0,0.0,0.0,1.0);
    glColor3f(0.0,0.0,0.0);
    //glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);
}

void reshape(int w, int h){

    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glOrtho(-13.0,13.0,-13.0,13.0,-13.0,13.0);
    gluPerspective(125.0,(GLfloat)w/(GLfloat)h,1.0,60.0);
    //glOrtho(-3,3,-3,3,-3,3);
    glMatrixMode(GL_MODELVIEW);
    //glLoadIdentity();
    gluLookAt(0,0,15, 0,0,0, 0,1,0);
    glRotated(300,300,0,0);
}

void kunci(unsigned char key, int x, int y) {
    switch (key){

    case 'q':
        exit(0);
        break;

    case 'w':
        if(posisiMobil==-5){
            Kirimobil=-10;

            Kananmobil=Kananmobil-0.3;
            if(Kananmobil < -10){
                Kananmobil=45;
            }
            Tengahmobil=Tengahmobil-0.3;
            if(Tengahmobil < -10){
                Tengahmobil=45;
            }
        }else if(posisiMobil==5){
            Kananmobil=-10;

            Kirimobil=Kirimobil-0.3;
            if(Kirimobil < -10){
                Kirimobil=45;
            }
            Tengahmobil=Tengahmobil-0.3;
            if(Tengahmobil < -10){
                Tengahmobil=45;
            }
        }else{
            Tengahmobil=-10;
            Kananmobil=Kananmobil-0.3;
            if(Kananmobil < -10){
                Kananmobil=45;
            }
            Kirimobil=Kirimobil-0.3;
            if(Kirimobil < -10){
                Kirimobil=45;
            }
        }


        Kiripohon1=Kiripohon1-1.0;
        if(Kiripohon1== -10){
            Kiripohon1=65;
        }
        Kiripohon2=Kiripohon2-1.0;
        if(Kiripohon2== -10){
            Kiripohon2=65;
        }
        Kirirumah=Kirirumah-1.0;
        if(Kirirumah== -10){
            Kirirumah=65;
        }



        Kananpohon=Kananpohon-1.0;
        if(Kananpohon== -10){
            Kananpohon=65;
        }
        Kananrumah1=Kananrumah1-1.0;
        if(Kananrumah1== -10){
            Kananrumah1=65;
        }
        Kananrumah2=Kananrumah2-1.0;
        if(Kananrumah2== -10){
            Kananrumah2=65;
        }


        glutPostRedisplay();
        break;
    case 'a':
        if(posisiMobil==5){
            posisiMobil=0;
        }else{
            Tengahmobil=10;
            posisiMobil=-5;
        }
        glutPostRedisplay();
        break;
    case 'd':
        if(posisiMobil==-5){
            posisiMobil=0;
        }else{
            Tengahmobil=10;
            posisiMobil=5;
        }
        glutPostRedisplay();
        break;
    default:
        break;
    }


}


int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("UAS");
    myinit();

    glutReshapeFunc (reshape);
    glutKeyboardFunc(kunci);
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
