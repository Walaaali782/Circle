#include <GL/freeglut.h>
#include <math.h>

    void Walaa() {
glClearColor(1.0,1.0,0.0,1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5.0);
gluOrtho2D(-300,300,-200,200);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
float x, y ,i ;
glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
for(i=0; i<=2*M_PI; i+= 0.001){
x = 150* cos(i);
y = 150* sin(i);
glVertex2i(x,y); }
glEnd();
glFlush(); }
int main(int argu,char** argv){
glutInit(&argu,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(100,100);
glutInitWindowSize(600,400);
glutCreateWindow("My circle code ");
glutDisplayFunc(Walaa);
glutMainLoop();
return 0; }
