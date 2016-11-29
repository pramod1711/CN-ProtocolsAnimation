#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<iostream.h>
char a[6];
int flag;

void in_graph()
{
	int gd=0,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
}
void mainscrn()
{
	rectangle(3,3,635,475);
	rectangle(10,10,625,465);
	while(!kbhit())
	{
		delay(150);
		setcolor(GREEN);
		rectangle(75,200,540,235);
		settextstyle(4,0,4);
		outtextxy(20,150,"''COMPUTER NETWORK PROTOCOLS''");

		settextstyle(2,0,4);
		setcolor(RED);
		outtextxy(90,250,"PROJECT BY:");

		settextstyle(1,0,1);
		setcolor(LIGHTBLUE);
		outtextxy(140,260,"i.  KIRAN POLKAR          Roll-38");
		outtextxy(140,280,"ii. PRAMOD POTDAR         ROll-40");
		outtextxy(140,300,"iii.PRASHANT RANGATE      ROll-47");

		for(int i=4;i<10;i++)
		{
		delay(150);
		setcolor(i+2);
		settextstyle(3,0,2);
		outtextxy(300,400," Press Any Key to continue... ");
		}
	}
	cleardevice();
}
//creates 2 pcs and the base line
void basic()
{
	setcolor(WHITE);
	rectangle(160,80,200,120);
	rectangle(158,78,202,122);
	rectangle(480,80,520,120);
	rectangle(478,78,522,122);
	rectangle(150,130,210,140);
	rectangle(470,130,530,140);

	line(180,160,180,460);
	line(500,160,500,460);

	setfillstyle(7,8);
	floodfill(155,135,15);
	floodfill(484,135,15);
}

void SnW_name()
{
	settextstyle(3,0,4);
	outtextxy(160,20,"STOP AND WAIT PROTOCOL");
	settextstyle(0,0,0);
}
void stop_n_wait()
{
	int i,x=190,y=160;
	for(int j=1;j<5;j++)
	{
		for(i=0;i<20;i++)
		{
		settextstyle(0,0,0);
		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);

		cleardevice();
		basic();
		SnW_name();
		x+=15;
		y+=1;

	}
	outtextxy(x+20,y,"PACKET RECEIVED");
	delay(2000);

	y+=10;
	for(i=0;i<20;i++)
	{

		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,5);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);

		cleardevice();
		basic();
		SnW_name();
		x-=15;
		y+=1;

	}
	outtextxy(x-110,y,"ACK RECEIVED");
	y+=10;
	delay(2000);

	}
	cleardevice();
}

void SnWA_name()
{
	settextstyle(3,0,4);
	outtextxy(120,20,"STOP AND WAIT ARQ PROTOCOL");
	settextstyle(0,0,0);
}

void stop_n_wait_arq()
{
	int i,x=190,y=160,cx,dx,ex,gx;

	for(int j=1;j<=1;j++)
	{
	for(i=0;i<20;i++)
	{
		settextstyle(0,0,0);
		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);
		cleardevice();
		basic();
		SnWA_name();
		x+=15;
		y+=1;

	}

	outtextxy(x+20,y,"PACKET RECEIVED");
	delay(2000);

	y+=20;
	for(i=0;i<20;i++)
	{

		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,4);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);
		cleardevice();
		basic();
		SnWA_name();
		x-=15;
		cx=x;          //use this to start a packet from 2nd iteration
		y+=1;
		dx=y;          //use this to start a ack from 2nd iteration

	}
	outtextxy(x-110,y,"ACK RECEIVED");
	y+=20;
	delay(2000);

	}
	 //method=1 is completed;

	 //start method=2

	for(j=2;j>1;j--)
	{
	for(i=0;i<10;i++)
	{

		settextstyle(0,0,0);
		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);
		cleardevice();
		SnWA_name();
		basic();

		x+=15;
		y+=1;

	}
	setcolor(RED);
	outtextxy(x,y,"PACKET LOST");
	setcolor(15);
	delay(2000);
       }

       x=cx;
       y=dx;

	for( j=2;j>1;j--)
	{
	for(i=0;i<20;i++)
	{
		settextstyle(0,0,0);
		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);
		cleardevice();
		SnWA_name();
		basic();
		x+=15;
		y+=1;
	}

	outtextxy(x+20,y,"PACKET RECEIVED");
	delay(2000);

	y+=20;
	for(i=0;i<20;i++)
	{

		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,4);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);

		cleardevice();
		SnWA_name();
		basic();
		x-=15;
		ex=x;
		y+=1;
		gx=y;

	}
	outtextxy(x-110,y,"ACK RECEIVED");
	y+=20;
	delay(2000);

	}
	//method=2 is completed

	//start method=3;
	for( j=3;j>2;j--)
	{
	for(i=0;i<20;i++)
	{

		settextstyle(0,0,0);
		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(30);
		cleardevice();
		SnWA_name();
		basic();
		x+=15;
		y+=1;

	}

	outtextxy(x+20,y,"PACKET RECEIVED");
	delay(2000);

	y+=20;

	for(i=0;i<10;i++)
	{
		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,4);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);
		cleardevice();
		SnWA_name();
		basic();
		x-=15;
		y+=1;

	}
	setcolor(RED);
	outtextxy(x,y,"ACK LOST");
	setcolor(15);
	y+=20;
	delay(1000);


	x=ex;
	y=gx;
	for( j=3;j>2;j--)
	{
	for(i=0;i<20;i++)
	{
		settextstyle(0,0,0);
		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);
		cleardevice();
		SnWA_name();
		basic();
		x+=15;
		ex=x;
		y+=1;
		gx=y;

	}

	outtextxy(x+20,y,"PACKET RECEIVED");
	delay(2000);

	y+=20;

	for(i=0;i<20;i++)
	{

		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,4);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);

		cleardevice();
		SnWA_name();
		basic();

		x-=15;
		y+=1;

	}
	outtextxy(x-120,y,"ACK  RECEIVED");
	y+=30;
	delay(1000);
	}

	}
  cleardevice();
}

