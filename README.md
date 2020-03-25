# Example tp_maps and SDL2 Application
This project demonstrates building a simple 3D view using tdp-libs and wxWidgets using CMake or 
QMake. This project should build on Linux.

## Prerequisites 
* tdp_tools [Installation instructions](https://github.com/tdp-libs/tdp_tools)
* A toolchain for your chosen platform. [Installation instructions](https://github.com/tdp-libs/tdp_build)

## Clone Instructions
These steps will clone the repo and all of its dependencies. You will need tdp_tools in your path for this to work.
```
mkdir maps_wx
cd maps_wx
git clone https://github.com/tdp-libs/example_maps_wx.git
cp example_maps_wx/maps_wx.pro .
cp example_maps_wx/CMakeLists.top CMakeLists.txt
tdpUpdate
```

## Include and Library Paths
Depending on your platform you may need to specify include and library paths. The previous steps 
should have created a `maps_wx/project.inc` file, this can be modified to add platform specific 
include and library paths. If these modifications may be of use to someone else then they can be 
added to the project.inc file found in `maps_wx/example_maps_wx/` directory.

The following command will give the include and libs required on your system.
```
wx-config --cflags --libs core,base,gl
```

## CMake Build Instructions
From the maps_wx directory created in the steps above perform the following steps.
```
mkdir ../build-maps_wx-desktop
cd ../build-maps_wx-desktop
cmake ../maps_wx
make -j`nproc`

```
To run:
```
example_maps_wx/example_maps_wx

```

## QMake Build Instructions
To build and deploy the application using QtCreator perform the following steps.
1. Open the top level maps_wx.pro file in QtCreator.
2. Select a kit.
3. If appropriate set the number of jobs in Projects->Build->Build Steps->Make add something like -j12.
4. Click the green arrow in the bottom left to build and run.

# Modification

This project is designed to be modified to suit your purposes, the following files configure the 
OpenGL view and load the models.
```
example_maps_wx/src/LoadModels.cpp
example_maps_wx/src/main.cpp
```
