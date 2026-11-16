#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    
    int x1 = 100, y1 = 100;
    int x2 = 300, y2 = 200;


    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps;
    if (abs(dx) > abs(dy)) {
        steps = abs(dx);
    } else {
        steps = abs(dy);
    }

    
    float xInc = dx / (float)steps;
    float yInc = dy / (float)steps;

    
    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x = x + xInc;
        y = y + yInc;
    }

    getch();
    closegraph();
    return 0;
}
