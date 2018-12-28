# ArucoUnity's Plugin

Linux: [![Travis Build Status](https://api.travis-ci.org/NormandErwan/ArucoUnityPlugin.svg?branch=master)](https://travis-ci.org/NormandErwan/ArucoUnityPlugin)
Windows: [![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/hp4hlv0dnv6mutg6?svg=true)](https://ci.appveyor.com/project/NormandErwan/arucounityplugin)

The ArucoUnity's plugin wraps into a C interface some OpenCV modules (coded in C++). These C bindings allows
[ArucoUnity](https://github.com/NormandErwan/ArucoUnity) to use OpenCV in C# code.

See the [ArucoUnity Architecture](https://normanderwan.github.io/ArucoUnity/manual/aruco-unity-architecture.html)
documentation page for more details.

## Build

Read the [Build From Sources](https://normanderwan.github.io/ArucoUnity/manual/build-from-sources.html) documentation
page.

## Licenses

See the [LICENSE](https://github.com/NormandErwan/ArucoUnityPlugin/blob/master/LICENSE) file for license rights and
limitations (3-clause BSD license).

See [https://github.com/NormandErwan/ArucoUnityPlugin/tree/master/3rdparty](https://github.com/NormandErwan/ArucoUnityPlugin/tree/master/3rdparty)
for the OpenCV license. ArucoUnityPlugin wraps the following OpenCV modules:

- [ArUco marker detection (aruco)](http://docs.opencv.org/3.4/d9/d6a/group__aruco.html)
- [Camera Calibration and 3D Reconstruction (calib3d)](http://docs.opencv.org/3.4/d9/d0c/group__calib3d.html)
- [Custom Calibration Pattern for 3D reconstruction (ccalib)](http://docs.opencv.org/3.4/d3/ddc/group__ccalib.html)
