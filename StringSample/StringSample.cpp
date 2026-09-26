// StringSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StringSample.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// The one and only application object

CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
    int nRetCode = 0;
    CString sampleString = CString(_T("Sample\0String"), 14);
    int len = sampleString.GetLength();  // len is 14

    CString trimmedString = sampleString.Trim(); // trimmedString = "Sample"
    CString newstring = CString(sampleString); // newString = "Sample"
    len = newstring.GetLength(); // len = 14

    newstring.GetBuffer()

    // initialize MFC and print and error on failure
    if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
    {
        // TODO: change error code to suit your needs
        _tprintf(_T("Fatal Error: MFC initialization failed\n"));
        nRetCode = 1;
    }
    else
    {
        // TODO: code your application's behavior here.
    }

    return nRetCode;
}
