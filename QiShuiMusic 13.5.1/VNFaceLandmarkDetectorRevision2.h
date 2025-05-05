@interface VNFaceLandmarkDetectorRevision2 : VNFaceLandmarkDetectorDNN
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (id)espressoModelFileNameForConfigurationOptions:;
+ (unsigned char)landmarkDetectorDNNVersion;
@end
