#include "example_maps_wx/Globals.h"
#include "example_maps_wx/LoadModels.h"

#include "tp_wx_maps/Map.h"
#include "tp_wx_maps/OpenGLConfig.h"

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

//##################################################################################################
class MyApp: public wxApp
{
public:
  virtual bool OnInit() override;
};

//##################################################################################################
class MyFrame: public wxFrame
{
public:
  //################################################################################################
  MyFrame(const wxString& title,
          const wxPoint& pos,
          const wxSize& size,
          const tp_maps::OpenGLConfig& config);

  //################################################################################################
  ~MyFrame() override;
};

//##################################################################################################
bool MyApp::OnInit()
{
  tp_maps::OpenGLConfig config;
  if(tp_wx_maps::OpenGLConfig::showModal(config, nullptr, wxID_ANY, "OpenGL Config") != wxID_OK)
    return false;

  MyFrame *frame = new MyFrame("Example tp_maps in wxWidgets", wxPoint(50, 50), wxSize(450, 340), config);
  frame->Center();
  frame->Show(true);

  return true;
}

//##################################################################################################
MyFrame::~MyFrame()
{

}

//##################################################################################################
MyFrame::MyFrame(const wxString& title,
                 const wxPoint& pos,
                 const wxSize& size,
                 const tp_maps::OpenGLConfig& config):
  wxFrame(nullptr, wxID_ANY, title, pos, size)
{
  auto map = new tp_wx_maps::Map(this, wxT("TP Maps wxWidgets Example"), config);
  map->map()->setBackgroundColor({0.0f, 0.0f, 0.0f});
  map->map()->addLayer(new tp_maps::GridLayer());
  example_maps_wx::loadModels(map->map());
}

IMPLEMENT_APP_NO_MAIN(MyApp)

//##################################################################################################
int main(int argc, char **argv)
{
  tp_utils_filesystem::init();
  tp_image_utils_freeimage::init();  
  return wxEntry(argc, argv);
}
