#ifndef WX_PRECOMP

#include <wx/wx.h>
#include <wx/stdpaths.h>
#include <wx/filename.h>


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

#endif
