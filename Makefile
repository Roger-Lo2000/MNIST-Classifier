CC = g++
CFLAGS = 
SRCS += main.cpp model.cpp print.cpp dataLoader.cpp

PROG = dataLoader

OPENCV = -ID:/opencv/build/include -LD:/opencv/build/lib -llibopencv_core455 -llibopencv_highgui455 -llibopencv_calib3d455 -llibopencv_core455 -llibopencv_dnn455 -llibopencv_features2d455 -llibopencv_flann455 -llibopencv_gapi455 -llibopencv_highgui455 -llibopencv_imgcodecs455 -llibopencv_imgproc455 -llibopencv_ml455 -llibopencv_objdetect455 -llibopencv_photo455 -llibopencv_stitching455 -llibopencv_video455 -llibopencv_videoio455

LIBS = $(OPENCV)

$(PROG):$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(OPENCV)