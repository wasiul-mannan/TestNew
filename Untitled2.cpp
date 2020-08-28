#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
void player();
void start();
void controls();
void credits();
void quit();
void quit()
{
	setbkcolor(15);
	setcolor(RED);
	settextstyle(1,0,4);
	outtextxy(215,350,"Quitting the game......");
	delay(100);
}
void first()
{
	int gdrive=DETECT,gmode;
    initgraph(&gdrive,&gmode,"c:\\turboc3\\bgi");
	setbkcolor(0);
	setcolor(BLUE);
	floodfill(100,100,3);
	settextstyle(1,0,5);
	outtextxy(100,100,"Antor Present...");
	delay(500);
	for(int i=1;i<=50;i++)
    {
        settextstyle(1,0,6);
        if(i%2==0)
        {
            setcolor(RED);
            outtextxy(250,250,"Car race");
            delay(600);
        }
        else
        {
            setcolor(BLACK);
            outtextxy(250,250,"Car race");
            delay(600);
        }
        setcolor(RED);
        for(i=0;i<=90;i++)
        {
            setfillstyle(2,RED);
            settextstyle(2,0,5);
            circle(500+i,460,3);
            outtextxy(500,439,"LOADING...");
            floodfill(500+i,463,RED);
            delay(20);
        }
    }
    setcolor(RED);
    settextstyle(8,0,1);
    outtextxy(100,350,"Press any key to continue.");
    delay(300);
    setcolor(WHITE);
    getch();
    cleardevice();
    player();
    getch();
    closegraph();
}
void player()
    {
        int ch=0,i=0,x=250,y=168,m,n,u;
        setbkcolor(WHITE);
        setcolor(RED);
        settextstyle(7,0,6);
        outtextxy(90,40,"CAR RACE");
        settextstyle(8,0,3);
        outtextxy(270,150,"START");
        outtextxy(270,200,"CREDIT");
        outtextxy(270,250,"CONTROLS");
        outtextxy(270,300,"QUIT");
        circle(x,y,4);
        circle(x,y+50,4);
        circle(x,y+100,4);
        circle(x,y+150,4);
        while(1)
        {
            if(ch==13&&y==168)
            {
                cleardevice();
                start();
                break;
            }
            if(ch==13&&y==218)
            {
                cleardevice();
		        credits();
                break;
            }
            if(ch==13&&y==318)
            {
                cleardevice();
                quit();
                exit(0);
            }
            if(ch==13&&y==268)
            {
                controls();
                break;
            }
            if(y>=168&&y<=318)
            {
                if(i==0)
                {
                    setfillstyle(1,12);
                    floodfill(x,y,RED);
                    i++;
                    n=y;
                }
            }
            if(kbhit())
            {
                ch=getch();
                if(ch==72)
                {
                    if(y>168)
                    {
                        y=y-50;
                    }
                }
                if(ch==80)
                {
                    if(y<318)
                    {
                        y=y+50;
                    }
                }
                if(y>=168&&y<=318)
                {
                    setfillstyle(1,12);
                    floodfill(x,y,RED);
                    if(y!=168&&y!=318)
                    {
                        setfillstyle(1,WHITE);
                        floodfill(x,n,RED);
                    }
                    n=y;
                }
            }
            if(ch==27)
            {
                exit(0);
            }
        }
        cleardevice();
        closegraph();
}
void start()
{
    char name[25];
    outtextxy(255,300,"Player's name : ");
    gotoxy(69,21);
    gets(name);
    void main();
}
void controls()
{
    setcolor(RED);
    cleardevice();
    settextstyle(1,0,4);
    outtextxy(250,60,"Controls");
    settextstyle(2,0,6);
    outtextxy(215,152,"1");
    rectangle(250,152,280,182);
    rectangle(248,150,282,184);
    rectangle(262,170,268,177);
    line(260,168,270,168);
    line(265,160,260,170);
    line(265,160,270,170);
    outtextxy(290,152,"Forward");
    outtextxy(215,212,"2");
    rectangle(250,212,280,242);
    rectangle(248,210,282,244);
    rectangle(262,217,268,225);
    line(260,228,270,228);
    line(265,236,260,227);
    line(265,236,270,227);
    outtextxy(290,212,"Backward");
    outtextxy(215,272,"3");
    rectangle(250,272,280,302);
    rectangle(248,270,282,304);
    rectangle(267,283,276,290);
    line(265,281,265,291);
    line(266,281,256,286);
    line(256,286,266,291);
    outtextxy(290,272,"Left");
    outtextxy(215,332,"4");
    rectangle(250,332,280,362);
    rectangle(248,330,282,364);
    rectangle(255,343,265,350);
    line(267,341,267,351);
    line(266,341,276,346);
    line(276,346,266,351);
    outtextxy(290,332,"Right");

    getch();
    cleardevice();
    player();
}
void credits()
{
    setbkcolor(5);
    setcolor(RED);
    settextstyle(2,0,6);
    outtextxy(250,259,"This game is designed by-------");
    outtextxy(250,279,"Wasiul Mannan");
    delay(500);
    getch();
    cleardevice();
    player();
}
void enemycar(int x,int y)
{
    setcolor(15);
    setfillstyle(XHATCH_FILL, RED);
    rectangle(x+1,y,x+35,y+40);
    setfillstyle(1,BLUE);
    rectangle(x+3,y+40,x+32,y+50);
    setfillstyle(1,BLACK);
    rectangle(x+1,y+43,x+2,y+48);
    setfillstyle(1,BLACK);
    rectangle(x+33,y+43,x+34,y+48);
}
void mycar(int x,int y)
{
    setcolor(15);
    setfillstyle(XHATCH_FILL, RED);
    rectangle(x+1,y+80,x+39,y+120);
    rectangle(x+10,y+80,x+30,y+120);
    setfillstyle(2,YELLOW);
    rectangle(x+4,y+65,x+35,y+80);
    setfillstyle(1,BLACK);
    rectangle(x+1,y+69,x+2,y+76);
    setfillstyle(1,BLACK);
    rectangle(x+37,y+69,x+38,y+76);
}
void myclear(int x,int y)
{
    setcolor(8);
    setfillstyle(XHATCH_FILL, RED);
    rectangle(x+1,y+80,x+39,y+120);
    rectangle(x+10,y+80,x+30,y+120);
    setfillstyle(2,YELLOW);
    rectangle(x+4,y+65,x+35,y+80);
    setfillstyle(1,BLACK);
    rectangle(x+1,y+69,x+2,y+76);
    setfillstyle(1,BLACK);
    rectangle(x+37,y+69,x+38,y+76);
}
void enemyclear(int x,int y)
{
    setcolor(8);
    setfillstyle(XHATCH_FILL, RED);
    rectangle(x+1,y,x+35,y+40);
    setfillstyle(XHATCH_FILL, BLUE);
    rectangle(x+3,y+40,x+32,y+50);
    setfillstyle(1,BLACK);
    rectangle(x+1,y+43,x+2,y+48);
    setfillstyle(1,BLACK);
    rectangle(x+33,y+43,x+34,y+48);
}
void road()
{
    char a[3];
    for (int i=3;i>=1;i--)
    {
        setfillstyle(1,8);
	bar3d(220,-1,410,getmaxy()+1,0,0);
	sprintf(a,"%d",i);
	outtextxy(300,200,a);
	delay(500);
    }
    if(a==0)
	setfillstyle(1,8);
	bar3d(220,-1,410,getmaxy()+1,0,0);
        settextstyle(1,0,5);
        outtextxy(300,200,"GO");
        delay(500);

}
void main()
{

    first();
    int gdrive=DETECT,gmode;
    initgraph(&gdrive,&gmode,"c:\\turboc3\\bgi");
    int x=300,y=350,ch,life=3,score=0;
    char choice;
    setbkcolor(15);
    setcolor(RED);
    settextstyle(1,0,5);
    outtextxy(150,120,"LET THE RACE ");
    outtextxy(190,160,"BEGIN....");
    delay(2000);
    for(int m=1;m<25;m++)
        for(int n=1;n<80;n++)
    {
        gotoxy(n,m);
        cout<<" ";
    }
    setbkcolor(CYAN);
    setcolor(15);
    gotoxy(5,21);
    cout<<"Dedicated to....";
    gotoxy(5,22);
    cout<<"TEC";

    road();
    setcolor(RED);
    gotoxy(5,15);
    cout<<"Press <Esc> to exit";
    for(int level=1;(level<=3)&&(life>0);level++)
    {
        if(level==1)
        {
            gotoxy(5,5);
            cout<<"Your race starts now.";
            gotoxy(5,7);
            cout<<"All the best.";
            delay(1500);
            gotoxy(5,5);
            cout<<"                                   ";
            gotoxy(5,7);
            cout<<"                          ";
        }
        else
        {
            gotoxy(5,9);
            cout<<"Next level";
            delay(1000);
            gotoxy(5,9);
            cout<<"                ";
            setbkcolor(GREEN);
            if(level==3)
            {
                setbkcolor(BROWN);
            }
        }
        for(int i=0;(i<15)&&(life>0);i++)
        {
            if((level==3)&&(i==14))
            {
                settextstyle(1,0,5);
                outtextxy(220,150,"You won");
                gotoxy(35,16);
                cout<<"Continue <Y/N> ";
                choice=getch();
                if((choice=='Y')||(choice=='y'))
                {
                    main();
                }
                else if((choice=='N')||(choice=='n'))
                {
                    cleardevice();
                    quit();
                    exit(0);
                }
            }
            setcolor(RED);
            gotoxy(55,10);
            cout<<"Level = "<<level;
            gotoxy(55,18);
            cout<<"Life = "<<life;
            gotoxy(55,24);
            cout<<"Score = "<<score;
            int accident=0;
            int y1=1,x1=250+((rand()%3)*50);
            int y2=1,x2=250+((rand()%3)*50);
            score+=10;
            while(y1<getmaxy()+1)
            {
                enemyclear(x1,y1);
                enemyclear(x2,y2);
                y1++;
                y2++;
                if(accident==1)
                    break;
                enemycar(x1,y1);
                enemycar(x2,y2);
                mycar(x,y);
                delay(3-level);
                if(kbhit())
                {
                    mycar(x,y);
		    ch=getch();
                    switch(ch)
                    {
                    case 27:
                        myclear(x,y);
                        cleardevice();
                        player();
                        break;
                    case 75:
                        myclear(x,y);
                        if(x>250)
                            x=x-50;
                        if((x==x1)||(x==x2))
                            if((y+14==y1)||(y+14==y2))
                        {
                            accident=1;
                            x=x+50;
                            mycar(x,y);

                            goto Next1;
                        }
                        mycar(x,y);
                        break;
                    case 77:
                        myclear(x,y);
                        if(x<350)
                            x=x+50;
                        if((x==x1)||(x==x2))
                            if((y+14==y1)||(y+14==y2))
                        {
                             accident=1;
                            x=x-50;
                            mycar(x,y);

                            goto Next1;
                        }
                        mycar(x,y);
                        break;
                    case 72:
			myclear(x,y);
                        if(y>0)
			    y=y-5;
                        if((y+14==y1)||(y+14==y2))
                        {
                             accident=1;
                            mycar(x,y);

                            goto Next1;
                        }
                        mycar(x,y);
                        break;
                    case 80:
                        myclear(x,y);
                        if(y<getmaxy()-150)
                            y=y+5;
                        mycar(x,y);
                        break;

                    }
                }
                if((x==x1)||(x==x2))
                            if((y+14==y1)||(y+14==y2))
                                accident=1;
        Next1 :
            if(accident==1)
            {
                life=life-1;
                if(life==0)
                {
                    settextstyle(1,0,5);
                    outtextxy(200,150,"Game Over...");
                    gotoxy(35,16);
                    sleep(1);
                    cout<<"Continue <Y/N> ";
                    choice=getch();
                    if((choice=='Y')||(choice=='y'))
                    {
                        main();
                    }
                    else if((choice=='N')||(choice=='n'))
                    {
                        cleardevice();
                        quit();
                        exit(0);
                    }

                }
                gotoxy(5,5);
                cout<<"Life is getting low";
                delay(500);
                gotoxy(5,5);
                cout<<"               ";


            }

            }
        }

    }
    getch();
}

