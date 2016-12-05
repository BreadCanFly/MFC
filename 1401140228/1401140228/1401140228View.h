// 1401140228View.h : interface of the CMy1401140228View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_1401140228VIEW_H__6A5F000B_23E8_4340_9E4C_9A2638D287A2__INCLUDED_)
#define AFX_1401140228VIEW_H__6A5F000B_23E8_4340_9E4C_9A2638D287A2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy1401140228View : public CView
{
protected: // create from serialization only
	CMy1401140228View();
	DECLARE_DYNCREATE(CMy1401140228View)

// Attributes
public:
	CMy1401140228Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy1401140228View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	void DrawObject(CDC*pDC);
	virtual ~CMy1401140228View();
	int num[4];
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy1401140228View)
	afx_msg void OnMenuitem32771();
	afx_msg void OnMenuitem32772();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 1401140228View.cpp
inline CMy1401140228Doc* CMy1401140228View::GetDocument()
   { return (CMy1401140228Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_1401140228VIEW_H__6A5F000B_23E8_4340_9E4C_9A2638D287A2__INCLUDED_)
