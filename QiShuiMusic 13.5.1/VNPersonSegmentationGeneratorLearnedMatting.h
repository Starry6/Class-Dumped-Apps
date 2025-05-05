@interface VNPersonSegmentationGeneratorLearnedMatting : VNSegmentationGenerator
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (id)espressoModelFileNameForConfigurationOptions:;
+ (id)inputImageBlobName;
+ (id)inputMaskBlobName;
+ (id)outputMaskBlobNames;
+ (BOOL)rotateImageToMatchNetworkOrientation;
+ (BOOL)inputMaskRequired;
@end
