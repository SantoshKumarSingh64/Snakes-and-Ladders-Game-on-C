void drawcircle1(int x,int y,int st)
{
  if(st==0)
  {
   setcolor(1);
   circle(x,y,10);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(x,y,1);
   player1posX=x-61;
  }
  else
  {
   setcolor(1);
   circle(x,y,10);
   setfillstyle(SOLID_FILL,RED);
   floodfill(x,y,1);
   player2posX=x-61;
  }
}



void drawcircle(int x,int y,int st)
{
  if(st==0)
  {
   setcolor(1);
   circle(x,y,10);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(x,y,1);
   player1posX=x+61;
  }
  else
  {
   setcolor(1);
   circle(x,y,10);
   setfillstyle(SOLID_FILL,RED);
   floodfill(x,y,1);
   player2posX=x+61;
  }
}
