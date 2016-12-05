// 1401140228View.h : interface of the CMy1401140228View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_1401140228VIEW_H__6A5F000B_23E8_4340_9E4C_9A2638D287A2__INCLUDED_)
#define AFX_1401140228VIEW_H__6A5F000B_23E8_4340_9E4C_9A2638D287A2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Fill.h"//包含填充类
#include "Line.h"//包含直线类
#include "CTransform.h"
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
	void ReadPoint();//读入顶点表
	void DrawGraph();//绘制图形
	void DrawPolygon(CDC *pDC);//绘制多边形
	void FillPolygon(CDC *pDC);//填充多边形
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy1401140228View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnInitialUpdate();
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	void DrawObject(CDC*pDC);
	
	int  num[4];

	CPoint P11;
	CPoint P01;
//	CPoint p1;
//	CPoint p0;
	void MyLineto(CDC*pDC,CPoint p11);
	void MyMoveto(CPoint p01);
	//void Redraw(CDC *pDC);
	virtual ~CMy1401140228View();
public:
	CTransform trans;
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	CP2 P[7];//浮点点表
	CPi2 P1[7];//y整数点表
	BYTE bRed, bGreen, bBlue;//颜色分量
	BOOL bFill;//填充标志
// Generated message map functions
protected:
	//{{AFX_MSG(CMy1401140228View)
	afx_msg void OnDrawpic();
	afx_msg void OnMenuitem32771();
	afx_msg void OnMenuitem32772();
	afx_msg void OnMenuitem32773();
	afx_msg void OnMenuitem32776();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:

	afx_msg void On32775();
};

#ifndef _DEBUG  // debug version in 1401140228View.cpp
inline CMy1401140228Doc* CMy1401140228View::GetDocument()
   { return (CMy1401140228Doc*)m_pDocument; }
#endif
/*class CP2
{
	public :
		CP2();
		virtual ~ CP2();
		CP2(double x,double y)
		{
			this->x=x;
			this->y=y;
		};
	public:
		double x;
		double y;
};
class CLine
{
	public:
		CLine();
		Virtual ~ CLine();
		void MoveTo(CDC *,CP2);
		void MOveTo(CDC * ,double ,double);
		void LineTo(CDC *)*/



/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_1401140228VIEW_H__6A5F000B_23E8_4340_9E4C_9A2638D287A2__INCLUDED_)
