/*nclude <cstdlib>
#include <cmath>
#include <iostream>

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

void drawScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(5.0, 5.0, 0.0);

	glBegin(GL_POLYGON);

	glVertex3f(25.0, 70.0, 0.0);
	glVertex3f(10.0, 70.0, 0.0);
	glVertex3f(10.0, 90.0, 0.0);
	glVertex3f(25.0, 90.0, 0.0);

	glEnd();

	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

	glVertex3f(15.0, 82.5, 0.0);
	glVertex3f(20.0, 82.5, 0.0);
	glVertex3f(20.0, 90.0, 0.0);
	glVertex3f(15.0, 90.0, 0.0);

	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(15.0, 77.5, 0.0);
	glVertex3f(20.0, 77.5, 0.0);
	glVertex3f(20.0, 70.0, 0.0);
	glVertex3f(15.0, 70.0, 0.0);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(5.0, 0.0, 5.0);

	glVertex3f(35.0, 70.0, 0.0);
	glVertex3f(30.0, 70.0, 0.0);
	glVertex3f(30.0, 90.0, 0.0);
	glVertex3f(35.0, 90.0, 0.0);

	glEnd();
	glFlush();

}

// Initialization routine.
void setup(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
}

// OpenGL window reshape routine.
void resize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void keyInput(unsigned char key, int x, int y)
{
	switch (key)
	{
		case 27:
			exit(0);
			break;
		default:
			break;
	}
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitContextVersion(2, 1);
	glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("message.cpp");
	glutDisplayFunc(drawScene);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyInput);

	glewExperimental = GL_TRUE;
	glewInit();

	setup();

	glutMainLoop();
}*/