void simple_nm()
{
	settextstyle(3,0,4);
	outtextxy(200,20,"SIMPLEST PROTOCOL");
	settextstyle(0,0,0);
}
void simplest()
{

	int i,x=190,y=160;
	for(int j=1;j<6;j++)
	{
	for(i=0;i<20;i++)
	{
		settextstyle(0,0,0);
		delay(50);
		sprintf(a,"%d",j);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,a);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		int a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);

		cleardevice();
		simple_nm();
		basic();
		x+=15;
		y+=1;

	}

	outtextxy(x+20,y,"PACKET RECEIVED");
	delay(2000);
	x=190;

	y+=20;
	cleardevice();

	}

}
void selective_nm()
{
	settextstyle(3,0,4);
	outtextxy(141,20,"SELECTIVE REAPEAT PROTOCOL");
	settextstyle(0,0,0);
}
void selective()
{

	int i,x=190,y=160,p=190,q=180,e=190;
	int c=190,d=200,z=1,a,b,j,r;
	char f[4];

	for(j=1;j<10;j+=3)
	{
	for(i=0;i<20;i++)
	{
		if(j==1)
		{
		settextstyle(0,0,0);
		delay(50);
		z=j;

		sprintf(f,"%d",z);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,f);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);

		x+=15;
		y+=1;

		z++;
		sprintf(f,"%d",z);
		rectangle(p-10,q,p,q+10);
		outtextxy(p-7,q+2,f);

		rectangle(p,q,p+20,q+10);
		setfillstyle(9,2);
		a=p+3,b=q+3;
		floodfill(a,b,15);
		delay(60);

		p+=15;
		q+=1;

		z++;
		sprintf(f,"%d",z);
		rectangle(c-10,d,c,d+10);
		outtextxy(c-7,d+2,f);

		rectangle(c,d,c+20,d+10);
		setfillstyle(9,2);
		a=c+3,b=d+3;
		floodfill(a,b,15);
		delay(60);

		c+=15;
		d+=1;

		cleardevice();
		selective_nm();
		basic();
		}


		if(j==4)
		{
		settextstyle(0,0,0);
		delay(50);
		z=j;


		sprintf(f,"%d",z);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,f);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);

		x+=15;
		y+=1;

		z++;
		sprintf(f,"%d",z);
		rectangle(p-10,q,p,q+10);
		outtextxy(p-7,q+2,f);

		rectangle(p,q,p+20,q+10);
		setfillstyle(9,2);
		a=p+3,b=q+3;
		floodfill(a,b,15);
		delay(60);

		p+=5;
		q+=1;

		z++;
		sprintf(f,"%d",z);
		rectangle(c-10,d,c,d+10);
		outtextxy(c-7,d+2,f);

		rectangle(c,d,c+20,d+10);
		setfillstyle(9,2);
		a=c+3,b=d+3;
		floodfill(a,b,15);
		delay(60);

		c+=15;
		d+=1;

		cleardevice();
		selective_nm();
		basic();
		}


		if(j==7)
		{
		settextstyle(0,0,0);
		delay(50);
		z=j;

		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,"5");

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);

		x+=15;
		y+=1;

		sprintf(f,"%d",z);
		rectangle(p-10,q,p,q+10);
		outtextxy(p-7,q+2,f);

		rectangle(p,q,p+20,q+10);
		setfillstyle(9,2);
		a=p+3,b=q+3;
		floodfill(a,b,15);
		delay(60);

		p+=15;
		q+=1;

		z++;
		sprintf(f,"%d",z);
		rectangle(c-10,d,c,d+10);
		outtextxy(c-7,d+2,f);

		rectangle(c,d,c+20,d+10);
		setfillstyle(9,2);
		a=c+3,b=d+3;
		floodfill(a,b,15);
		delay(60);

		c+=15;
		d+=1;

		r=d+20;
		z++;
		sprintf(f,"%d",z);
		rectangle(e-10,r,e,r+10);
		outtextxy(e-7,r+2,f);

		rectangle(e,r,e+20,r+10);
		setfillstyle(9,2);
		a=e+3,b=r+3;
		floodfill(a,b,15);
		delay(60);

		e+=15;
		r+=1;

		cleardevice();
		selective_nm();
		basic();
		}

	}
	if(j==1||j==7)
	{
	outtextxy(x+20,y,"PACKET RECEIVED");
	outtextxy(p+20,q,"PACKET RECEIVED");
	outtextxy(c+20,d,"PACKET RECEIVED");
	if(j==7)
	outtextxy(c+20,r,"PACKET RECEIVED");
	}
	if(j==4)
	{
	outtextxy(x+20,y,"PACKET RECEIVED");
	setcolor(RED);
	outtextxy(p+20,q,"PACKET LOST");
	setcolor(WHITE);
	outtextxy(c+20,d,"PACKET RECEIVED");
	}
	delay(2000);
	x=190;
	p=190;

	y+=40;
	q+=40;
	d+=20;

	if(j==1)
	{
	for(i=0;i<20;i++)
	{

		delay(50);
		rectangle(c-10,d,c,d+10);
		outtextxy(c-7,d+2,"4");

		rectangle(c,d,c+20,d+10);
		setfillstyle(9,5);
		int a=c+3,b=d+3;
		floodfill(a,b,15);
		delay(60);

		cleardevice();
		basic();
		selective_nm();
		c-=15;
		d+=1;

	}
	outtextxy(c-110,d,"ACK RECEIVED");
	delay(2000);
	}

	if(j==4)
	{
	for(i=0;i<20;i++)
	{
		delay(50);
		rectangle(c-10,d,c,d+10);
		outtextxy(c-7,d+2,"5");

		rectangle(c,d,c+20,d+10);
		setfillstyle(7,4);
		int a=c+3,b=d+3;
		floodfill(a,b,15);
		delay(60);

		cleardevice();
		basic();
		selective_nm();
		c-=15;
		d+=1;

	}
	outtextxy(c-120,d,"NACK RECEIVED");
	delay(2000);
	}
	cleardevice();

	}
}

