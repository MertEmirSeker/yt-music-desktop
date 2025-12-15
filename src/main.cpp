 
// Trying to develop yt-music desktop app using wxWidgets
 

#include <wx/wxprec.h>
#include "../src/frame.cpp"
#include "../src/title_bar.cpp"
#include "../headers/wx.h"

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

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
	MyFrame *frame=new MyFrame(nullptr,wxID_ANY,get_title(),get_position());
	frame->Maximize(true);
	frame->Show(true);
	return true;
}
