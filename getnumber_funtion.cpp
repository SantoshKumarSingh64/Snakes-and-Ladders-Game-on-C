int getnumber(int j)
{
    time_t t;
    int i;
    char ch;
    if(j==0)
    {
       fflush(stdin);
       ch=getch();
    }
    if(ch==27)
      exit(0);
    srand((unsigned) time(&t));
    i=rand()%7;
    while(i==0)
	i=rand()%7;
    return i;
}
