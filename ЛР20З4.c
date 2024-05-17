#include <graphics.h>
#include <math.h>
#include <conio.h>

void drawRotatingObject() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x = getmaxx() / 2;
    int y = getmaxy() / 2;
    int radius = 50;
    float angle = 0;

    while (!kbhit()) {
        cleardevice();
        int x1 = x + radius * cos(angle);
        int y1 = y + radius * sin(angle);
        int x2 = x + radius * cos(angle + M_PI_2);
        int y2 = y + radius * sin(angle + M_PI_2);

        line(x, y, x1, y1);
        line(x, y, x2, y2);

        angle += 0.05;
        delay(50);
    }

    closegraph();
}

int main() {
    drawRotatingObject();
    return 0;
}
