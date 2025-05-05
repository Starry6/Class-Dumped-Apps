@interface VNDocumentSegmentationDetector : VNImageAnalyzerBasedDetector
- (BOOL)configureImageAnalyzerOptions:error:;
- (unsigned int)analysisTypesForProcessOptions:;
- (id)observationsForLastAnalysisOfImageAnalyzer:processOptions:originatingRequestSpecifier:qosClass:error:;
- (id)segmentationLabelsFileName;
+ (id)modelNameForConfiguration:;
+ (id)inputImageBlobNameForConfiguration:;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:;
@end
