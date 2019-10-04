
// robotmoveView.h : interface of the CrobotmoveView class
//

#pragma once
#include"robot.h"//them thu vien robot

class CrobotmoveView : public CView
{
protected: // create from serialization only
	CrobotmoveView();
	DECLARE_DYNCREATE(CrobotmoveView)

// Attributes
public:
	CrobotmoveDoc* GetDocument() const;

// Operations
public:
	robot robot1;//khai bao class robot voi doi tuong la robot1

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CrobotmoveView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // debug version in robotmoveView.cpp
inline CrobotmoveDoc* CrobotmoveView::GetDocument() const
   { return reinterpret_cast<CrobotmoveDoc*>(m_pDocument); }
#endif

