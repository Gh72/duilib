#ifndef UIPaint_h__
#define UIPaint_h__
/*/////////////////////////////////////////////////////////////
//
// �ļ�����	:	UIPaint.h
// ������		: 	daviyang35@gmail.com
// ����ʱ��	:	2014-11-19 14:58:33
// ˵��			:	�ؼ���ͼ����

/////////////////////////////////////////////////////////////*/
#pragma once

class CUIPaint
{
public:
	static CUIPaint* GetInstance();
	static void ReleaseInstance();

public:
	void DrawControl(IUIRender *pRender,CControlUI* pControl,LPCRECT rcUpdate);
	void DrawLabel(IUIRender *pRender,CControlUI *pControl);
	void DrawButton(IUIRender *pRender,CButtonUI *pControl,LPCRECT rcUpdate);
	void DrawRadioButton();
	void DrawCheckBox();
	void DrawEdit();
	void DrawProgress();
	void DrawScrollBar(IUIRender *pRender,CScrollBarUI *pControl,LPCRECT rcUpdate);

	//void DrawControlBackColor(IUIRender *pRender,CControlUI *pControl,LPCRECT pRcUpdate,LPCRECT pRcOverlop);
	//void DrawControlBackImage();
	//void DrawControlStateImage();
	//void DrawControlText();
	//void DrawControlBorder();

	void DrawBackColor(IUIRender *pRender,DWORD dwBackColor,DWORD dwBackColor2,DWORD dwBackColor3,LPCRECT pPaint,LPCRECT pOverlap,LPCRECT pControl);
	void DrawBackImage();
	void DrawText();
	void DrawBorder();

private:
	CUIPaint(void);
	~CUIPaint(void);
	static CUIPaint* m_pInstance;
};

#endif // UIPaint_h__