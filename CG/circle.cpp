#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>

double R;

void Circle()
{

    double x=0;
    double y=R,h=1-R;

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,0);
    glBegin(GL_POINTS);

    glVertex2d(x,y);
    glVertex2d(y,x);
    glVertex2d(y,-x);
    glVertex2d(x,-y);
    glVertex2d(-x,-y);
    glVertex2d(-y,-x);
    glVertex2d(-y,x);
    glVertex2d(-x,y);


    while(y>x)
    {
        if(h<0)
        h=h+2*x+3;
        else
        {
            h=h+2*(x-y)+5;
            y=y-1;

        }
        x=x+1;

    glVertex2d(x,y);
    glVertex2d(y,x);
    glVertex2d(y,-x);
    glVertex2d(x,-y);
    glVertex2d(-x,-y);
    glVertex2d(-y,-x);
    glVertex2d(-y,x);
    glVertex2d(-x,y);

    }

    glEnd();
    glutSwapBuffers();

}
void init()
{

    glClearColor(1.0,1.0,1.0,0);
    glColor3f(0.0,1.0,0.0);
    gluOrtho2D(-200,200,-200,200);

}

void reshape(int w, int h)
{
 glViewport(0.0, 0.0, w, h);
}

int main(int argc, char **argv)
{

    R = 100;
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
     glutCreateWindow("Circle drawing");
    init();
    glutDisplayFunc(Circle);
    glutIdleFunc(Circle);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}

