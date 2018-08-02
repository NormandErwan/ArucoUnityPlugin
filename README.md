# ArucoUnity's Plugin

Bring augmented reality to Unity by tracking [ArUco markers](https://docs.opencv.org/master/d5/dae/tutorial_aruco_detection.html) in real time.

This repository contains sources of the ArucoUnity's Plugin. The plugin wraps into a C interface some OpenCV modules (coded in C++). It allows [ArucoUnity](https://github.com/NormandErwan/ArucoUnity) use them in the C# code.

See the [ArucoUnity Architecture](https://normanderwan.github.io/ArucoUnity/articles/create-markers.html) documentation page for more details.

## Build

Read the [Build From Sources](https://normanderwan.github.io/ArucoUnity/articles/build-from-sources.html) documentation page.

## Licenses

See the [LICENSE](https://github.com/NormandErwan/ArucoUnityPlugin/LICENSE) file for license rights and limitations (3-clause BSD license).

See [https://github.com/NormandErwan/ArucoUnityPlugin/3rdparty/](https://github.com/NormandErwan/ArucoUnityPlugin/3rdparty) for the OpenCV license. ArucoUnity uses the following modules: [aruco](https://github.com/opencv/opencv_contrib/tree/master/modules/aruco), [cablid3d](http://docs.opencv.org/master/d9/d0c/group__calib3d.html), [ccalib](http://docs.opencv.org/master/d3/ddc/group__ccalib.html)