
#== Fedora =========================================================================================
# dnf install -y wxGTK3-devel
# wx-config-3.0 --cflags --libs core,base,gl

# DEFINES += __WXGTK__
# DEFINES += WXUSINGDLL
# INCLUDEPATHS += /usr/lib64/wx/include/gtk3-unicode-3.0
# INCLUDEPATHS += /usr/include/wx-3.0

# LIBS += -lwx_gtk3u_core-3.0
# LIBS += -lwx_baseu-3.0
# LIBS += -lwx_gtk3u_gl-3.0

#== Mac ============================================================================================
# brew install wxmac
# wx-config --cflags --libs core,base,gl
# sudo /usr/libexec/locate.updatedb
# DEFINES += WXUSINGDLL
# DEFINES += __WXMAC__
# DEFINES += __WXOSX__
# DEFINES += __WXOSX_COCOA__

# INCLUDEPATHS += /usr/local/lib/wx/include/osx_cocoa-unicode-3.0
# INCLUDEPATHS += /usr/local/include/wx-3.0

# LIBRARYPATHS += /usr/local/lib/
# LIBS += -lwx_osx_cocoau_core-3.0
# LIBS += -lwx_baseu-3.0
# LIBS += -lwx_osx_cocoau_gl-3.0

# INCLUDEPATHS += /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/System/Library/Frameworks/OpenGL.framework/Versions/A/Headers/
# LIBRARYPATHS += /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/

# INCLUDEPATHS += /usr/local/Cellar/freeimage/3.18.0/include/
# LIBRARYPATHS += /usr/local/Cellar/freeimage/3.18.0/lib/

# INCLUDEPATHS += /usr/local/Cellar/boost/1.68.0_1/include/
# LIBRARYPATHS += /usr/local/Cellar/boost/1.68.0_1/lib/

#== Windows MSVC 32 ================================================================================

# INCLUDEPATHS += C:\FreeImage\Dist\x32
# LIBRARYPATHS += C:\FreeImage\Dist\x32

# INCLUDEPATHS += C:\SDL2\SDL2-2.0.10\i686-w64-mingw32\include
# LIBRARYPATHS += C:\SDL2\SDL2-2.0.10\i686-w64-mingw32\lib

#== Windows MSVC 64 ================================================================================

# INCLUDEPATH  += C:\FreeImage\Dist\x64
# LIBRARYPATHS += C:\FreeImage\Dist\x64

# INCLUDEPATH  += C:\SDL2\msvc\SDL2-2.0.10\include
# LIBRARYPATHS += C:\SDL2\msvc\SDL2-2.0.10\lib\x64
