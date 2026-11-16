#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // 1. Set start (100, 100) and end (300, 200) points
    int x1 = 100, y1 = 100;
    int x2 = 300, y2 = 200;

    // 2. Find the distance between points
    int dx = x2 - x1;
    int dy = y2 - y1;

    // 3. Find total steps needed (pick the bigger distance)
    int steps;
    if (abs(dx) > abs(dy)) {
        steps = abs(dx);
    } else {
        steps = abs(dy);
    }

    // 4. Calculate how much to move X and Y in each step
    float xInc = dx / (float)steps;
    float yInc = dy / (float)steps;

    // 5. Start at the first point and draw pixel by pixel
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
