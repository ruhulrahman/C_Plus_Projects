#include<graphics.h>
#include<conio.h>
main()
{
   int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //rectangle(left, top, 600, 300);
   //circle(350, 200, 70);

   //bar(left + 300, 600, right + 300, bottom);
   //line(left - 10, top + 150, 90, 0);
   //line(left - 10, top + 150, left + 410, top + 150);
   //line(510, top + 150, 90, 0);


   //line(100, 100, 50, 50);
//   line(100, 100, 10, 200);
//   line(100, 100, 190, 200);
//   line(190, 200, 10, 200);

   line(100, 300, 10, 200);
   line(100, 300, 190, 200);
   line(190, 200, 10, 200);

   //ellipse(x, y + 200, 0, 360, 100, 50);
   //outtextxy(left + 100, top + 325, "My first C graphics program");

   getch();
   closegraph();
   return 0;
}
