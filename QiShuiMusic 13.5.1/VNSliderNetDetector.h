@interface VNSliderNetDetector : VNImageAnalyzerBasedDetector
- (BOOL)configureImageAnalyzerOptions:error:;
- (unsigned int)analysisTypesForProcessOptions:;
- (id)observationsForLastAnalysisOfImageAnalyzer:processOptions:originatingRequestSpecifier:qosClass:error:;
+ (id)modelNameForConfiguration:;
+ (id)inputImageBlobNameForConfiguration:;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:;
+ (id)supportedAdjustmentKeysForConfiguration:error:;
@end
