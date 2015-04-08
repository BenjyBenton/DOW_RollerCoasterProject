//By: BENJY BENTON
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <time.h>

#ifdef __APPLE__
#  include <GL/glew.h>
#  include <GL/freeglut.h>
#  include <OpenGL/glext.h>
#else
#  include <GL/glew.h>
#  include <GL/freeglut.h>
#  include <GL/glext.h>
#pragma comment(lib, "glew32.lib") 
#endif

#define PI 3.14159265358979324

using namespace std;

GLuint cube;

static float verts[8][3] = {
		{ -3, 3, 3 },
		{ -3, -3, 3 },
		{ -3, 3, -3 },
		{ -3, -3, -3 },
		{ 3, 3, -3 },
		{ 3, -3, -3 },
		{ 3, 3, 3 },
		{ 3, -3, 3 }
};

void point(int i)
{
	glVertex3f(verts[i][0], verts[i][1], verts[i][2]);
}

// Drawing routine.
void drawScene(void) {


	glTranslatef(0.0, 0.0, -70);
	//glTranslatef(0.0, 0.0, -15);

	glCallList(cube);
	
	glFlush();
	
}

// Initialization routine.
void setup(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glClearDepth(1);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	cube = glGenLists(1);
	glNewList(cube, GL_COMPILE);
	createTexture(1);
	// now attach it to the texture id
	glBindTexture(GL_TEXTURE_2D, textureid[0]);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 64, 64, 0, GL_RGBA, GL_UNSIGNED_BYTE, texturebmp);
	// Set texture parameters for filtering.
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glBegin(GL_TRIANGLE_STRIP);
	point(7);
	point(1);
	point(6);
	point(0);
	glEnd();
	createTexture(2);
	// now attach it to the texture id
	glBindTexture(GL_TEXTURE_2D, textureid[1]);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 64, 64, 0, GL_RGBA, GL_UNSIGNED_BYTE, texturebmp);
	// Set texture parameters for filtering.
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glBegin(GL_TRIANGLE_STRIP);
	point(6);
	point(0);
	point(4);
	point(2);
	glEnd();
	createTexture(3);
	// now attach it to the texture id
	glBindTexture(GL_TEXTURE_2D, textureid[2]);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 64, 64, 0, GL_RGBA, GL_UNSIGNED_BYTE, texturebmp);
	// Set texture parameters for filtering.
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glBegin(GL_TRIANGLE_STRIP);
	point(4);
	point(2);
	point(5);
	point(3);
	glEnd();

	createTexture(4);
	// now attach it to the texture id
	glBindTexture(GL_TEXTURE_2D, textureid[3]);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 64, 64, 0, GL_RGBA, GL_UNSIGNED_BYTE, texturebmp);
	// Set texture parameters for filtering.
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glBegin(GL_TRIANGLE_STRIP);
	point(6);
	point(4);
	point(7);
	point(5);
	glEnd();
	createTexture(5);
	// now attach it to the texture id
	glBindTexture(GL_TEXTURE_2D, textureid[4]);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 64, 64, 0, GL_RGBA, GL_UNSIGNED_BYTE, texturebmp);
	// Set texture parameters for filtering.
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.0, 1.0, 1.0);
	point(7);
	point(5);
	point(1);
	point(3);
	glEnd();
	createTexture(6);
	// now attach it to the texture id
	glBindTexture(GL_TEXTURE_2D, textureid[5]);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 64, 64, 0, GL_RGBA, GL_UNSIGNED_BYTE, texturebmp);
	// Set texture parameters for filtering.
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0, 0.0, 1.0);
	point(1);
	point(3);
	point(0);
	point(2);


	glEnd();
	glEndList();
}

// OpenGL window reshape routine.
void resize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-25, 25, -25, 25, 50.0, 100.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

// Keyboard input processing routine.
void keyInput(unsigned char key, int x, int y) {
	switch (key) {
	case 27:
		exit(0);
		break;
	default:
		break;
	}
}

void update(int ignored) {

}

// Main routine.
int main(int argc, char **argv) {
	glutInit(&argc, argv);

	glutInitContextVersion(2, 1);
	glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("solidCube.cpp");

	setup();

	glutDisplayFunc(drawScene);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyInput);

	glewExperimental = GL_TRUE;
	glewInit();

	//setup(); 

	glutMainLoop();
}