#if !defined(AFX_IN_H__D64EA2E3_3382_410D_A10D_462ED9E3190D__INCLUDED_)
#define AFX_IN_H__D64EA2E3_3382_410D_A10D_462ED9E3190D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// IN.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CIN dialog

class CIN : public CDialog
{
// Construction
public:
	CIN(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CIN)
	enum { IDD = IDD_DIALOG1 };
	int		m_1;
	int		m_2;
	int		m_3;
	int		m_4;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIN)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CIN)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IN_H__D64EA2E3_3382_410D_A10D_462ED9E3190D__INCLUDED_)
