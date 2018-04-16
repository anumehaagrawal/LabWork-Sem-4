#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>

double X1,Y1,X2,Y2;

void display()
{

    double dx=(X2-X1);
    double dy = (Y2-Y1);
    double steps;
    float xInc,yInc,x=X1,y=Y1;
    steps = ( abs(dx) > abs(dy)? abs(dx) : abs(dy));
    xInc = dx/(float)steps;
    yInc = dy/(float)steps;

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);
    glVertex2d(x,y);
    int k;
    for(k=0;k<steps;k++)
    {

        x+=xInc;
        y+=yInc;
        glVertex2d(x,y);
    }

    glEnd();

    glutSwapBuffers();

}
void init()
{

    glClearColor(1.0,1.0,1.0,0);
    glColor3f(0.0,1.0,0.0);
    gluOrtho2D(0,640,0,480);

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
     glutCreateWindow("DDA_Line");
    init();
    scanf("%lf %lf %lf %lf",&X1,&X2,&Y1,&Y2);
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
