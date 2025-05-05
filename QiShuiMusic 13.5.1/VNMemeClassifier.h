@interface VNMemeClassifier : VNImageAnalyzerBasedDetector
- (BOOL)completeInitializationForSession:error:;
- (BOOL)configureImageAnalyzerOptions:error:;
- (unsigned int)analysisTypesForProcessOptions:;
- (id)observationsForLastAnalysisOfImageAnalyzer:processOptions:originatingRequestSpecifier:qosClass:error:;
- (id)sceneLabelsFileName;
- (id)supportedIdentifiersWithOptions:error:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)modelNameForConfiguration:;
+ (id)inputImageBlobNameForConfiguration:;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:;
@end
