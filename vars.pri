TARGET = example_maps_wx
TEMPLATE = app

TP_RC += src/example_maps_wx.qrc

SOURCES += src/main.cpp

HEADERS += inc/example_maps_wx/Globals.h
SOURCES += src/Globals.cpp

HEADERS += inc/example_maps_wx/LoadModels.h
SOURCES += src/LoadModels.cpp

