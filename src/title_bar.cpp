#include "../headers/title_bar.h"

title_bar::title_bar(wxWindow* parent, const wxString& title) 
	: wxPanel(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize)
{
		// dark background
		SetBackgroundColour(wxColour(30,30,30));
		
		// horizontal sizer
		wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
		
		// adding title text
		wxStaticText* title_text= new wxStaticText(this, wxID_ANY, title);
		title_text->SetForegroundColour(wxColour(255,255,255));
		sizer->Add(title_text,1, wxALIGN_CENTER_VERTICAL | wxLEFT,10);
		
		// button identification and sizing
		wxButton* close_button=new wxButton(this,wxID_ANY,"x");
		close_button->SetBackgroundColour(wxColour(30,30,30));
		close_button->SetForegroundColour(wxColour(255,255,255));
		sizer->Add(close_button,0,wxALIGN_CENTER_VERTICAL | wxRIGHT,0);
		
		
		// adjusting horizontally for title bar 50 means pixels
		SetSizer(sizer);
		SetMinSize(wxSize(-1,50));
		
		// binding close 
		close_button->Bind(wxEVT_BUTTON,&title_bar::on_close,this);
	
} 


void title_bar::on_close(wxCommandEvent& event)
{
		wxFrame *frame = wxDynamicCast(GetParent(),wxFrame);
		if(frame)
			frame->Close();
}
