@interface VNFaceSegmentGenerator : VNEspressoModelFileBasedDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
- (BOOL)_getFaceSegmenterInputImageSize:forRequestRevision:error:;
- (BOOL)_getNumberOfSupportedFaceSegments:forRequestRevision:error:;
- (BOOL)_fillFaceSegmentLabelToProbabilityMap:error:;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:;
+ (id)espressoModelFileNameForConfigurationOptions:;
+ (float)_faceSegmenterMaximumInputImageAspectRatio;
@end
