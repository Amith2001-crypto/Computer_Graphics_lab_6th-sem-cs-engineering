#include<stdio.h>
#include<GL/glu.h>
#include<GL/glut.h>
GLfloat  R,px,py;
void Draw()
{
glClear(GL_COLOR_BUFFER_BIT);
           glColor3f(0,0,1);
           glBegin(GL_LINE_LOOP);
           glVertex2f(0.1,0.4);
           glVertex2f(0.7,0.4);
           glVertex2f(0.4,0.8);
           glEnd();
glLoadIdentity();
          glTranslatef(px,py,0);
          glRotatef(R,0,0,1);
          glTranslatef(-px,-py,0);
          glColor3f(1,0,0);
          glBegin(GL_LINE_LOOP);
          glVertex2f(0.1,0.4);
          glVertex2f(0.7,0.4);
          glVertex2f(0.4,0.8);
          glEnd();
          glFlush();
}

int main(int argc,char *argv[])
{
printf("\nEnter the Rotation Reference Point [Pivot Point]: ");
scanf("%f%f",&px,&py);
printf("\n\nEnter the Rotation Degree:");
scanf("%f",&R);
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
glutInitWindowPosition(0,0);
glutInitWindowSize(500,500);
glutCreateWindow("Triangle Rotation");
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}

