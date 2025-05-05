@interface VNSmartCam5GatingDetector : VNImageAnalyzerBasedDetector
@property (nonatomic) NSArray supportedDocumentElementIdentifiers;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:error:;
- (unsigned long long)defaultImageCropAndScaleOption;
- (BOOL)configureImageAnalyzerOptions:error:;
- (unsigned int)analysisTypesForProcessOptions:;
- (id)observationsForLastAnalysisOfImageAnalyzer:processOptions:originatingRequestSpecifier:qosClass:error:;
- (id)sceneLabelsFileName;
- (id)segmentationLabelsFileName;
- (id)supportedClassificationIdentifiersWithOptions:error:;
- (id)supportedDocumentElementIdentifiers;
+ (id)inferenceNetworkIdentifiers;
+ (id)modelNameForConfiguration:;
+ (id)inputImageBlobNameForConfiguration:;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:;
+ (id)availableVNInferenceNetworkIdentifierSmartCamVersions;
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSmartCam_5_0_0;
@end
