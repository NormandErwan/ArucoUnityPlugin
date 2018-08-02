# ArucoUnity's Plugin

[![Travis Build Status](https://api.travis-ci.org/NormandErwan/ArucoUnityPlugin.svg?branch=master)](https://travis-ci.org/NormandErwan/ArucoUnityPlugin)
[![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/hp4hlv0dnv6mutg6?svg=true)](https://ci.appveyor.com/project/NormandErwan/arucounityplugin)

Bring augmented reality to Unity by tracking [ArUco markers](https://docs.opencv.org/master/d5/dae/tutorial_aruco_detection.html) in real time.

This repository contains sources of the ArucoUnity's Plugin. The plugin wraps into a C interface some OpenCV modules (coded in C++). It allows [ArucoUnity](https://github.com/NormandErwan/ArucoUnity) use them in C# code.

See the [ArucoUnity Architecture](https://normanderwan.github.io/ArucoUnity/articles/create-markers.html) documentation page for more details.

## Build

Read the [Build From Sources](https://normanderwan.github.io/ArucoUnity/articles/build-from-sources.html) documentation page.

## Licenses

See the [LICENSE](https://github.com/NormandErwan/ArucoUnityPlugin/blob/master/LICENSE) file for license rights and limitations (3-clause BSD license).

See the [3rdparty](https://github.com/NormandErwan/ArucoUnityPlugin/tree/master/3rdparty) folder for the OpenCV license. ArucoUnity uses the following modules: [aruco](https://github.com/opencv/opencv_contrib/tree/master/modules/aruco), [cablid3d](http://docs.opencv.org/master/d9/d0c/group__calib3d.html), [ccalib](http://docs.opencv.org/master/d3/ddc/group__ccalib.html).
