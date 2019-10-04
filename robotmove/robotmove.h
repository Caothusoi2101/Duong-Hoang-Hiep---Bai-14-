
// robotmove.h : main header file for the robotmove application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CrobotmoveApp:
// See robotmove.cpp for the implementation of this class
//

class CrobotmoveApp : public CWinApp
{
public:
	CrobotmoveApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CrobotmoveApp theApp;
