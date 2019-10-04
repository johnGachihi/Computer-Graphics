/*
 * 101892 - Waithaka John Gachihi
 * */

#include <GL/glut.h>
#include <iostream>

int radius = 250;

void init() {
    gluOrtho2D(-1000, 1000, -1000, 1000);
}

//Plots point on all 8 octants
void plotPoints(int x, int y) {
    glVertex2d(x, y);
    glVertex2d(-x, y);
    glVertex2d(x, -y);
    glVertex2d(-x, -y);
    glVertex2d(y, x);
    glVertex2d(-y, x);
    glVertex2d(y, -x);
    glVertex2d(-y, -x);
}

/*Implementation of Mid-point Circle Algorithm*/
void drawCircleUsingMidPointAlgo() {
    int P = 1 - radius;     //Initial P
    int x = 0, y = radius;  //Starting co-ordinates

    while (x <= y) {
        plotPoints(x, y);

        if(P < 0) {
            x++;       //(x+1, y)
            P = P + 2*x + 3;
        } else {
            x++; y--;  //(x+1, y-1)
            P = P + 2*x - 2*y + 5;
        }
    }
}

void drawCircle() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    drawCircleUsingMidPointAlgo();
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    std::cout << "Insert circle radius (try 200): ";
    std::cin >> radius;

    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Mid-Point Circle Drawing Algorithm");
    init();
    glutDisplayFunc(drawCircle);
    glutMainLoop();

}