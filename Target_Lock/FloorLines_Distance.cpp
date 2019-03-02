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

#include "Distance_Calibration.h"

int calc_Distance(int yCoord, int* yCoordArr){
	int distance;
	if(yCoord < yCoordArr[0] && yCoord > yCoord[yCoordArr.size - 1]){
		//too far or too close
		return -1;
	}
	for(int i = 0; i < yCoordArr.size -1; i++){
		// Search from longest distance (lowest y) to shortest distance (highest y)
		if(yCoord > yCoordArr[i] && yCoord < yCoordArr[i + 1]){ //yCoordArr goes in order, distance is flipped
			distance = ((yCoordArr[i +1] - yCoord)/(yCoordArr[i+1] - yCoordArr[i]))*(distances[i] - distances[i+1]) + distances[i+1];
		}
	}
	return distance;


}

int main()
{
    calc_Distance(y);

	return 0;
}
