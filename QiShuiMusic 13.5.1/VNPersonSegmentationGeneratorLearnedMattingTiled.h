@interface VNPersonSegmentationGeneratorLearnedMattingTiled : VNPersonSegmentationGeneratorLearnedMatting
- (id)outputMaskSize;
- (id)calculateNumberOfTilesForNetworkInputImageSize:networkInputMaskSize:networkOutputMaskSize:rotated:;
+ (id)espressoModelFileNameForConfigurationOptions:;
+ (BOOL)supportsTiling;
@end
