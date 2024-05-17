#include <graphics.h>
#include <conio.h>

void drawMovingObject() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x = 0, y = 0;
    int dx = 5, dy = 5;

    while (!kbhit()) {
        cleardevice();
        circle(x, y, 20);
        floodfill(x, y, WHITE);
        
        x += dx;
        y += dy;

        if (x > getmaxx() - 20 || x < 20) dx = -dx;
        if (y > getmaxy() - 20 || y < 20) dy = -dy;

        delay(50);
    }

    closegraph();
}

int main() {
    drawMovingObject();
    return 0;
}
