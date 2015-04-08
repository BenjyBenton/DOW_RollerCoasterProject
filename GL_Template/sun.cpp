//By: BENJY BENTON
/*#include <cstdlib>
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

static float R = 15.0;

using namespace std;

static float verts[8][3] = {
		{ -5, 35, 20 },
		{ -5, 25, 20 },
		{ -5, 35, -20 },
		{ -5, 25, -20 },
		{ 5, 35, -20 },
		{ 5, 25, -20 },
		{ 5, 35, 20 },
		{ 5, 25, 20 }
};

void buildCube() {
	glBegin(GL_LINES);
	for (int i = 0; i < 8; i++) {
		for (int j = i; j < 8; j++) {
			if (((verts[j][0] == verts[i][0]) + (verts[j][1] == verts[i][1]) + (verts[j][2] == verts[i][2])) == 2) {
				glVertex3f(verts[i][0], verts[i][1], verts[i][2]);
				glVertex3f(verts[j][0], verts[j][1], verts[j][2]);
				printf("i: %f %f %f\n", verts[i][0], verts[i][1], verts[i][2]);
				printf("j: %f %f %f\n\n", verts[j][0], verts[j][1], verts[j][2]);
			}
		}
	}

	glEnd();
}

// Drawing routine.
void drawScene(void) {
	float t = 2 * PI / 10;

	glLoadIdentity();

	glColor3f(0.0, 1.0, 0.0);

	glTranslatef(0.0, 0.0, -70);
	//glTranslatef(0.0, 0.0, -15);

	glScalef(0.25, 0.25, 0.25);

	buildCube();

	glRotatef(36, 0.0, 0.0, 1.0);

	buildCube();

	glRotatef(36, 0.0, 0.0, 1.0);

	buildCube();

	glRotatef(36, 0.0, 0.0, 1.0);

	buildCube();

	glRotatef(36, 0.0, 0.0, 1.0);

	buildCube();

	glRotatef(36, 0.0, 0.0, 1.0);

	buildCube();

	glRotatef(36, 0.0, 0.0, 1.0);

	buildCube();

	glRotatef(36, 0.0, 0.0, 1.0);

	buildCube();

	glRotatef(36, 0.0, 0.0, 1.0);

	buildCube();

	glRotatef(36, 0.0, 0.0, 1.0);

	buildCube();

	glRotatef(36, 0.0, 0.0, 1.0);

	glFlush();
}

// Initialization routine.
void setup(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

}

// OpenGL window reshape routine.
void resize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-12.5, 12.5, -12.5, 12.5, 50.0, 100.0);
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

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("sun.cpp");

	setup();

	glutDisplayFunc(drawScene);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyInput);

	glewExperimental = GL_TRUE;
	glewInit();

	//setup(); 

	glutMainLoop();
}*/
