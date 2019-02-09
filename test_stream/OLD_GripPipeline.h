#pragma once
#include "vision/VisionPipeline.h"

#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <vector>
#include <string>
#include <math.h>

namespace grip {

/**
* GripPipeline class.
* 
* An OpenCV pipeline generated by GRIP.
*/
class GripPipeline : public frc::VisionPipeline {
	private:
		cv::Mat desaturateOutput;
		cv::Mat cvApplycolormapOutput;
		void desaturate(cv::Mat &, cv::Mat &);
		void cvApplycolormap(cv::Mat &, int , cv::Mat &);

	public:
		GripPipeline();
		void Process(cv::Mat& source0) override;
		cv::Mat* GetDesaturateOutput();
		cv::Mat* GetCvApplycolormapOutput();
};


} // end namespace grip

