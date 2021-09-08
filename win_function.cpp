void win()
{
 cleardevice();
 setbkcolor(9);
 setcolor(RED);
 rectangle(5,5,632,470);
 rectangle(8,8,629,467);
 setcolor(YELLOW);
 settextstyle(8,0,5);
 if(score1==100)
 outtextxy(90,170,"YOU WON THIS GAME");
 else
 outtextxy(90,170,"YOU LOST THIS GAME");
}
