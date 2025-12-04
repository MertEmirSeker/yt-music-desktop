 
// wxWidgets "Hello World" Program
 
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
 
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
 
class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};

class MyFrame : public wxFrame
{
		public:
			MyFrame();
			
		private:
			
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
	MyFrame *frame=new MyFrame();
	frame->Show(true);
	return true;
}

MyFrame::MyFrame() : wxFrame(NULL,wxID_ANY, "YT MUSIC")
{
		wxMenu *menuFile= new wxMenu;
		
		CreateStatusBar();
		SetStatusText("Welcome to YT MUSIC!");
		
		
}
