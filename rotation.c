#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4,a,t;
    printf("****ARUN KHANAL***\n");

    printf("Enter coordinate of starting points:\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter coordinates of ending points:\n");
    scanf("%f%f",&x2,&y2);
    printf("Enter angle for rotation:\n");
    scanf("%f",&a);
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setcolor(7);
    line(x1,y1,x2,y2);
    outtextxy(x2+2,y2+2,"Oringinal line");
    t=a*(3.14/180);
    x3=(x1*cos(t))-(y1*sin(t));
    y3=(x1*sin(t))+(y1*cos(t));
    x4=(x2*cos(t))-(y2*sin(t));
    y4=(x2*sin(t))+(y2*cos(t));
    setcolor(7);
    line(x3,y3,x4,y4);
    outtextxy(x3+2,y3+2,"Line after rotation");
    getch();
    closegraph();
    return 0;

}

