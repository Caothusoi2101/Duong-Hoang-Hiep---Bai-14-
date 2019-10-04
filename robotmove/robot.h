#pragma once
class robot
{
private:
	int x1, x2,y1,y2,x3,y3,x4,y4;

public:
	robot(void);
	void thietlap(int mx1,int mx2,int my1,int my2);
	void background(CClientDC *pDC);
	void verobot(CClientDC *pDC);
	void robotLeft();
	void robotRight();
	void robotUp();
	void robotDown();
	void robotdcLeft(CClientDC *pDC);
	void robotdcRight(CClientDC *pDC);
	void robotdcUp(CClientDC *pDC);
	void robotdcDown(CClientDC *pDC);
	~robot(void);
};

