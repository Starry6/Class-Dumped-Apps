@interface VNFaceLandmarkDetectorRevision3 : VNFaceLandmarkDetectorDNN
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (id)normalizedFaceBBoxForLandmarks:;
+ (void)recordDefaultConfigurationOptionsInDictionary:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (id)espressoModelFileNameForConfigurationOptions:;
+ (unsigned char)landmarkDetectorDNNVersion;
@end
