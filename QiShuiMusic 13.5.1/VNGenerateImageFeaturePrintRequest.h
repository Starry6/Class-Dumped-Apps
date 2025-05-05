@interface VNGenerateImageFeaturePrintRequest : VNImageBasedRequest
@property (nonatomic) Q imageCropAndScaleOption;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)description;
- (id)applicableDetectorTypeForRevision:error:;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
+ (Class)configurationClass;
@end
