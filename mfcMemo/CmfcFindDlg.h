#pragma once
#include <afxdialogex.h>
class CmfcFindDlg :
    public CDialogEx
{
public:
    CString mStr = "";
    virtual BOOL OnInitDialog();
//    virtual BOOL PreTranslateMessage(MSG* pMsg);
    DECLARE_MESSAGE_MAP()
    afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};
