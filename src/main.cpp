#include "example_maps_wx/Globals.h"
#include "example_maps_wx/LoadModels.h"

#include "tp_wx_maps/Map.h"

#include "tp_maps/Map.h"
#include "tp_maps/controllers/FPSController.h"
#include "tp_maps/layers/GridLayer.h"

#include "tp_image_utils_freeimage/Globals.h"

#include "tp_utils_filesystem/Globals.h"

#include "tp_utils/DebugUtils.h"


#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
//#include <wx/frame.h>



class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};
class MyFrame: public wxFrame
{
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);

    ~MyFrame();
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
   // wxDECLARE_EVENT_TABLE();
};

MyFrame::~MyFrame()
{

}
enum
{
    ID_Hello = 1
};
//wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
//    EVT_MENU(ID_Hello,   MyFrame::OnHello)
//    EVT_MENU(wxID_EXIT,  MyFrame::OnExit)
//    EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
//wxEND_EVENT_TABLE()

//wxIMPLEMENT_APP(MyApp);


bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame(_T("Hello World"), wxPoint(50, 50), wxSize(450, 340) );
    frame->Show( true );
    return true;
}
MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(nullptr, wxID_ANY, title, pos, size)
{
    wxMenu *menuFile = new wxMenu;
    // menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
    //                  "Help string shown in status bar for this menu item");
    // menuFile->AppendSeparator();
    // menuFile->Append(wxID_EXIT);
    // wxMenu *menuHelp = new wxMenu;
    // menuHelp->Append(wxID_ABOUT);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuFile, _T("&File"));
    // menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );
    CreateStatusBar();
    SetStatusText(_T("Welcome to wxWidgets!"));


    bool fullScreen = true;


    // auto map = new tp_wx_maps::Map(this, true, fullScreen, wxT("TP Maps wxWidgets Example"));
    //
    // map->map()->setBackgroundColor({0.0f, 0.0f, 0.0f});
    //
    // auto controller = new tp_maps::FPSController(map->map(), fullScreen);
    // controller->setCameraOrigin({4.0f, 4.0f, 2.0f});
    // controller->setRotationAngle(270.0f);
    // TP_UNUSED(controller);
    //
    // map->map()->addLayer(new tp_maps::GridLayer());
    //
    // example_maps_wx::loadModels(map->map());


}
void MyFrame::OnExit(wxCommandEvent& event)
{
    Close( true );
}
void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox(_T("This is a wxWidgets' Hello world sample"),
                  _T("About Hello World"), wxOK | wxICON_INFORMATION );
}
void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage(_T("Hello world from wxWidgets!"));
}

IMPLEMENT_APP_NO_MAIN(MyApp)




//##################################################################################################
int main(int argc, char **argv)
{
  tp_utils_filesystem::init();
  tp_image_utils_freeimage::init();


  //map.exec();
  return wxEntry(argc, argv);
}
