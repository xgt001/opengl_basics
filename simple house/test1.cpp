#include <GL/glut.h>
void mydisplay(){
     glClear(GL_COLOR_BUFFER_BIT);
   
    glBegin(GL_POLYGON);       
        glColor3f(1.0,1.0,0.0);
        glVertex2f(-0.5, -0.5);       
        glVertex2f(-0.5, 0.5); 
        glVertex2f(0.5, 0.5);       
        glVertex2f(0.5, -0.5);
        glEnd();
        glColor3f(0.0,0.3,0.5);
        /*glBegin (GL_LINES);
            glVertex2f(0.0,0.6);
            glVertex2f(0.5,0.9);
        glEnd();*/

        glBegin(GL_TRIANGLES);
                glVertex2f(-0.5, 0.5);
                glVertex2f(0.0, 1.0);
                glVertex2f(0.5, 0.5);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3f(0.8,0.0,0.0);
                glVertex2f(-0.25,0.25);
                glVertex2f(-0.25,0.40);
                glVertex2f(-0.40,0.40);
                glVertex2f(-0.40,0.25);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3f(0.8,0.0,0.0);
                glVertex2f(0.25,0.25);
                glVertex2f(0.25,0.40);
                glVertex2f(0.40,0.40);
                glVertex2f(0.40,0.25);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3f(0.0,0.0,0.6);
                glVertex2f(-0.20,-0.50);
                glVertex2f(-0.20,-0.20);
                glVertex2f(0.20,-0.20);
                glVertex2f(0.20,-0.50);
        glEnd();


    glFlush();
}

void init()
{
    glClearColor (1.0, 0.0, 0.0, 1.0);

    glColor3f(1.0, 1.0, 1.0);

    glMatrixMode (GL_PROJECTION);   
    glLoadIdentity ();   
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0); 
}


int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);     
    glutInitWindowSize(500,500);       
    glutInitWindowPosition(0,0);
    glutCreateWindow("simple");    
    glutDisplayFunc(mydisplay); 
 
    init();
  
    glutMainLoop();
}