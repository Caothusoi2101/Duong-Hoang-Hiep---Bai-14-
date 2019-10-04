#include "stdafx.h"
#include "robot.h"

robot::robot(void)
{
}
void robot::thietlap(int mx1,int mx2,int my1,int my2)// ham thiet lap vi tri cho robot
{
	x1=mx1;y1=my1;x2=mx2;y2=my2;
}

void robot::verobot(CClientDC *pDC)//ham ve robot
{
	pDC->Ellipse(x1+20,y1-50,x2-70,y2-75);//ve tai
	pDC->Ellipse(x1+70,y1-50,x2-20,y2-75);//ve tai


	pDC->Ellipse(x1+0,y1+70,x2-50,y2+20);//ve chan
	pDC->Ellipse(x1+50,y1+70,x2+0,y2+20);//ve chan

	pDC->Ellipse(x1,y1-30,x2,y2-50);//ve dau

	pDC->Rectangle(x1,y1,x2,y2);//ve than

	pDC->Rectangle(x1+80,y1+10,x2+20,y2-30);//ve tay
	pDC->Rectangle(x1-20,y1+10,x2-80,y2-30);//ve tay
	
}
void robot::background(CClientDC *pDC)
{
	pDC->Rectangle(0,0,1400,800);
}
void robot::robotLeft()//ham dich trai
{
	x1-=10;x2-=10;
}
void robot::robotRight()//ham dich phai
{
	x1+=10;x2+=10;
}
void robot::robotUp()//ham dich len
{
	y1-=10;y2-=10;
}
void robot::robotDown()//ham dich xuong
{
	y1+=10;y2+=10;
}
void robot::robotdcLeft(CClientDC *pDC)//ham di chuyen + ve mau :ben trai
{
	int r=0,r1=255;
	int g=0,g1=255;
	int b=0,b1=255;

	CPen *pen;
	pen=new CPen(PS_SOLID,1,RGB(r1,g1,b1));

	CBrush *newbrush=new CBrush(RGB(r,g,b));
	CBrush *oldbrush;
	int i=0;
	while (i<10)
	{
		pDC->SelectObject(pen);
		verobot(pDC);
		robotLeft();
		oldbrush=pDC->SelectObject(newbrush);
		verobot(pDC);
		pDC->SelectObject(oldbrush);

		Sleep(50);
		i++;
	}
}
void robot::robotdcRight(CClientDC *pDC)//ham di chuyen + ve mau :ben phai
{
	int r = 0, r1 = 255;
	int g = 0, g1 = 255;
	int b = 0, b1 = 255;

	CPen *pen;
	pen=new CPen(PS_SOLID,1,RGB(r1,g1,b1));

	CBrush *newbrush=new CBrush(RGB(r,g,b));
	CBrush *oldbrush;
	int i=0;
	while (i<10)
	{
		pDC->SelectObject(pen);
		verobot(pDC);
		robotRight();
		oldbrush=pDC->SelectObject(newbrush);
		verobot(pDC);
		pDC->SelectObject(oldbrush);

		Sleep(50);
		i++;
	}
}
void robot::robotdcUp(CClientDC *pDC)//ham di chuyen + ve mau :ben tren
{
	int r=0,r1=255;
	int g=0,g1=255;
	int b=0,b1=255;

	CPen *pen;
	pen=new CPen(PS_SOLID,1,RGB(r1,g1,b1));

	CBrush *newbrush=new CBrush(RGB(r,g,b));
	CBrush *oldbrush;
	int i=0;
	while (i<10)
	{
		pDC->SelectObject(pen);
		verobot(pDC);
		robotUp();
		oldbrush=pDC->SelectObject(newbrush);
		verobot(pDC);
		pDC->SelectObject(oldbrush);

		Sleep(50);
		i++;
	}
}
void robot::robotdcDown(CClientDC *pDC)//ham di chuyen + ve mau :ben duoi
{
	int r=0,r1=255;
	int g=0,g1=255;
	int b=0,b1=255;

	CPen *pen;
	pen=new CPen(PS_SOLID,1,RGB(r1,g1,b1));

	CBrush *newbrush=new CBrush(RGB(r,g,b));
	CBrush *oldbrush;
	int i=0;
	while (i<10)
	{
		pDC->SelectObject(pen);
		verobot(pDC);
		robotDown();
		oldbrush=pDC->SelectObject(newbrush);
		verobot(pDC);
		pDC->SelectObject(oldbrush);

		Sleep(50);
		i++;
	}
}
robot::~robot(void)
{
}
