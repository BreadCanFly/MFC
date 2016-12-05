// 1401140228View.cpp : implementation of the CMy1401140228View class
//

#include "stdafx.h"
#include "1401140228.h"
#include "1401140228Doc.h"
#include "1401140228View.h"
#include "IN.h"
#ifdef _DEBUG
#define new DEBUG_NEW

#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy1401140228View

IMPLEMENT_DYNCREATE(CMy1401140228View, CView)

BEGIN_MESSAGE_MAP(CMy1401140228View, CView)
	//{{AFX_MSG_MAP(CMy1401140228View)
	ON_COMMAND(ID_MENUITEM32771, OnMenuitem32771)
	ON_COMMAND(ID_MENUITEM32772, OnMenuitem32772)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy1401140228View construction/destruction

CMy1401140228View::CMy1401140228View()
{
	// TODO: add construction code here


}

CMy1401140228View::~CMy1401140228View()
{
}

BOOL CMy1401140228View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy1401140228View drawing

void CMy1401140228View::OnDraw(CDC* pDC)
{
	CMy1401140228Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);


	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMy1401140228View printing

BOOL CMy1401140228View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy1401140228View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy1401140228View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMy1401140228View diagnostics

#ifdef _DEBUG
void CMy1401140228View::AssertValid() const
{
	CView::AssertValid();
}

void CMy1401140228View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy1401140228Doc* CMy1401140228View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy1401140228Doc)));
	return (CMy1401140228Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy1401140228View message handlers

void CMy1401140228View::OnMenuitem32771() 
{
	// TODO: Add your command handler code here
/*	CDC*pDC=GetDC();

	CRect rect;
	GetClientRect(&rect);
	pDC->SetMapMode(MM_ANISOTROPIC);
	pDC->SetWindowExt(rect.Width(),rect.Height());
	pDC->SetViewportExt(rect.Width(),-rect.Height());
	pDC->SetViewportOrg(rect.Width()/2,rect.Height()/2);
	CPoint p0(-100,-50),p1(100,50);
	CPen NewPen,*pOldPen;
	NewPen.CreatePen(PS_SOLID,1,RGB(0,0,255));
	pOldPen=pDC->SelectObject(&NewPen);
	pDC->MoveTo(p0);
	pDC->LineTo(p1);
	pDC->SelectObject(pOldPen);
	
	ReleaseDC(pDC);*/
}

void CMy1401140228View::DrawObject(CDC *pDC)
{
	/*CRect rect;
	GetClientRect(&rect);
	pDC->SetMapMode(MM_ANISOTROPIC);
	pDC->SetWindowExt(rect.Width(),rect.Height());
	pDC->SetViewportExt(rect.Width(),-rect.Height());
	pDC->SetViewportOrg(rect.Width()/2,rect.Height()/2);
	CPoint p0(-100,-50),p1(100,50);
	CPen NewPen,*pOldPen;
	NewPen.CreatePen(PS_SOLID,1,RGB(0,0,255));
	pOldPen=pDC->SelectObject(&NewPen);
	pDC->MoveTo(p0);
	pDC->LineTo(p1);
	pDC->SelectObject(pOldPen);*/
}

void CMy1401140228View::OnMenuitem32772() 
{
	
	// TODO: Add your command handler code here
	CDC*pDC=GetDC();
	CIN c;
	if(c.DoModal()==IDOK)
	{
		num[0]=c.m_1;
		num[1]=c.m_2;
		num[2]=c.m_3;
		num[3]=c.m_4;
	CRect rect;
	GetClientRect(&rect);
	pDC->SetMapMode(MM_ANISOTROPIC);
	pDC->SetWindowExt(rect.Width(),rect.Height());
	pDC->SetViewportExt(rect.Width(),-rect.Height());
	pDC->SetViewportOrg(rect.Width()/2,rect.Height()/2);
	CPoint p0(num[0],num[1]),p1(num[2],num[3]);
	CPen NewPen,*pOldPen;
	NewPen.CreatePen(PS_SOLID,1,RGB(0,0,255));
	pOldPen=pDC->SelectObject(&NewPen);
	pDC->MoveTo(p0);
	pDC->LineTo(p1);
	pDC->SelectObject(pOldPen);
	
	}
	ReleaseDC(pDC);
}
