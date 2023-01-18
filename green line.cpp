#include <windows.h>
#include<GL/glut.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void init(void){
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,200.0,0.0,150.0);
}
void lineSegment(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_LINES);
	glVertex2i(100,15);
	glVertex2i(10,145);
	glEnd();
	glFinish();
	
}

int main(int argc, char *argv[]) {
	glutInit(&argc,argv);
	glutInitWindowSize(640,640);
	glutInitWindowPosition(80,80);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutCreateWindow("hello");
	init();
	glutDisplayFunc(lineSegment);
	glutMainLoop();
	return EXIT_SUCCESS;
	
	return 0;
}
