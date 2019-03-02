//#include "WPILib.h"
#include <cscore.h>
#include <cscore_cpp.h>
#include <cameraserver/CameraServer.h>
#include <cameraserver/CameraServerShared.h>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <thread>
#include <chrono>

//160x180 (small)
static double distances[4] = {3, 1, 2, 0};
static double small_yCoord[4] = {115.0, 69.2, 37.5, 14.2};
static double medium_yCoord[4] = {230.0, 138.3, 75.0, 28.3};
static double big_yCoord[4] = {690.0, 415.0, 225.0, 85.0};
