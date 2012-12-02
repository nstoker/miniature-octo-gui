/***************************************************************
 * Name:      Sim65App.cpp
 * Purpose:   Code for Application Class
 * Author:    Neil Stoker (neil.stoker@gmail.com)
 * Created:   2012-12-01
 * Copyright: Neil Stoker (https://sites.google.com/site/neilstoker/)
 * License:   GPL v3
              This file is part of Sim65.

             Sim65 is free software: you can redistribute it and/or modify
             it under the terms of the GNU General Public License as published by
             the Free Software Foundation, either version 3 of the License, or
             (at your option) any later version.

             Sim65 is distributed in the hope that it will be useful,
             but WITHOUT ANY WARRANTY; without even the implied warranty of
             MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
             GNU General Public License for more details.

             You should have received a copy of the GNU General Public License
             along with Sim65.  If not, see <http://www.gnu.org/licenses/>.
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
