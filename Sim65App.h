/***************************************************************
 * Name:      Sim65App.h
 * Purpose:   Defines Application Class
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

#ifndef SIM65APP_H
#define SIM65APP_H

#include <wx/app.h>

class Sim65App : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // SIM65APP_H