void gobackn_nm()
{
	settextstyle(3,0,4);
	outtextxy(180,20,"GO BACK N PROTOCOL");
	settextstyle(0,0,0);
}
void gobackn()
{

	int i,x=190,y=160,p=190,q=180,e=190;
	int c=190,d=200,z=1,a,b,j,r;
	char f[4];

      for(j=1;j<10;j+=3)
      {
	for(i=0;i<20;i++)
	{
		if(j==1)
		{
		settextstyle(0,0,0);
		delay(50);
		z=j;


		sprintf(f,"%d",z);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,f);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);

		x+=15;
		y+=1;

		z++;
		sprintf(f,"%d",z);
		rectangle(p-10,q,p,q+10);
		outtextxy(p-7,q+2,f);

		rectangle(p,q,p+20,q+10);
		setfillstyle(9,2);
		a=p+3,b=q+3;
		floodfill(a,b,15);
		delay(60);

		p+=15;
		q+=1;

		z++;
		sprintf(f,"%d",z);
		rectangle(c-10,d,c,d+10);
		outtextxy(c-7,d+2,f);

		rectangle(c,d,c+20,d+10);
		setfillstyle(9,2);
		a=c+3,b=d+3;
		floodfill(a,b,15);
		delay(60);

		c+=15;
		d+=1;

		cleardevice();
		gobackn_nm();
		basic();
		}


		if(j==4)
		{
		settextstyle(0,0,0);
		delay(50);
		z=j;


		sprintf(f,"%d",z);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,f);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);

		x+=5;
		y+=1;

		z++;
		sprintf(f,"%d",z);
		rectangle(p-10,q,p,q+10);
		outtextxy(p-7,q+2,f);

		rectangle(p,q,p+20,q+10);
		setfillstyle(9,2);
		a=p+3,b=q+3;
		floodfill(a,b,15);
		delay(60);

		p+=15;
		q+=1;

		z++;
		sprintf(f,"%d",z);
		rectangle(c-10,d,c,d+10);
		outtextxy(c-7,d+2,f);

		rectangle(c,d,c+20,d+10);
		setfillstyle(9,2);
		a=c+3,b=d+3;
		floodfill(a,b,15);
		delay(60);

		c+=15;
		d+=1;

		cleardevice();
		gobackn_nm();
		basic();
		}


		if(j==7)
		{
		settextstyle(0,0,0);
		delay(50);
		z=4;


		sprintf(f,"%d",z);
		rectangle(x-10,y,x,y+10);
		outtextxy(x-7,y+2,f);

		rectangle(x,y,x+20,y+10);
		setfillstyle(9,2);
		a=x+3,b=y+3;
		floodfill(a,b,15);
		delay(60);

		x+=15;
		y+=1;

		z++;
		sprintf(f,"%d",z);
		rectangle(p-10,q,p,q+10);
		outtextxy(p-7,q+2,f);

		rectangle(p,q,p+20,q+10);
		setfillstyle(9,2);
		a=p+3,b=q+3;
		floodfill(a,b,15);
		delay(60);

		p+=15;
		q+=1;

		z++;
		sprintf(f,"%d",z);
		rectangle(c-10,d,c,d+10);
		outtextxy(c-7,d+2,f);

		rectangle(c,d,c+20,d+10);
		setfillstyle(9,2);
		a=c+3,b=d+3;
		floodfill(a,b,15);
		delay(60);

		c+=15;
		d+=1;
		r=d+20;

		z++;
		sprintf(f,"%d",z);
		rectangle(e-10,r,e,r+10);
		outtextxy(e-7,r+2,f);

		rectangle(e,r,e+20,r+10);
		setfillstyle(9,2);
		a=e+3,b=r+3;
		floodfill(a,b,15);
		delay(60);

		e+=15;
		r+=1;

		cleardevice();
		gobackn_nm();
		basic();
		}

	}
	if(j==1||j==7)
	{
	outtextxy(x+20,y,"PACKET RECEIVED");
	outtextxy(p+20,q,"PACKET RECEIVED");
	outtextxy(c+20,d,"PACKET RECEIVED");
	if(j==7)
	outtextxy(c+20,r,"PACKET RECEIVED");
	}
	if(j==4)
	{
	outtextxy(p+20,q,"PACKET RECEIVED");
	setcolor(RED);
	outtextxy(x+20,y,"PACKET LOST");
	setcolor(WHITE);
	outtextxy(c+20,d,"PACKET RECEIVED");
	}
	delay(2000);
	x=190;
	p=190;

	y+=40;
	q+=40;
	d+=20;

	if(j==1)
	{
	for(i=0;i<20;i++)
	{

		delay(50);
		rectangle(c-10,d,c,d+10);
		outtextxy(c-7,d+2,"4");

		rectangle(c,d,c+20,d+10);
		setfillstyle(9,5);
		int a=c+3,b=d+3;
		floodfill(a,b,15);
		delay(60);

		cleardevice();
		basic();
		gobackn_nm();
		c-=15;
		d+=1;

	}
	outtextxy(c-110,d,"ACK RECEIVED");
	delay(2000);
	}

	if(j==4)
	{
	for(i=0;i<20;i++)
	{

		delay(50);
		rectangle(c-10,d,c,d+10);
		outtextxy(c-7,d+2,"4");

		rectangle(c,d,c+20,d+10);
		setfillstyle(9,4);
		int a=c+3,b=d+3;
		floodfill(a,b,15);
		delay(60);

		cleardevice();
		basic();
		gobackn_nm();
		c-=15;
		d+=1;

	}
	outtextxy(c-120,d,"NACK RECEIVED");
	delay(2000);
	}
	cleardevice();

	}
}
void list()
{
	char ch;
	cleardevice();
	do
	{

	settextstyle(1,0,5);
	setcolor(YELLOW);
	outtextxy(150,50,"LIST OF PROTOCOLS");

	settextstyle(1,0,3);
	setcolor(LIGHTGREEN);
	outtextxy(170,120,"NOISELESS");

	settextstyle(0,0,0);
	setcolor(GREEN);
	outtextxy(190,160,"1.SIMPLEST");
	outtextxy(190,180,"2.STOP & WAIT ");

	settextstyle(1,0,3);
	setcolor(LIGHTGREEN);
	outtextxy(170,200,"NOISY");

	settextstyle(0,0,0);
	setcolor(GREEN);
	outtextxy(190,240,"3.STOP & WAIT ARQ");
	outtextxy(190,260,"4.GO BACK N");
	outtextxy(190,280,"5.SELECTIVE REAPEAT");
	outtextxy(190,300,"6.EXIT");

	settextstyle(0,0,1);
	setcolor(WHITE);
	outtextxy(190,320,"ENTER YOUR CHOICE :");
	ch=getche();
	sprintf(a,"%c",ch);
	outtextxy(380,320,a);
	switch(ch)
	{
	case '1':simplest();break;

	case '2':stop_n_wait();break;

	case '3':stop_n_wait_arq();break;

	case '4':gobackn();break;

	case '5':selective();break;

	case '6':exit(0);

	default :cleardevice();
		setcolor(RED);
		outtextxy(200,200,"!!!!ENTER VALID CHIOICE!!!!");
		delay(1000);
		cleardevice();
		list();
		break;
      }

      }while(ch!=6);

      cleardevice();

}
void login()
{
	char un1[10]="admin",pass1[10]="admin";
	char un[10],pass[10];
	int Try=1;
	do
	{
	gotoxy(25,13);
	cout<<"To Sign In ";
	gotoxy(27,15);
	cout<<"User Name :-  ";
	gotoxy(27,17);
	cout<<"Password  :-  ";

	gotoxy(40,15);
	int j=0;
	do
	{
		un[j]=getche();

		if(un[j]==27)
		exit(0);

		else if(un[j]==13)
		break;

		else if(un[j]==8 && j>0)
		{
			cout<<"\b";
			un[j]='\0';
			cout<<un[j];
			j--;
			cout<<"\b";
		}
		else if(isalpha(un[j])==0)
		{
			cleardevice();
			gotoxy(30,15);
			cout<<"Please enter only alphabets";
			delay(1000);
			cleardevice();
			login();
		}

		else
		{
			cout<<un[j];
			j++;
		}

	}while(un[j]!=13);
	un[j]='\0';

	gotoxy(40,17);
	int i=0;
	do
	{
		pass[i]=getch();

		if(pass[i]==27)
		exit(0);

		if(pass[i]==13)
		break;
		else if(pass[i]==8 && i>0)
		{
			cout<<"\b";
			pass[i]='\0';
			cout<<pass[i];
			i--;
			cout<<"\b";
		}

		else
		{
			cout<<"#";
			i++;
		}
	}while(pass[i]!=13);
	pass[i]='\0';

	if((strcmp(pass,pass1)==0) && (strcmp(un,un1)==0))
	{
		flag=1;

	}
	else
	{
		flag=0;
		cleardevice();
		gotoxy(30,15);
		cout<<"INVALID PASSWORD OR USER NAME";
		delay(1000);
		cleardevice();
		Try +=1;
	}


	}while(flag!=1 && Try<=3);

	if(Try>3)
	{
		setcolor(RED);
		gotoxy(35,15);
		cout<<"TRY AGAIN LATER";
		delay(1000);
		setcolor(WHITE);
		exit(0);

	}
	else
	{
		cleardevice();
		gotoxy(35,15);
		cout<<"ACCESS GRANTED";
		delay(1000);
		list();
	}
}

void loginscreen()
{
       char g;
       do
       {
       gotoxy(20,10);
       cout<<"1> Login ";
       gotoxy(20,13);
       cout<<"2> Exit ";
       gotoxy(20,17);
       cout<<"Enter your choice : ";
       g=getche();

       switch(g)
       {
		case '1': cleardevice();login();break;
		case '2': exit(0);
		default: cout<<"Enter Valid choice";
			delay(1000);
			cleardevice();
			loginscreen();
			break;

       }

       }while(g!=2);
}

void main()
{
	in_graph();
	mainscrn();
	getch();
	loginscreen();
	closegraph();
}
