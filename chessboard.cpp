#include <GL/glut.h>
void mydisplay(){
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.3,0.1,0.1,0.9);
glBegin(GL_POLYGON);
//glColor3f(0.3,0.5,0.2);
glVertex2f(-1.0, 1.0);
glVertex2f(-1.0, 0.75);
glVertex2f(-0.75, 0.75);
glVertex2f(-0.75, 1.0);
glEnd();

int c = 0 ,y;

for (int i = 0; i < 8; i++)
{





for(y=0;y<8;y++)
{

if(y%2==0)
{
for (c=0;c<8;c++)
{
if (c % 2 !=0)
{
glColor3f(1.0,1.0,1.0);
}
else{
glColor3f(0.0,0.0,0.0);
}
glBegin(GL_POLYGON);
glVertex2f(-1.0+0.25*c, 1.0-0.25*y);
glVertex2f(-1.0+0.25*c, 0.75-0.25*y);
glVertex2f(-0.75+0.25*c, 0.75-0.25*y);
glVertex2f(-0.75+0.25*c, 1.0-0.25*y);
glEnd();
}

}
else
{

for (c=0;c<8;c++)
{
if (c % 2 !=0)
{
glColor3f(0.0,0.0,0.0);
}
else{
glColor3f(1.0,1.0,1.0);
}
glBegin(GL_POLYGON);
glVertex2f(-1.0+0.25*c, 1.0-0.25*y);
glVertex2f(-1.0+0.25*c, 0.75-0.25*y);
glVertex2f(-0.75+0.25*c, 0.75-0.25*y);
glVertex2f(-0.75+0.25*c, 1.0-0.25*y);
glEnd();
}

}
}
}
glFlush();
}
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
glutCreateWindow("simple");
glutDisplayFunc(mydisplay);
glutMainLoop();
}
