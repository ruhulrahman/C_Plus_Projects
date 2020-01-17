#include<graphics.h>
#include<conio.h>
main()
{
    int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;

    initgraph(&gd, &gm, "C:\\TC\\BGI");





//    line(100, 300, 10, 200);
    line(150, 110, 290, 200);
    line(150, 290, 290, 200);
    line(290, 200, 90, 200);;
    circle(190, 200, 100);

    getch();
    closegraph();
    return 0;
}
