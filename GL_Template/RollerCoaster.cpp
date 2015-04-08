#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <stdio.h>

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

using namespace std;

int main() {
	// C++ File Input
	//----------------
	ifstream fin("data.txt");

	if (!fin.good())
	{
		cout << "Cannot find in.txt" << endl;
		return 1;
	}
	char ch;
	while ((ch = fin.get()) != '\n')
		cout << ch;

	cout << endl;

	char line[100];
	fin.getline(line, 100);
	cout << line << endl;

	int a, b, c;
	a = b = c = 0;
	fin >> a >> b >> c >> ws;
	cout << a << " " << b << " " << c << endl;

	string str;
	getline(fin, str);
	cout << str << endl;

	fin.close();

	system("pause");

	return 0;
}