
// robotmoveView.cpp : implementation of the CrobotmoveView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "robotmove.h"
#endif

#include "robotmoveDoc.h"
#include "robotmoveView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CrobotmoveView

IMPLEMENT_DYNCREATE(CrobotmoveView, CView)

BEGIN_MESSAGE_MAP(CrobotmoveView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CrobotmoveView construction/destruction

CrobotmoveView::CrobotmoveView()
{
	// TODO: add construction code here
	robot1.thietlap(370,450,150,250);//thiet lap vi tri ban dau cho robot

}

CrobotmoveView::~CrobotmoveView()
{
}

BOOL CrobotmoveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CrobotmoveView drawing

void CrobotmoveView::OnDraw(CDC* /*pDC*/)
{
	CrobotmoveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);//ve robot hien thi ban dau thi khoi chay chuong trinh

	int r = 0;	
	int g=0;
	int b = 0;
	CPen *pen;
	pen=new CPen(PS_SOLID,1,RGB(255,255,255));
    pDC.SelectObject(pen);//chon but ve
	CBrush *newbrush=new CBrush(RGB(r,g,b));
	pDC.SelectObject(newbrush);
	robot1.verobot(&pDC);
	// TODO: add draw code for native data here
}


// CrobotmoveView printing

BOOL CrobotmoveView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CrobotmoveView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CrobotmoveView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CrobotmoveView diagnostics

#ifdef _DEBUG
void CrobotmoveView::AssertValid() const
{
	CView::AssertValid();
}

void CrobotmoveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CrobotmoveDoc* CrobotmoveView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CrobotmoveDoc)));
	return (CrobotmoveDoc*)m_pDocument;
}
#endif //_DEBUG


// CrobotmoveView message handlers


void CrobotmoveView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default
	int key=nChar;//bien key de luu ma ascii thi an 4 nut di chuyen
	if(key==37)//dieu kien rotbot di trai khi an nut mui ten trai
	{
		CClientDC pDC(this);
		robot1.robotdcLeft(&pDC);
		
	}
	else if(key==39)//dieu kien rotbot di phai khi an nut mui ten phai
	{
		CClientDC pDC(this);
		robot1.robotdcRight(&pDC);
	}
	else if(key==38)//dieu kien rotbot di len khi an nut mui ten len
	{
		CClientDC pDC(this);
		robot1.robotdcUp(&pDC);

	}
	else if(key==40)//dieu kien rotbot di xuong khi an nut mui ten xuong
	{
		CClientDC pDC(this);
		robot1.robotdcDown(&pDC);
	}
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
