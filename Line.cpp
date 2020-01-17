#include<graphics.h>
#include<conio.h>
main()
{
    int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;

    initgraph(&gd, &gm, "C:\\TC\\BGI");





    line(100, 300, 10, 200);
    line(100, 300, 190, 200);
    line(190, 200, 10, 200);
    circle(10, 200, 5);
    circle(190, 200, 5);
    circle(100, 300, 5);

    getch();
    closegraph();
    return 0;
}
