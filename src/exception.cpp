#include "aruco_unity_plugin/cv/exception.hpp"
#ifdef _WIN32
  #include <cstring>
#else
  #include <string.h>
#endif

extern "C" {
  // Constructors & Destructors

  cv::Exception* au_cv_Exception_new() {
    return new cv::Exception();
  }

  void au_cv_Exception_delete(cv::Exception* exception) {
    delete exception;
  }

  // Functions

  void au_cv_Exception_what(cv::Exception* exception, char* what, int whatLength) {
#ifdef _WIN32
    strcpy_s(what, whatLength, exception->what());
#else
    strncpy(what, exception->what(), whatLength);
#endif
  }

  // Variables

  int au_cv_Exception_getCode(cv::Exception* exception) {
    return exception->code;
  }
}