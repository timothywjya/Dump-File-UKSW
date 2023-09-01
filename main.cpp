#include <windows.h>
#include <GL/glut.h>

void init(){
    glClearColor(0.5, 0.9, 0.4, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 400, 0, 400);
}

void design() {
    glClearColor(1.0f, 0.0f, 1.0f, 0.0f);
   //Gunung kiri
   glBegin(GL_TRIANGLES);
   glColor3f(0.0,0.0,1.0);
    glVertex2f(0, 200);
    glVertex2f(220, 200);
    glVertex2f(110, 350);
   glEnd();

 //Gunung kanan
   glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(180, 200);
    glVertex2f(400, 200);
    glVertex2f(290, 350);
   glEnd();

 //Jalan
   glBegin(GL_POLYGON);
    glColor3ub(119, 136, 153);
    glVertex2f(140, 0);
    glVertex2d(180, 0);
    glVertex2d(220, 200);
    glVertex2d(180, 200);
   glEnd();

   //Rumah
    glBegin(GL_POLYGON);
    glColor3f(1.0 ,0.75 ,0.0);
    glVertex2i(240, 160);
    glVertex2i(300, 160);
    glVertex2i(290, 180);
    glVertex2i(250, 180);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0 ,0.75 ,0.0);
    glVertex2i(240, 160);
    glVertex2i(300, 160);
    glVertex2i(300, 120);
    glVertex2i(240, 120);
    glEnd();

    //Matahari
    glColor3f(1,1,0);
    lingkaran(35,200,320,240);
    glEnd();

    glFlush();
}

int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(500, 200);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Tugas2 yang Manis");
    init();
    glutDisplayFunc(design);
    glutMainLoop();
}
