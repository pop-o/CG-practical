#include<windows.h>
#include<GL/glut.h>
void init(void){
	glClearColor(1.0,10,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,150,0,150);
}
void function(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(0.2,1.0,0.40);
	glVertex2i(20,10);
	glVertex2i(40,10);
	glVertex2i(50,30);
	glVertex2i(30,50);
	glVertex2i(10,30);
	
	glEnd();
	glFinish();
}
int main(int argc,char *argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutInitDisplayMode(GLUT_SINGLE);
	glutCreateWindow("yoyoyoyoyo");
	init();
	glutDisplayFunc(function);
	glutMainLoop();
	return EXIT_SUCCESS;
}

