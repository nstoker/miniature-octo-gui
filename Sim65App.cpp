/***************************************************************
 * Name:      Sim65App.cpp
 * Purpose:   Code for Application Class
 * Author:    Neil Stoker (neil.stoker@gmail.com)
 * Created:   2012-12-01
 * Copyright: Neil Stoker (https://sites.google.com/site/neilstoker/)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "Sim65App.h"
#include "Sim65Main.h"

IMPLEMENT_APP(Sim65App);

bool Sim65App::OnInit()
{
    Sim65Frame* frame = new Sim65Frame(0L, _("wxWidgets Application Template"));
    
    frame->Show();
    
    return true;
}
