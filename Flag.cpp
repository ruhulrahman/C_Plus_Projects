#include<graphics.h>
#include<conio.h>

main(){
    int gd=DETECT, gm;
    int left, top, right, bottom;

    int x = 110, y = 450;

    // here is the starting angle
    // and end angle
    int start_angle = 0;
    int end_angle = 360;

    // radius from x axis and y axis
    int x_rad = 60;
    int y_rad = 30;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setcolor(GREEN);
    rectangle(100, 250, 500, 50);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(101,101,GREEN);

    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(300, 150, 80);
    floodfill(300,150,RED);

    //line(500, 50, 500, 600);

    rectangle(100, 490, 120, 50);


     setcolor(YELLOW);
     setfillstyle(SOLID_FILL,YELLOW);
     ellipse(x, y, start_angle,
     end_angle, x_rad, y_rad);

    getch();
    closegraph();
    return 0;
}
