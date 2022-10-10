#include "Window.h"
wxBEGIN_EVENT_TABLE(Window, wxFrame)
EVT_BUTTON(1, Button1)
EVT_BUTTON(2, Button2)
EVT_BUTTON(3, Button3)
EVT_BUTTON(4, Button4)
EVT_BUTTON(5, Button5)
EVT_BUTTON(6, Button6)
EVT_BUTTON(7, Button7)
EVT_BUTTON(8, Button8)
EVT_BUTTON(9, Button9)
EVT_BUTTON(0, Button0)
EVT_BUTTON(10, Button10)
EVT_BUTTON(11, Button11)
EVT_BUTTON(12, Button12)
EVT_BUTTON(13, Button13)
EVT_BUTTON(14, Button14)
EVT_BUTTON(15, Button15)
EVT_BUTTON(16, Button16)
EVT_BUTTON(17, Button17)
EVT_BUTTON(18, Button18)
EVT_BUTTON(19, Button19)
EVT_BUTTON(20, Button20)
EVT_BUTTON(21, Button21)
EVT_BUTTON(22, Button22)
wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(0,0), wxSize(470, 820))
{
	int butsize = 100;

	button1 = new wxButton(this, 1, "1", wxPoint(10, 120), wxSize(butsize, butsize));
	button2 = new wxButton(this, 2, "2", wxPoint(120, 120), wxSize(butsize, butsize));
	button3 = new wxButton(this, 3, "3", wxPoint(230, 120), wxSize(butsize, butsize));
	buttonAdd = new wxButton(this, 10, "+", wxPoint(340, 120), wxSize(butsize, butsize));
	button4 = new wxButton(this, 4, "4", wxPoint(10, 230), wxSize(butsize, butsize));
	button5 = new wxButton(this, 5, "5", wxPoint(120, 230), wxSize(butsize, butsize));
	button6 = new wxButton(this, 6, "6", wxPoint(230, 230), wxSize(butsize, butsize));
	buttonMin = new wxButton(this, 11, "-", wxPoint(340, 230), wxSize(butsize, butsize));
	button7 = new wxButton(this, 7, "7", wxPoint(10, 340), wxSize(butsize, butsize));
	button8 = new wxButton(this, 8, "8", wxPoint(120, 340), wxSize(butsize, butsize));
	button9 = new wxButton(this, 9, "9", wxPoint(230, 340), wxSize(butsize, butsize));
	buttonDiv = new wxButton(this, 12, "/", wxPoint(340, 340), wxSize(butsize, butsize));
	buttonOp = new wxButton(this, 13, "(", wxPoint(10, 450), wxSize(butsize, butsize));
	button0 = new wxButton(this, 0, "0", wxPoint(120, 450), wxSize(butsize, butsize));
	buttonCp = new wxButton(this, 14, ")", wxPoint(230, 450), wxSize(butsize, butsize));
	buttonMult = new wxButton(this, 15, "*", wxPoint(340, 450), wxSize(butsize, butsize));
	buttonNeg = new wxButton(this, 16, "+/-", wxPoint(10, 560), wxSize(butsize, butsize));
	buttonMod = new wxButton(this, 17, "Mod", wxPoint(120, 560), wxSize(butsize, butsize));
	buttonSin = new wxButton(this, 18, "Sin", wxPoint(230, 560), wxSize(butsize, butsize));
	buttonClr = new wxButton(this, 19, "C", wxPoint(10, 670), wxSize(butsize, butsize));
	buttonCos = new wxButton(this, 20, "Cos", wxPoint(120, 670), wxSize(butsize, butsize));
	buttonTan = new wxButton(this, 21, "Tan", wxPoint(230, 670), wxSize(butsize, butsize));
	buttonEq = new wxButton(this, 22, "=", wxPoint(340, 560), wxSize(butsize, (2 * butsize)+10));


	Display = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(430, 100));

}

void Window::OnButtonClick(wxCommandEvent& evnt)
{
	Display->AppendText(button1->GetLabel());
	evnt.Skip();
}



void Window::Button0(wxCommandEvent& evnt)
{
	Display->AppendText(button0->GetLabel());
	evnt.Skip();
}
void Window::Button1(wxCommandEvent& evnt)
{
	Display->AppendText(button1->GetLabel());
	evnt.Skip();
}
void Window::Button2(wxCommandEvent& evnt)
{
	Display->AppendText(button2->GetLabel());
	evnt.Skip();
}
void Window::Button3(wxCommandEvent& evnt)
{
	Display->AppendText(button3->GetLabel());
	evnt.Skip();
}
void Window::Button4(wxCommandEvent& evnt)
{
	Display->AppendText(button4->GetLabel());
	evnt.Skip();
}
void Window::Button5(wxCommandEvent& evnt)
{
	Display->AppendText(button5->GetLabel());
	evnt.Skip();
}
void Window::Button6(wxCommandEvent& evnt)
{
	Display->AppendText(button6->GetLabel());
	evnt.Skip();
}
void Window::Button7(wxCommandEvent& evnt)
{
	Display->AppendText(button7->GetLabel());
	evnt.Skip();
}
void Window::Button8(wxCommandEvent& evnt)
{
	Display->AppendText(button8->GetLabel());
	evnt.Skip();

}
void Window::Button9(wxCommandEvent& evnt)
{
	Display->AppendText(button9->GetLabel());
	evnt.Skip();
}
void Window::Button10(wxCommandEvent& evnt)
{
	wxString dsplyd = Display->GetValue();
	Display->AppendText("+");
	evnt.Skip();


}
void Window::Button11(wxCommandEvent& evnt)
{
	wxString dsplyd = Display->GetValue();
	Display->AppendText("-");
	evnt.Skip();

}
void Window::Button12(wxCommandEvent& evnt)
{
	wxString dsplyd = Display->GetValue();
	Display->AppendText("/");
	evnt.Skip();

}
void Window::Button13(wxCommandEvent& evnt)
{
	Display->AppendText("(");
	evnt.Skip();
}
void Window::Button14(wxCommandEvent& evnt)
{
	Display->AppendText(")");
	evnt.Skip();
}
void Window::Button15(wxCommandEvent& evnt)
{
	wxString dsplyd = Display->GetValue();
	Display->AppendText("*");
	evnt.Skip();
}
void Window::Button16(wxCommandEvent& evnt)
{
		
	if (Display->GetValue().Contains('-'))
	{
		wxString dsplyd = Display->GetValue();
		int num = wxAtoi(dsplyd);
		dsplyd << (num);
		Display->Clear();
		Display->Update();
		Display->ChangeValue(dsplyd);
		evnt.Skip();
	}
	else {
		wxString dsplyd = Display->GetValue();
		int num = wxAtoi(dsplyd);
		dsplyd << (-1 * num);
		Display->Clear();
		Display->Update();
		Display->ChangeValue(dsplyd);
		evnt.Skip(); 
	}
}
void Window::Button17(wxCommandEvent& evnt)
{

}
void Window::Button18(wxCommandEvent& evnt)
{

}
void Window::Button19(wxCommandEvent& evnt)
{
	Display->Clear();
	evnt.Skip();
}
void Window::Button20(wxCommandEvent& evnt)
{

}
void Window::Button21(wxCommandEvent& evnt)
{

}
void Window::Button22(wxCommandEvent& evnt)
{

}