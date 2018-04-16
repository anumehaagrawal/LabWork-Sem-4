#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>
float x1 = 0.6, x2 = 0.6, y = 0.6, y2 = 0.0,x3=0.0,y3=0.6, X1, Y1, X2, Y2,X3,Y3;
float pi = 3.14;
void findCoordinates1(float angle){
    X1=x1*cos(angle)-y*sin(angle);
    Y1=x1*sin(angle) + y*cos(angle);
}
void findCoordinates2(float angle){
    X2=x2*cos(angle)-y2*sin(angle);
    Y1=x2*sin(angle) + y2*cos(angle);
}
void findCoordinates3(float angle){
    X3=x3*cos(angle)-y3*sin(angle);
    Y3=x3*sin(angle) + y3*cos(angle);
}
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0, 0.0, 1.0);
glBegin(GL_POLYGON);

glVertex3f(X2, Y2, 0.0f);
glVertex3f(X1, Y1, 0.0f);
glVertex3f(X3, Y3, 0.0f);
glVertex3f(0.0, 0.0, 0.0);

glEnd();
glutSwapBuffers();

}
void init()
{

    glClearColor(0.0,1.0,1.0,0);


}

void reshape(int w, int h)
{
 glViewport(0.0, 0.0, w, h);
}

int main(int argc, char **argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
     glutCreateWindow("Rotate");
    init();
    findCoordinates1(-180*pi/180);
    findCoordinates2(-180*pi/180);
    findCoordinates3(-180*pi/180);
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}

