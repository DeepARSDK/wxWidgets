/////////////////////////////////////////////////////////////////////////////
// Name:        xh_chckl.h
// Purpose:     XML resource handler for wxCheckListBox
// Author:      Bob Mitchell
// Created:     2000/03/21
// RCS-ID:      $Id$
// Copyright:   (c) 2000 Bob Mitchell and Verant Interactive
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_XH_CHCKL_H_
#define _WX_XH_CHCKL_H_

#include "wx/xrc/xmlres.h"

#if wxUSE_CHECKLISTBOX

class WXDLLIMPEXP_XRC wxCheckListBoxXmlHandler : public wxXmlResourceHandler
{
DECLARE_DYNAMIC_CLASS(wxCheckListBoxXmlHandler)
public:
    wxCheckListBoxXmlHandler();
    virtual wxObject *DoCreateResource();
    virtual bool CanHandle(wxXmlNode *node);
private:
    bool m_insideBox;
    wxArrayString strList;
};

#endif

#endif // _WX_XH_CHECKLIST_H_
