/////////////////////////////////////////////////////////////////////////////
// Name:        wx/dcscreen.h
// Purpose:     wxScreenDC base header
// Author:      Julian Smart
// Created:
// Copyright:   (c) Julian Smart
// Licence:     wxWindows Licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_DCSCREEN_H_BASE_
#define _WX_DCSCREEN_H_BASE_

#include "wx/defs.h"
#include "wx/dc.h"

// This class is obsolete and doesn't work, don't use it.
class WXDLLIMPEXP_CORE wxScreenDC : public wxDC
{
public:
    wxScreenDC();

    static bool StartDrawingOnTop(wxWindow * WXUNUSED(window))
        { return true; }
    static bool StartDrawingOnTop(wxRect * WXUNUSED(rect) =  nullptr)
        { return true; }
    static bool EndDrawingOnTop()
        { return true; }

private:
    wxDECLARE_DYNAMIC_CLASS(wxScreenDC);
};


#endif
    // _WX_DCSCREEN_H_BASE_
