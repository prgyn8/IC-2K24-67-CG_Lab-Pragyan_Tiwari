#include <graphics.h>
#include <conio.h>

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    
    setcolor(WHITE);
    line(50, 50, 200, 50);


    setcolor(YELLOW);
    circle(100, 150, 40);

    setcolor(GREEN);
    rectangle(250, 50, 400, 120);

    setcolor(RED);
    line(300, 180, 250, 260); 
    line(250, 260, 350, 260); 
    line(350, 260, 300, 180); 

    getch();
    closegraph();
    return 0;
}
