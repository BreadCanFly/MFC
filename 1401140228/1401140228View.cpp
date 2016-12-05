// 1401140228View.cpp : implementation of the CMy1401140228View class
//

#include "stdafx.h"
#include "1401140228.h"
#include "1401140228Doc.h"
#include "1401140228View.h"
#include "IN.h"
#include "math.h"
#include "CTransform.h"
#define Round(d) int(floor(d+0.5))//��������궨��
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
	ON_COMMAND(ID_MENUITEM32773, OnMenuitem32773)
	ON_COMMAND(ID_32775, On32775)
	ON_COMMAND(ID_MENUITEM32776, OnMenuitem32776)
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
	//pDoc->UpdateAllViews(NULL);
	DrawGraph();
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
	
}

void CMy1401140228View::OnMenuitem32772() 
{
	
	// TODO: Add your command handler code here
	CDC*pDC=GetDC();

	CIN c;
	RedrawWindow();
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
	P01=CPoint(num[0],num[1]);
	P11=CPoint(num[2],num[3]);
	CPen NewPen,*pOldPen;
	NewPen.CreatePen(PS_SOLID,1,RGB(0,0,255));
	pOldPen=pDC->SelectObject(&NewPen);
	MyMoveto(P01);
	MyLineto(pDC,P11);
	pDC->SelectObject(pOldPen);
	NewPen.DeleteObject();
	
	}
	
	ReleaseDC(pDC);

}
void CMy1401140228View::MyMoveto(CPoint p0)
{
	P01=p0;

}
void CMy1401140228View::MyLineto(CDC*pDC,CPoint p1)
{
	P11=p1;
	CPoint p,t;
	COLORREF clr=RGB(0,0,0);
	if(/*fabs(P0.x-P1.x)*/(P01.x-P11.x)==0){
		if(P01.y>P11.y){
			t=P01;
			P01=P11;
			P11=t;
		}
		for(p=P01;p.y<P11.y;p.y++)
			pDC->SetPixelV(p,clr);
	}
	else{
		double k,d;
		k=(P11.y-P01.y)/(P11.x-P01.x);
		if(k>1.0){
			if(P01.y>P11.y){
				t=P01;
				P01=P11;
				P11=t;
			}
			d=1-0.5*k;
			for(p=P01;p.y<P11.y;p.y++){
				pDC->SetPixelV(p,clr);
				if(d>=0){
					p.x++;
					d+=1-k;
				}
				else
					d+=1;
			}
		}
		if(0.0<=k&&k<=1.0){
			if(P01.x>P11.x){
				t=P01;
				P01=P11;
				P11=t;
			}
			d=0.5-k;
			for(p=P01;p.x<P11.x;p.x++){
				pDC->SetPixelV(p,clr);
				if(d<0){
					p.y++;
					d+=1-k;
				}
				else
					d-=k;
			}
		}
		if(k>=-1.0&&k<0.0){
			if(P01.x>P11.x){
				t=P01;
				P01=P11;
				P11=t;
			}
			d=-0.5-k;
			for(p=P01;p.x<P11.x;p.x++){
				pDC->SetPixelV(p,clr);
				if(d>0){
					p.y--;
					d-=1+k;
				}
				else
					d-=k;
			}
		}
		if(k<-1.0){
			if(P01.y<P11.y){
				t=P01;
				P01=P11;
				P11=t;
			}
			d=-1-0.5*k;
			for(p=P01;p.y>P11.y;p.y--){
				pDC->SetPixelV(p,clr);
				if(d<0){
					p.x++;
					d-=1+k;
				}
				else
					d-=1;
			}
		}

	}
	P01=p1;
	
}
void CMy1401140228View::OnMenuitem32773() 
{
	// TODO: Add your command handler code here
	RedrawWindow();
	int Cx, Cy, Cr;
	Cx = 200;
	Cy = 200;
	Cr = 200;
	int x = 0;
	int y = Cr;
	CDC *pDC = GetDC();
	int p = 3 - 2 * Cr;
	for (; x<y; x++)
	{
		pDC->SetPixel(x + Cx, y + Cy, RGB(255, 0, 0));
		pDC->SetPixel(y + Cx, x + Cy, RGB(255, 0, 0));
		pDC->SetPixel(-x + Cx, y + Cy, RGB(255, 0, 0));
		pDC->SetPixel(x + Cx, -y + Cy, RGB(255, 0, 0));
		pDC->SetPixel(-x + Cx, -y + Cy, RGB(255, 0, 0));
		pDC->SetPixel(-y + Cx, x + Cy, RGB(255, 0, 0));
		pDC->SetPixel(y + Cx, -x + Cy, RGB(255, 0, 0));
		pDC->SetPixel(-y + Cx, -x + Cy, RGB(255, 0, 0));

		if (p>0)
		{
			p += 4 * (x - y) + 10;
			y--;
		}
		else
			p += 4 * x + 6;
	}
	ReleaseDC(pDC);

	
}

