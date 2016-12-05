// Pi2.h: interface for the CPi2 class.
//
//////////////////////////////////////////////////////////////////////

//#if !defined(AFX_PI2_H__B80DAA04_DDC9_4F35_8BC8_B3DDDE62F21D__INCLUDED_)
#define AFX_PI2_H__B80DAA04_DDC9_4F35_8BC8_B3DDDE62F21D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "RGB.h"
#include "P2.h"
class CTransform
{
public:
	CTransform();
	virtual ~CTransform();
	void SetMat(CP2 *,int);
	void Identity();
	void Translate(double,double);
	void MultiMatrix();
public:
	double T[3][3];
	CP2 *POld;
	int num;
};
