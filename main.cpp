//#include <iostream>
#include <GL/glut.h>

//using std::cout; using std::cin; using std::endl;

void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(5.5, 0.0, 0.0);
        glVertex3f(5.5, 5.5, 0.0);
        glVertex3f(0.0, 5.5, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello world!");
    glutDisplayFunc(displayMe);
    glutMainLoop();

    return 0;
}
