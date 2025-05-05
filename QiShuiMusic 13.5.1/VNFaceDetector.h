@interface VNFaceDetector : VNDetector
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)internalProcessUsingQualityOfServiceClass:options:regionOfInterest:warningRecorder:error:progressHandler:;
- (void)purgeIntermediates;
+ (void)recordDefaultConfigurationOptionsInDictionary:;
+ (void)printDebugInfo:facesDataRaw:faceDetectorBGRAImage:tempImage:;
+ (BOOL)calculateTilesForRegionOfInterest:imageWidth:imageHeight:tileSizeInPixels:overlapFraction:aspectRatioThreshold:columns:rows:tiles:error:;
+ (BOOL)shouldDumpDebugIntermediates;
+ (void)fullyPopulateConfigurationOptions:;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:error:;
@end
