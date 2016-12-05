// 1401140228.h : main header file for the 1401140228 application
//

#if !defined(AFX_1401140228_H__1123BB39_0FA7_4143_A126_B6508FFFBED5__INCLUDED_)
#define AFX_1401140228_H__1123BB39_0FA7_4143_A126_B6508FFFBED5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy1401140228App:
// See 1401140228.cpp for the implementation of this class
//

class CMy1401140228App : public CWinApp
{
public:
	CMy1401140228App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy1401140228App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy1401140228App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_1401140228_H__1123BB39_0FA7_4143_A126_B6508FFFBED5__INCLUDED_)
