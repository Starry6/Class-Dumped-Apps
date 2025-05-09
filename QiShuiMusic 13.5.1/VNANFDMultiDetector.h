@interface VNANFDMultiDetector : VNEspressoModelFileBasedDetector
@property (nonatomic) ShotflowDetector shotflowDetector;
- (id)splitDetectedClassResultsIntoSubclasses:;
- (id)internalProcessUsingQualityOfServiceClass:options:regionOfInterest:warningRecorder:error:progressHandler:;
- (BOOL)updateRuntimeParametersFromOptions:error:;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (BOOL)processDetectedObject:originatingRequestSpecifier:objectBoundingBox:imageBuffer:qosClass:warningRecorder:detectedObjectResults:error:;
- (id)_alignFace:imageBuffer:qosClass:warningRecorder:error:;
- (void)processRecognizedObjectWithIdentifier:originatingRequestSpecifier:objectBoundingBox:objectConfidence:detectedObjectResults:;
- (BOOL)isDetectedObject:ofAGivenObjectSubClass:;
- (id)shotflowDetector;
+ (id)recognizedAnimalObjectClassToAnimalName;
+ (BOOL)shouldAlignFacesForRequestWithSpecifier:;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)knownAnimalIdentifiers;
+ (id)detectedObjectClassToRequestKey;
+ (id)detectedObjectRequestKeyToRequestInfo;
+ (Class)anfdMultiDetectorClassToProcessRequest:;
+ (id)espressoModelFileNameForConfigurationOptions:;
+ (id)supportedImageSizeSetForOptions:error:;
+ (void)_printDebugInfo:detectedObjectsRaw:faceDetectorBGRAImage:tempImage:;
+ (id)requestInfoForRequest:;
+ (Class)detectorClassForConfigurationOptions:error:;
@end
