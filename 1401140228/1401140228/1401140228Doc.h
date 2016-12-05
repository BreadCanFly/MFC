// 1401140228Doc.h : interface of the CMy1401140228Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_1401140228DOC_H__74BD2D84_800E_4014_822F_826AEE8AC96C__INCLUDED_)
#define AFX_1401140228DOC_H__74BD2D84_800E_4014_822F_826AEE8AC96C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy1401140228Doc : public CDocument
{
protected: // create from serialization only
	CMy1401140228Doc();
	DECLARE_DYNCREATE(CMy1401140228Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy1401140228Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy1401140228Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy1401140228Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_1401140228DOC_H__74BD2D84_800E_4014_822F_826AEE8AC96C__INCLUDED_)
