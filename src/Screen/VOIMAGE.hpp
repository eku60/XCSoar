//-------------------------------------------------------------------
// VOImage Header File
//-------------------------------------------------------------------
//
// Copyright �2000 Virtual Office Systems Incorporated
// All Rights Reserved
//
// This code may be used in compiled form in any way you desire. This
// file may be redistributed unmodified by any means PROVIDING it is
// not sold for profit without the authors written consent, and
// providing that this notice and the authors name is included.
//
// This code can be compiled, modified and distributed freely, providing
// that this copyright information remains intact in the distribution.
//
// This code may be compiled in original or modified form in any private
// or commercial application.
//
// This file is provided "as is" with no expressed or implied warranty.
// The author accepts no liability for any damage, in any form, caused
// by this code. Use it at your own risk.
//-------------------------------------------------------------------

#ifndef XCSOAR_SCREEN_VOIMAGE_HPP
#define XCSOAR_SCREEN_VOIMAGE_HPP

#include <windef.h>

class CVOImage
{
public:
	static DWORD CALLBACK GetImageData( LPSTR, DWORD, LPARAM);
	BOOL Draw(HDC hdc, int x, int y, int cx = -1, int cy = -1);
	BOOL Load(HDC hdc, const TCHAR *pcszFileName);
	CVOImage();
	virtual ~CVOImage();
	operator HBITMAP() { return m_hbitmap; }
   static int	g_iScale;

protected:
	DWORD		m_dwHeight;
	DWORD		m_dwWidth;
	HBITMAP		m_hbitmap;
	static BOOL g_bStretchBlt;
	static int	g_iMaxHeight;
	static int	g_iMaxWidth;
	//static int	g_iScale;
	static HDC	g_hdc;
};

#endif
