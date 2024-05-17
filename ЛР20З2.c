#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

void drawTextEditor() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    char input[100];
    int x = 10, y = 10;
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    
    printf("Enter text to display: ");
    gets(input);

    cleardevice();
    outtextxy(x, y, input);
    
    getch();
    closegraph();
}

int main() {
    drawTextEditor();
    return 0;
}
