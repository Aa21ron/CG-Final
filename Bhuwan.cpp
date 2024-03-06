#include <graphics.h>
#include <conio.h>
#include <dos.h>
int main(void)
{
    int xmax, ymax, x, y,maxx,midy,i;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C://turboc3/bgi");
    setcolor(BLACK);
    xmax = getmaxx();
    ymax = getmaxy();
    x = xmax / 2;
    y = ymax / 2;
    
    //sun
    setcolor(6);
    for (i = 30; i >= 1; i--)
    {
        circle(x + 250, y - 150, 30 - i);
        delay(50);
    }
    line(0, y + 50, xmax, y + 50);
    delay(20);
    
    //bushes
    setcolor(10);
    for (i = 40; i >= 1; i--)
    {
        arc(0, y + 50, 0, 90, 40 - i);
        arc(80, y + 50, 0, 180, 40 - i);
        arc(160, y + 50, 0, 180, 40 - i);
        arc(240, y + 50, 0, 180, 40 - i);
        arc(320, y + 50, 0, 180, 40 - i);
        arc(400, y + 50, 0, 180, 40 - i);
        arc(480, y + 50, 0, 180, 40 - i);
        arc(560, y + 50, 0, 180, 40 - i);
        arc(640, y + 50, 0, 180, 40 - i);
        delay(50);
    }
    
    //tree
    setcolor(8);
    for (i = 30; i >= 1; i--)
    {
        arc(x - 700, y + 50, 0, 70, 450 + i);
        arc(x + 150, y + 50, 90, 180, 350 + i);
        delay(50);
    }
    
    //tree
    setcolor(10);
    for (i = 100; i >= 1; i--)
    {
        arc(0, 0, 270, 360, 100 - i);
        arc(200, 0, 180, 360, 100 - i);
        delay(50);
    }
    maxx=getmaxx();
    y = getmaxy()/2;
    midy  = y + 70;
 
    //car
    for (i=0; i < maxx-150; i=i+5) 
	{
        setcolor(WHITE);
        line(0, midy + 37, maxx, midy + 37);
        line(0, midy + 15, maxx, midy + 15);
 
        setcolor(YELLOW);
        line(i, midy + 23, i, midy);
        line(i, midy, 40 + i, midy - 20);
        line(40 + i, midy - 20, 80 + i, midy - 20);
        line(80 + i, midy - 20, 100 + i, midy);
        line(100 + i, midy, 120 + i, midy);
        line(120 + i, midy, 120 + i, midy + 23);
        line(0 + i, midy + 23, 18 + i, midy + 23);
        arc(30 + i, midy + 23, 0, 180, 12);
        line(42 + i, midy + 23, 78 + i, midy + 23);
        arc(90 + i, midy + 23, 0, 180, 12);
        line(102 + i, midy + 23, 120 + i, midy + 23);
        line(28 + i, midy, 43 + i, midy - 15);
        line(43 + i, midy - 15, 57 + i, midy - 15);
        line(57 + i, midy - 15, 57 + i, midy);
        line(57 + i, midy, 28 + i, midy);
        line(62 + i, midy - 15, 77 + i, midy - 15);
        line(77 + i, midy - 15, 92 + i, midy);
        line(92 + i, midy, 62 + i, midy);
        line(62 + i, midy, 62 + i, midy - 15);
        circle(30 + i, midy + 25, 9);
        circle(90 + i, midy + 25, 9);

        delay(100);
        
        setcolor(BLACK);
        line(i, midy + 23, i, midy);
        line(i, midy, 40 + i, midy - 20);
        line(40 + i, midy - 20, 80 + i, midy - 20);
        line(80 + i, midy - 20, 100 + i, midy);
        line(100 + i, midy, 120 + i, midy);
        line(120 + i, midy, 120 + i, midy + 23);
        line(0 + i, midy + 23, 18 + i, midy + 23);
        arc(30 + i, midy + 23, 0, 180, 12);
        line(42 + i, midy + 23, 78 + i, midy + 23);
        arc(90 + i, midy + 23, 0, 180, 12);
        line(102 + i, midy + 23, 120 + i, midy + 23);
        line(28 + i, midy, 43 + i, midy - 15);
        line(43 + i, midy - 15, 57 + i, midy - 15);
        line(57 + i, midy - 15, 57 + i, midy);
        line(57 + i, midy, 28 + i, midy);
        line(62 + i, midy - 15, 77 + i, midy - 15);
        line(77 + i, midy - 15, 92 + i, midy);
        line(92 + i, midy, 62 + i, midy);
        line(62 + i, midy, 62 + i, midy - 15);
        circle(30 + i, midy + 25, 9);
        circle(90 + i, midy + 25, 9);
    }
 
 
    getch();
    closegraph();
    return 0;
}
