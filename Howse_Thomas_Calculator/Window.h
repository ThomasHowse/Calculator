#pragma once
#include "wx/wx.h"
class Window : public wxFrame
{
private:
	wxButton* button0 = nullptr;
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxButton* button3 = nullptr;
	wxButton* button4 = nullptr;
	wxButton* button5 = nullptr;
	wxButton* button6 = nullptr;
	wxButton* button7 = nullptr;
	wxButton* button8 = nullptr;
	wxButton* button9 = nullptr;
	wxButton* buttonOp = nullptr;
	wxButton* buttonCp = nullptr;
	wxButton* buttonNeg = nullptr;
	wxButton* buttonMod = nullptr;
	wxButton* buttonSin = nullptr;
	wxButton* buttonTan = nullptr;
	wxButton* buttonCos = nullptr;
	wxButton* buttonClr = nullptr;
	wxButton* buttonAdd = nullptr;
	wxButton* buttonMin = nullptr;
	wxButton* buttonMult = nullptr;
	wxButton* buttonDiv = nullptr;
	wxButton* buttonEq = nullptr;
	wxTextCtrl* Display = nullptr;
	void OnButtonClick(wxCommandEvent& evnt);
	wxDECLARE_EVENT_TABLE();
	void ClearWindow(wxCommandEvent& evnt);

	void Button0(wxCommandEvent& evnt);
	void Button1(wxCommandEvent& evnt);
	void Button2(wxCommandEvent& evnt);
	void Button3(wxCommandEvent& evnt);
	void Button4(wxCommandEvent& evnt);
	void Button5(wxCommandEvent& evnt);
	void Button6(wxCommandEvent& evnt);
	void Button7(wxCommandEvent& evnt);
	void Button8(wxCommandEvent& evnt);
	void Button9(wxCommandEvent& evnt);
	void Button10(wxCommandEvent& evnt);
	void Button11(wxCommandEvent& evnt);
	void Button12(wxCommandEvent& evnt);
	void Button13(wxCommandEvent& evnt);
	void Button14(wxCommandEvent& evnt);
	void Button15(wxCommandEvent& evnt);
	void Button16(wxCommandEvent& evnt);
	void Button17(wxCommandEvent& evnt);
	void Button18(wxCommandEvent& evnt);
	void Button19(wxCommandEvent& evnt);
	void Button20(wxCommandEvent& evnt);
	void Button21(wxCommandEvent& evnt);
	void Button22(wxCommandEvent& evnt);

	wxString dsplyd;
public:
	Window();
};
 