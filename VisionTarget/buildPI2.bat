set /P ip=169.254.247.86
set /P copyfilename=VisionTarget
make
pause
scp VisionTarget pi@169.254.247.86:~/RP_Vision_2019/VisionTarget/VisionTarget
scp VisionTarget pi@169.254.247.86:~/RP_Vision_2019/VisionTarget/VisionTarget.o
scp GripPipeline.o pi@169.254.247.86:~/RP_Vision_2019/VisionTarget/GripPipeline.o