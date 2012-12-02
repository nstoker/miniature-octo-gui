/***************************************************************
 * Name:      Sim65Main.h
 * Purpose:   Defines Application Frame
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

#ifndef SIM65MAIN_H
#define SIM65MAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "Sim65App.h"

class Sim65Frame: public wxFrame
{
    public:
        Sim65Frame(wxFrame *frame, const wxString& title);
        ~Sim65Frame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // SIM65MAIN_H
