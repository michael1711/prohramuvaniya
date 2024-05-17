#include <graphics.h>
#include <conio.h>

void drawObjectMovingLeftToRight() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x = 0;
    int y = getmaxy() / 2;
    int dx = 5;

    while (!kbhit()) {
        cleardevice();
        rectangle(x, y - 20, x + 40, y + 20);
        
        x += dx;

        if (x > getmaxx()) x = -40;

        delay(50);
    }

    closegraph();
}

int main() {
    drawObjectMovingLeftToRight();
    return 0;
}
