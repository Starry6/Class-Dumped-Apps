@interface VNFaceAnalyzerMultiDetectorFPrev3_1FArev1_3_MD2 : VNFaceAnalyzerMultiDetector
- (BOOL)_isFaceprintJunk:;
+ (id)inferenceNetworkIdentifiers;
+ (id)availableVNInferenceNetworkIdentifierFaceprintVersions;
+ (id)espressoModelFileNameForConfigurationOptions:;
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierFaceprint_3_1_0;
+ (id)modelVersionForOptions:;
@end
