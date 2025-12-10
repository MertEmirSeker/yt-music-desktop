 
// Trying to develop yt-music desktop app using wxWidgets
 

#include <wx/wxprec.h>
 
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
 
class MyApp : public wxApp
{
public:
    virtual bool OnInit();
    const wxString get_title();
    const wxPoint get_position();
private:
	const wxString title="Youtube Music Desktop App";
	const wxPoint position{0,0};	
};

class MyFrame : public wxFrame
{
		public:
			MyFrame(wxWindow* parent, wxWindowID id, const wxString title, const wxPoint position);
			
		private:
			
			
			
};


//getter for title
const wxString MyApp::get_title()
{
	return title;
}
// getter for position but it changes nothing. no idea.
const wxPoint MyApp::get_position()
{
	return position;
}

MyFrame::MyFrame(wxWindow* parent, wxWindowID id, const wxString title,const wxPoint position) 
	: wxFrame(parent, id, title, position, wxSize(800,600), wxDEFAULT_FRAME_STYLE & ~(wxCAPTION|wxSYSTEM_MENU|wxMINIMIZE_BOX|wxMAXIMIZE_BOX)) // added for removing title bar so I can add my own title bar.
{	// to add my own title bar I need to use wxPanel or ...
		wxMenu *menuFile= new wxMenu;
		
		CreateStatusBar();
		SetStatusText("Welcome to YT MUSIC!");
		
		
}

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
	MyFrame *frame=new MyFrame(nullptr,wxID_ANY,get_title(),get_position());
	frame->Maximize(true);
	frame->Show(true);
	return true;
}
