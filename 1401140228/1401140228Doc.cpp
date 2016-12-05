// 1401140228Doc.cpp : implementation of the CMy1401140228Doc class
//

#include "stdafx.h"
#include "1401140228.h"

#include "1401140228Doc.h"
#include "IN.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy1401140228Doc

IMPLEMENT_DYNCREATE(CMy1401140228Doc, CDocument)

BEGIN_MESSAGE_MAP(CMy1401140228Doc, CDocument)
	//{{AFX_MSG_MAP(CMy1401140228Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy1401140228Doc construction/destruction

CMy1401140228Doc::CMy1401140228Doc()
{
	// TODO: add one-time construction code here

}

CMy1401140228Doc::~CMy1401140228Doc()
{
}

BOOL CMy1401140228Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy1401140228Doc serialization

void CMy1401140228Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMy1401140228Doc diagnostics

#ifdef _DEBUG
void CMy1401140228Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy1401140228Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy1401140228Doc commands
