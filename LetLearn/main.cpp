#include <GL/glut.h>

void init() {
    gluOrtho2D(-2, 2, -2, 2);
}

void drawLine() {
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
        glVertex2i(-1, 0);
        glVertex2i(1, 0);
    glEnd();
}

void draw() {
    drawLine();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(
            glutGet(GLUT_SCREEN_WIDTH) - ,
            glutGet(GLUT_SCREEN_HEIGHT) - 200
    );
    glutCreateWindow("ble");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}