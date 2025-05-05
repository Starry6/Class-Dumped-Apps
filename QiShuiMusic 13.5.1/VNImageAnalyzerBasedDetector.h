@interface VNImageAnalyzerBasedDetector : VNDetector
- (id)inputImageSize;
- (id)internalProcessUsingQualityOfServiceClass:options:regionOfInterest:warningRecorder:error:progressHandler:;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
- (unsigned long long)defaultImageCropAndScaleOption;
- (BOOL)configureImageAnalyzerOptions:error:;
- (unsigned int)analysisTypesForProcessOptions:;
- (id)observationsForLastAnalysisOfImageAnalyzer:processOptions:originatingRequestSpecifier:qosClass:error:;
- (BOOL)providesSceneLabels;
- (id)sceneLabelsFileName;
- (id)supportedClassificationIdentifiersAcceptedByBlock:error:;
- (id)observationsForSceneLabelsFromLastAnalysisOfImageAnalyzer:identifierAcceptingBlock:operationPointsProvider:originatingRequestSpecifier:qosClass:error:;
- (BOOL)providesSegmentationLabels;
- (id)segmentationLabelsFileName;
- (BOOL)supportsProcessingDevice:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedImageSizeSetForOptions:error:;
+ (id)modelNameForConfiguration:;
+ (id)inputImageBlobNameForConfiguration:;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:;
@end
