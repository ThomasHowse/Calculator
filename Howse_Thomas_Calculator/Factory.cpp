#include "wx/wx.h" 
#include "Factory.h"

void Factory::CreateButton(int*, wxInt16 id, wxString title, int Sph, int Spw, int Sih, int Siw)
{
	new wxButton(this, id, title, wxPoint(Sph, Spw), wxSize(Sih, Siw));
}
