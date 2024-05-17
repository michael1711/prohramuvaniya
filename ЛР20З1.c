#include <graphics.h>
#include <math.h>

void drawSinGraph() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int width = getmaxx();
    int height = getmaxy();
    int originX = width / 2;
    int originY = height / 2;
    float scaleX = width / (2 * M_PI);
    float scaleY = height / 2;

    setcolor(WHITE);
    line(0, originY, width, originY); // X-axis
    line(originX, 0, originX, height); // Y-axis

    setcolor(RED);
    for (float x = 0; x < 2 * M_PI; x += 0.1) {
        float y = sin(x);
        putpixel(originX + x * scaleX, originY - y * scaleY, RED);
    }

    getch();
    closegraph();
}

int main() {
    drawSinGraph();
    return 0;
}
