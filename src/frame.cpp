#include "../headers/frame.h"

MyFrame::MyFrame(wxWindow* parent, wxWindowID id, const wxString title,const wxPoint position) 
	: wxFrame(parent, id, title, position, wxSize(800,600), wxDEFAULT_FRAME_STYLE & ~(wxCAPTION|wxSYSTEM_MENU|wxMINIMIZE_BOX|wxMAXIMIZE_BOX)) // added for removing title bar so I can add my own title bar.
{	// to add my own title bar I need to use wxPanel or ...
		wxMenu *menuFile= new wxMenu;
		
		CreateStatusBar();
		SetStatusText("Welcome to YT MUSIC!");
		
		
}