void CMy1401140228View::ReadPoint()//���
{
	P[0].x = -150;  P[0].y =-100;
	P[1].x = 150; P[1].y = -100;
	P[2].x = 150; P[2].y = 100;
	P[3].x = -150; P[3].y = 100;
	//P[4].x = 0;   P[4].y = -50;
	//P[5].x = 100; P[5].y = -250;
	//P[6].x = 300; P[6].y = 150;
}
void CMy1401140228View::DrawGraph()//����ͼ��
{
	//RedrawWindow();
	CRect rect;                                         //����ͻ���
	GetClientRect(&rect);                               //��ÿͻ����Ĵ�С
	CDC *pDC = GetDC();                                   //�����豸������ָ��              
	pDC->SetMapMode(MM_ANISOTROPIC);                    //�Զ�������ϵ
	pDC->SetWindowExt(rect.Width(), rect.Height());      //���ô��ڱ���
	pDC->SetViewportExt(rect.Width(), -rect.Height());   //����������������x��ˮƽ���ң�y�ᴹֱ����
	pDC->SetViewportOrg(rect.Width() / 2, rect.Height() / 2);//���ÿͻ�������Ϊ����ϵԭ��
	rect.OffsetRect(-rect.Width() / 2, -rect.Height() / 2);  //������ͻ����غ�
	if (!bFill)
		DrawPolygon(pDC);//���ƶ����
	else
		FillPolygon(pDC);//�������
	ReleaseDC(pDC);//�ͷ�DC
}
void CMy1401140228View::DrawPolygon(CDC *pDC)//���ƶ���α߽�
{
	CLine *line = new CLine;
	CP2 t;
	for (int i = 0; i<4; i++)//���ƶ����
	{
		if (i == 0)
		{
			line->MoveTo(pDC, P[i]);
			t = P[i];
		}
		else
		{
			line->LineTo(pDC, P[i]);
		}
	}
	line->LineTo(pDC, t);//�պ϶����
	delete line;
}
void CMy1401140228View::FillPolygon(CDC *pDC)//�������
{
	for (int i = 0; i<4; i++)//ת���������꣬y����ȡΪ����
	{
		P1[i].x = P[i].x;
		P1[i].y = Round(P[i].y);
		P1[i].c = CRGB(bRed / 255.0, bGreen / 255.0, bBlue / 255.0);
	}
	CFill *fill = new CFill;      //��̬�����ڴ� 
	fill->SetPoint(P1, 4);       //��ʼ��Fill����
	fill->CreateBucket();       //����Ͱ��
	fill->CreateEdge();         //�����߱�
	fill->Gouraud(pDC);         //�������
	delete fill;                //�����ڴ�
}
/*void CMy1401140228View::OnDrawpic()
{
	// TODO: Add your command handler code here
	COLORREF GetClr = RGB(0, 0, 0);//��ɫ����ɫ
	CColorDialog ccd(GetClr, CC_SOLIDCOLOR);
	if (IDOK == ccd.DoModal())//������ɫ�Ի���ѡȡ���ɫ
		GetClr = ccd.GetColor();
	else
		return;
	bRed = GetRValue(GetClr);  //��ȡ��ɫ����
	bGreen = GetGValue(GetClr);//��ȡ��ɫ����
	bBlue = GetBValue(GetClr); //��ȡ��ɫ����
	bFill = TRUE;
	Invalidate();
}*/
void CMy1401140228View::OnInitialUpdate()
{
	CView::OnInitialUpdate();
	// TODO: Add your specialized code here and/or call the base class
	bFill = FALSE;
	ReadPoint();
}

void CMy1401140228View::On32775()
{
	
	
	// TODO: �ڴ���������������
	// TODO: Add your command handler code here
	COLORREF GetClr = RGB(0, 0, 0);//��ɫ����ɫ
	CColorDialog ccd(GetClr, CC_SOLIDCOLOR);
	if (IDOK == ccd.DoModal())//������ɫ�Ի���ѡȡ���ɫ
		GetClr = ccd.GetColor();
	else
		return;
	bRed = GetRValue(GetClr);  //��ȡ��ɫ����
	bGreen = GetGValue(GetClr);//��ȡ��ɫ����
	bBlue = GetBValue(GetClr); //��ȡ��ɫ����
	bFill = TRUE;
	Invalidate();

}

void CMy1401140228View::OnMenuitem32776() 
{
	// TODO: Add your command handler code here
	trans.SetMat(P,4);
	trans.Translate(-100, 0);
	RedrawWindow();
	DrawGraph();
	Invalidate(FALSE);
}
