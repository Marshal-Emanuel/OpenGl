#include <GL/glut.h>

void myInit() { 
    glClearColor(1.0, 0.5, 0.0, 1.0); // Set background color to orange
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();  
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawSquare() {
    glColor3f(0.0, 0.0, 1.0); // Blue color
    glBegin(GL_POLYGON);
    glVertex2i(40, 40);
    glVertex2i(320, 40);
    glVertex2i(320, 200);
    glVertex2i(40, 200);
    glEnd();
}

void drawTriangle() {
    glColor3f(1.0, 1.0, 0.0); // Yellow color
    glBegin(GL_POLYGON);
    glVertex2i(220, 60);
    glVertex2i(300, 60);
    glVertex2i(300, 150);
    glEnd();
}

void drawHouse() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawSquare();
    drawTriangle();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Basic House");
    myInit();
    glutDisplayFunc(drawHouse);
    glutMainLoop();
    return 0;
}
