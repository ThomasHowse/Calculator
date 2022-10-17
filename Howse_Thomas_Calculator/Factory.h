#include "wx/wx.h" 

class Factory : public wxFrame
{
public:
	void CreateButton(int*, wxInt16 id, wxString title, int Sph, int Spw, int Sih, int Siw);
};