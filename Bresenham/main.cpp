#include <iostream>
#include <GL/glut.h>

void drawLineUsingBresenhamsAlgo(int x_start, int y_start, int x_end, int y_end) {
    float M = float(y_end - y_start)/float(x_end - x_start);
    if (M > 1) {
        while
    }
}

int main() {
    int x_start, y_start, x_end, y_end;
    std::cout << "Start points:" << std::endl;
    std::cout << "\tX: ";
    std::cin >> x_start;
    std::cout << "\tY: ";
    std::cin >> y_start;

    std::cout << std::endl;

    std::cout << "End points:" << std::endl;
    std::cout << "\tX: ";
    std::cin >> x_end;
    std::cout << "\tY: ";
    std::cin >> y_end;
    return 0;
}