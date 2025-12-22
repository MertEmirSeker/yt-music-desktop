#include "../headers/frame.h"
#include "../headers/title_bar.h"

MyFrame::MyFrame(wxWindow* parent, wxWindowID id, const wxString title,const wxPoint position) 
	: wxFrame(parent, id, title, position, wxSize(800,600), wxDEFAULT_FRAME_STYLE & ~(wxCAPTION|wxSYSTEM_MENU|wxMINIMIZE_BOX|wxMAXIMIZE_BOX)) // added for removing title bar so I can add my own title bar.
{	// to add my own title bar I need to use wxPanel or ...
		wxMenu *menuFile= new wxMenu;
		
		CreateStatusBar();
		SetStatusText("Welcome to YT MUSIC!");
		
		// creating the our title bar instance
		title_bar* tb= new title_bar(this,title);
		
		// creating vertical sizer and adding our title bar
		wxBoxSizer* main_sizer=new wxBoxSizer(wxVERTICAL);
		main_sizer->Add(tb,0,wxEXPAND|wxALL,0);
		
		SetSizer(main_sizer);
		
		
}
