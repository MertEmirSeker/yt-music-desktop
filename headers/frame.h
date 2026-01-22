#ifndef FRAME
#include <wx/wx.h>
#include <wx/webview.h>

class MyFrame : public wxFrame
{
		public:
			MyFrame(wxWindow* parent, wxWindowID id, const wxString title, const wxPoint position);
			
		private:
			void onNewWindow(wxWebViewEvent& event);
			
			
};

#endif
