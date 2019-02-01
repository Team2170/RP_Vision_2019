EXE=test_stream_2
CXX=arm-raspbian9-linux-gnueabihf-g++ 
DESTDIR?=/home/pi/

.PHONY: clean build

build: ${EXE}

clean:
	rm ${EXE} *.o

${EXE}: test_stream_2.o GripPipeline.o
	${CXX} -pthread -o $@ $< GripPipeline.o \
	    -L"C:\Users\Martin\Documents\FRC_2019\Software\Raspbian9-Windows-Toolchain-6.3.0\raspbian9\arm-raspbian9-linux-gnueabihf\RP_frc\frc\lib" \
	    -lwpilibc \
	    -lwpiHal \
	    -lcameraserver \
	    -lcscore \
	    -lntcore \
	    -lwpiutil \
	    -lopencv_ml \
	    -lopencv_objdetect \
	    -lopencv_shape \
	    -lopencv_stitching \
	    -lopencv_superres \
	    -lopencv_videostab \
	    -lopencv_calib3d \
	    -lopencv_features2d \
	    -lopencv_highgui \
	    -lopencv_videoio \
	    -lopencv_imgcodecs \
	    -lopencv_video \
	    -lopencv_photo \
	    -lopencv_imgproc \
	    -lopencv_flann \
	    -lopencv_core

.cpp.o:
	${CXX} -pthread -O -c -o $@ -I"C:\Users\Martin\Documents\FRC_2019\Software\Raspbian9-Windows-Toolchain-6.3.0\raspbian9\arm-raspbian9-linux-gnueabihf\RP_frc\frc\include" $<
