#include "stdafx.h"
#include "1401140228.h"
#include "CTransform.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

CTransform::CTransform()
{
}
CTransform::~CTransform()
{
}
void CTransform::SetMat(CP2 *P,int n)
{
	POld=P;
	num=n;

}
void CTransform::Identity()
{
	T[0][0]=1.0;
	T[0][1]=0.0;
	T[0][2]=0.0;
	T[1][0]=0.0;
	T[1][1]=1.0;
	T[1][2]=0.0;
	T[2][0]=0.0;
	T[2][1]=0.0;
	T[2][2]=1.0;
}
void CTransform::Translate(double tx,double ty)
{
	Identity();
	T[2][0]=tx;
	T[2][1]=ty;
	MultiMatrix();
}
void CTransform::MultiMatrix()
{
	CP2 *PNew = new CP2[num];
	for (int i = 0; i < num; i++)
	{
		PNew[i] = POld[i];
	}
	for (int j = 0; j < num; j++)
	{
		POld[j].x = PNew[j].x*T[0][0] + PNew[j].y*T[1][0] + PNew[j].w*T[2][0];
		POld[j].y = PNew[j].x*T[0][1] + PNew[j].y*T[1][1] + PNew[j].w*T[2][1];
		POld[j].w = PNew[j].x*T[0][2] + PNew[j].y*T[1][2] + PNew[j].w*T[2][2];
	}
	delete[]PNew;
}