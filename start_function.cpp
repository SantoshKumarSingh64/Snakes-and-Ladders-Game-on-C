void start()
{
  int X=196,i;
  for(i=0;i<5;i++)
  {
   paint1();
   setfillstyle(SOLID_FILL,BLUE);
   setcolor(YELLOW);
   rectangle(120,300,X,320);
   floodfill(125,310,YELLOW);
   delay(1000);
   X=X+76;
  }
}

void paint1()
{
 cleardevice();
 setbkcolor(9);
 setcolor(RED);
 rectangle(5,5,632,470);
 rectangle(8,8,629,467);
 setcolor(YELLOW);
 settextstyle(8,0,3);
 outtextxy(220,120,"WELCOME TO");
 settextstyle(10,0,4);
 outtextxy(30,150,"SNAKE & LADDER GAME");
 rectangle(120,300,500,320);
 settextstyle(6,0,3);
 outtextxy(260,330,"LOADING...");
}
