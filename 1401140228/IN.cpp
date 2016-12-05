// IN.cpp : implementation file
//

#include "stdafx.h"
#include "1401140228.h"
#include "IN.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CIN dialog


CIN::CIN(CWnd* pParent /*=NULL*/)
	: CDialog(CIN::IDD, pParent)
{
	//{{AFX_DATA_INIT(CIN)
	m_1 = 0;
	m_2 = 0;
	m_3 = 0;
	m_4 = 0;
	//}}AFX_DATA_INIT
}


void CIN::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CIN)
	DDX_Text(pDX, IDC_EDIT1, m_1);
	DDX_Text(pDX, IDC_EDIT2, m_2);
	DDX_Text(pDX, IDC_EDIT3, m_3);
	DDX_Text(pDX, IDC_EDIT4, m_4);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CIN, CDialog)
	//{{AFX_MSG_MAP(CIN)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CIN message handlers
