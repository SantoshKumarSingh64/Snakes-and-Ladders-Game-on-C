void main()
{
 int i,j,gd=DETECT,gm,t,x,y;
  initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
  start();
 paint(chance,0);
  while((score1<100)&&(score2<100))
  {
    chance=0;
    paint(chance,0);
    if(score2!=0)
    {
	if((player2posY==332)||(player2posY==256)||(player2posY==180)||(player2posY==104)||(player2posY==28))
	     drawcircle1(player2posX+61,player2posY,1);
	else
	     drawcircle(player2posX-61,player2posY,1);
    }
    if(score1!=0)
    {
      if((player1posY==332)||(player1posY==256)||(player1posY==180)||(player1posY==104)||(player1posY==28))
	     drawcircle1(player1posX+61,player1posY,0);
      else
	     drawcircle(player1posX-61,player1posY,0);
    }
    i=getnumber(0);
    paint(chance,i);
    if(score2!=0)
    {
	if((player2posY==332)||(player2posY==256)||(player2posY==180)||(player2posY==104)||(player2posY==28))
	     drawcircle1(player2posX+61,player2posY,1);
	else
	     drawcircle(player2posX-61,player2posY,1);
    }
    //printf("%d",i);
    if(score1==0)
    {
      if(i==1)
      {
	paint(chance,i);
       //	printf("%d",i);
	 score1++;
	if(score2!=0)
       {
	if((player2posY==332)||(player2posY==256)||(player2posY==180)||(player2posY==104)||(player2posY==28))
	     drawcircle1(player2posX+61,player2posY,1);
	else
	     drawcircle(player2posX-61,player2posY,1);
       }
	if((player1posX>590)||(player1posX<40))
	{
	    player1posY=player1posY-38;
	    if(player1posX>590)
	       player1posX=589;
	    else
	       player1posX=40;
	}
	 if(score1==score2)
	{
	   y= player2posY;
	   if((player2posY==332)||(player2posY==256)||(player2posY==180)||(player2posY==104)||(player2posY==28))
		  x=player2posX+61;
	   else
		  x=player2posX-61;
	  paint(chance,i);
	  setcolor(1);
	  circle(player1posX-15,player1posY,10);
	  setfillstyle(SOLID_FILL,GREEN);
	  floodfill(player1posX-15,player1posY,1);
	  setcolor(1);
	  circle(x+15,y,10);
	  setfillstyle(SOLID_FILL,RED);
	  floodfill(x+15,y,1);
	  player1posX=player1posX+61;
	}
	else
	 drawcircle(player1posX,player1posY,0);
	// printf("Score1=%d",score1);
      }
    }
    else
    {
      j=i;
      i=1;
      if((score1==95&&j==6)||(score1==97&&j>=4)||(score1==98&&j>=3))
      {
	if(score1!=0)
       {
	 if((player1posY==332)||(player1posY==256)||(player1posY==180)||(player1posY==104)||(player1posY==28))
	     drawcircle1(player1posX+61,player1posY,0);
	 else
	     drawcircle(player1posX-61,player1posY,0);
       }
	goto outside;
      }
      while(i<=j)
      {
	paint(chance,j);
       //	printf("%d",j);
	score1++;
	if(score2!=0)
       {
	if((player2posY==332)||(player2posY==256)||(player2posY==180)||(player2posY==104)||(player2posY==28))
	     drawcircle1(player2posX+61,player2posY,1);
	else
	     drawcircle(player2posX-61,player2posY,1);
       }
	 if((player1posX>590)||(player1posX<40))
	 {
	    player1posY=player1posY-38;
	    if(player1posX>590)
	       player1posX=589;
	    else
	       player1posX=40;
	 }
	if(score1==score2)
	{
	   y= player2posY;
	   if((player2posY==332)||(player2posY==256)||(player2posY==180)||(player2posY==104)||(player2posY==28))
		  x=player2posX+61;
	   else
		  x=player2posX-61;
	  paint(chance,j);
	  setcolor(1);
	  circle(player1posX-15,player1posY,10);
	  setfillstyle(SOLID_FILL,GREEN);
	  floodfill(player1posX-15,player1posY,1);
	  setcolor(1);
	  circle(x+15,y,10);
	  setfillstyle(SOLID_FILL,RED);
	  floodfill(x+15,y,1);
	  if((player1posY==332)||(player1posY==256)||(player1posY==180)||(player1posY==104)||(player1posY==28))
	       player1posX=player1posX-61;
	  else
	       player1posX=player1posX+61;
	}
	else
	{
	 if((player1posY==332)||(player1posY==256)||(player1posY==180)||(player1posY==104)||(player1posY==28))
	    drawcircle1(player1posX,player1posY,0);
	 else
	   drawcircle(player1posX,player1posY,0);
	}
	 i++;
	 delay(1000);
      }
      i=j;
     // printf("Score1=%d",score1);
    }
    if((score1==4)||(score1==8)||(score1==28)||(score1==39)||(score1==44)||(score1==52)||(score1==64)||(score1==69)||(score1==71)||(score1==84)||(score1==99)||(score1==96)||(score1==94)||(score1==90)||(score1==81)||(score1==66)||(score1==57)||(score1==43)||(score1==36)||(score1==11))
    {
     delay(2000);
     j=score1;
     switch(score1)
     {
      case 4:
	       ladder(26,i);
	       break;
      case 8:
	       ladder(51,i);
	       break;
      case 28:
	      ladder(46,i);
	      break;
      case 39:
	      ladder(60,i);
	      break;
      case 44:
	      ladder(80,i);
	      break;
      case 52:
	      ladder(68,i);
	      break;
      case 64:
	      ladder(85,i);
	      break;
      case 69:
	      ladder(93,i);
	      break;
      case 71:
	      ladder(92,i);
	      break;
      case 84:
	      ladder(98,i);
	      break;
      case 99:
	       snake(78,i);
	       break;
      case 96:
	      snake(65,i);
	      break;
      case 94:
	      snake(48,i);
	      break;
      case 90:
	      snake(49,i);
	      break;
      case 81:
	      snake(63,i);
	      break;
      case 66:
	      snake(47,i);
	      break;
      case 57:
	      snake(19,i);
	      break;
      case 43:
	      snake(22,i);
	      break;
      case 36:
	      snake(14,i);
	      break;
      case 11:
	      snake(9,i);
	      break;
     }
    }
    chance=1;
    outside :
    delay(3000);
    i=getnumber(1);
    paint(chance,i);
    if(score1!=0)
    {
      if((player1posY==332)||(player1posY==256)||(player1posY==180)||(player1posY==104)||(player1posY==28))
	     drawcircle1(player1posX+61,player1posY,0);
      else
	     drawcircle(player1posX-61,player1posY,0);
    }
    //printf("%d",i);
    if(score2==0)
    {
      if(i==1)
      {
	paint(chance,i);
	//printf("%d",i);
	score2++;
	if(score1!=0)
       {
	if((player1posY==332)||(player1posY==256)||(player1posY==180)||(player1posY==104)||(player1posY==28))
	     drawcircle1(player1posX+61,player1posY,0);
	else
	     drawcircle(player1posX-61,player1posY,0);
       }
	if((player2posX>590)||(player2posX<40))
	 {
	    player2posY=player2posY-38;
	    if(player2posX>590)
	       player2posX=589;
	    else
	       player2posX=40;
	 }
	 if(score1==score2)
	{
	    y=player1posY;
	   if((player1posY==332)||(player1posY==256)||(player1posY==180)||(player1posY==104)||(player1posY==28))
		  x=player1posX+61;
	   else
		 x=player1posX-61;
	  paint(chance,i);
	  setcolor(1);
	  circle(x-15,y,10);
	  setfillstyle(SOLID_FILL,GREEN);
	  floodfill(x-15,y,1);
	  setcolor(1);
	  circle(player2posX+15,player2posY,10);
	  setfillstyle(SOLID_FILL,RED);
	  floodfill(player2posX+15,player2posY,1);
	  player2posX=player2posX+61;
	}
	else
	    drawcircle(player2posX,player2posY,1);
	 //printf("Score2=%d",score2);
      }
    }
    else
    {
      j=i;
      i=1;
      if((score2==95&&j==6)||(score2==97&&j>=4)||(score2==98&&j>=3))
      {
	if(score2!=0)
       {
	if((player2posY==332)||(player2posY==256)||(player2posY==180)||(player2posY==104)||(player2posY==28))
	     drawcircle1(player2posX+61,player2posY,1);
	else
	     drawcircle(player2posX-61,player2posY,1);
       }
	goto outside1;
      }
      while(i<=j)
      {
	paint(chance,j);
	//printf("%d",j);
	score2++;
	if(score1!=0)
       {
	if((player1posY==332)||(player1posY==256)||(player1posY==180)||(player1posY==104)||(player1posY==28))
	     drawcircle1(player1posX+61,player1posY,0);
	else
	     drawcircle(player1posX-61,player1posY,0);
       }
	if((player2posX>590)||(player2posX<40))
	 {
	    player2posY=player2posY-38;
	    if(player2posX>590)
	       player2posX=589;
	    else
	       player2posX=40;
	 }
	if(score1==score2)
	{
	    y=player1posY;
	   if((player1posY==332)||(player1posY==256)||(player1posY==180)||(player1posY==104)||(player1posY==28))
		  x=player1posX+61;
	   else
		 x=player1posX-61;
	  paint(chance,j);
	  setcolor(1);
	  circle(x-15,y,10);
	  setfillstyle(SOLID_FILL,GREEN);
	  floodfill(x-15,y,1);
	  setcolor(1);
	  circle(player2posX+15,player2posY,10);
	  setfillstyle(SOLID_FILL,RED);
	  floodfill(player2posX+15,player2posY,1);
	  if((player2posY==332)||(player2posY==256)||(player2posY==180)||(player2posY==104)||(player2posY==28))
	      player2posX=player2posX-61;
	  else
	      player2posX=player2posX+61;
	}
	else
	{
	if((player2posY==332)||(player2posY==256)||(player2posY==180)||(player2posY==104)||(player2posY==28))
	  drawcircle1(player2posX,player2posY,1);
	else
	  drawcircle(player2posX,player2posY,1);
	}
	i++;
	delay(1000);
	}
	i=j;
      //printf("Score2=%d",score2);
    }
    if((score2==4)||(score2==8)||(score2==28)||(score2==39)||(score2==44)||(score2==52)||(score2==64)||(score2==69)||(score2==71)||(score2==84)||(score2==99)||(score2==96)||(score2==94)||(score2==90)||(score2==81)||(score2==66)||(score2==57)||(score2==43)||(score2==36)||(score2==11))
    {
     j=score2;
     delay(3000);
     switch(score2)
     {
      case 4:
	       ladder1(26,i);
	       break;
      case 8:
	       ladder1(51,i);
	       break;
      case 28:
	      ladder1(46,i);
	      break;
      case 39:
	      ladder1(60,i);
	      break;
      case 44:
	      ladder1(80,i);
	      break;
      case 52:
	      ladder1(68,i);
	      break;
      case 64:
	      ladder1(85,i);
	      break;
      case 69:
	      ladder1(93,i);
	      break;
      case 71:
	      ladder1(92,i);
	      break;
      case 84:
	      ladder1(98,i);
	      break;
      case 99:
	      snake1(78,i);
	      break;
      case 96:
	      snake1(65,i);
	      break;
      case 94:
	      snake1(48,i);
	      break;
      case 90:
	      snake1(49,i);
	      break;
      case 81:
	      snake1(63,i);
	      break;
      case 66:
	      snake1(47,i);
	      break;
      case 57:
	      snake1(19,i);
	      break;
      case 43:
	      snake1(22,i);
	      break;
      case 36:
	      snake1(14,i);
	      break;
      case 11:
	      snake1(9,i);
	      break;
     }
    }
    outside1:
    delay(2000);
  }
  win();
}
