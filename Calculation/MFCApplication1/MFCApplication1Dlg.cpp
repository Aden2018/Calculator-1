
// MFCApplication1Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"
#include "cstring"
#include "string.h"
#include "calculate.h"
#include "About.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication1Dlg �Ի���



CMFCApplication1Dlg::CMFCApplication1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFCAPPLICATION1_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCApplication1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication1Dlg::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT1, &CMFCApplication1Dlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication1Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication1Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplication1Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCApplication1Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCApplication1Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCApplication1Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCApplication1Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCApplication1Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCApplication1Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplication1Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCApplication1Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCApplication1Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCApplication1Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCApplication1Dlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCApplication1Dlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFCApplication1Dlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CMFCApplication1Dlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCApplication1Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON20, &CMFCApplication1Dlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CMFCApplication1Dlg::OnBnClickedButton21)
END_MESSAGE_MAP()


// CMFCApplication1Dlg ��Ϣ�������

BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CMFCApplication1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMFCApplication1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMFCApplication1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication1Dlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("2"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCApplication1Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("1"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("3"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("4"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("5"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("6"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("7"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("8"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("9"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("0"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton11()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("."));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton12()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("+"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton13()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("-"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton14()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("*"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton15()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("/"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton17()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T("("));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton18()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Append(_T(")"));//׷������
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton19()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat = "";
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
	GetDlgItem(IDC_EDIT2)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton16()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChat;
	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������
	strChat.Delete(strChat.GetLength() - 1);
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(strChat);//��ʾ�ı������
}


void CMFCApplication1Dlg::OnBnClickedButton20()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	CString strChat;
	
	char str[100] = { '\0' };

	GetDlgItem(IDC_EDIT1)->GetWindowTextW(strChat);//�õ�ԭ������

	WideCharToMultiByte(CP_ACP, 0, strChat.GetBuffer(0), strChat.GetLength(), str, 100, 0, 0);

	
	double result = calculate(str);

	strChat.Format(_T("%lf"), result);

	GetDlgItem(IDC_EDIT2)->SetWindowTextW(strChat);//��ʾ�ı������

}


void CMFCApplication1Dlg::OnBnClickedButton21()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	About dlg;
	dlg.DoModal();
}
