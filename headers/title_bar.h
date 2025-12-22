#ifndef TITLE_BAR
#define TITLE_BAR

#include <wx/wx.h>
#include <wx/panel.h>

class title_bar : public wxPanel
{
	public:
		title_bar(wxWindow* parent, const wxString& title);
	
	private:
		void on_close(wxCommandEvent& event);
};



#endif
