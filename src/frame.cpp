#include "../headers/frame.h"
#include "../headers/title_bar.h"
#define ID_WEBVIEW 10001

MyFrame::MyFrame(wxWindow* parent, wxWindowID id, const wxString title,const wxPoint position) : wxFrame(parent, id, title, position, wxSize(1280,720), wxDEFAULT_FRAME_STYLE)
{	
	wxBoxSizer* main_sizer=new wxBoxSizer(wxVERTICAL);
	wxWebView* webView= wxWebView::New(this, ID_WEBVIEW,"https://music.youtube.com");	

	main_sizer->Add(webView,1,wxEXPAND|wxALL,0);

	SetSizer(main_sizer);
	Center();
			
	Bind(wxEVT_WEBVIEW_NEWWINDOW, &MyFrame::onNewWindow, this, ID_WEBVIEW);
		
}


void MyFrame::onNewWindow(wxWebViewEvent& event)
{
	wxWebView* webView=(wxWebView*)event.GetEventObject();
	webView->LoadURL(event.GetURL());
}