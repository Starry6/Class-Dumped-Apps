@interface VNClassifyCityNatureImageRequest : VNImageBasedRequest
@property (nonatomic) Q imageCropAndScaleOption;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (id)applicableDetectorTypeForRevision:error:;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
- (id)supportedIdentifiersAndReturnError:;
+ (id)vcp_sceneRequest;
+ (Class)configurationClass;
+ (id)revisionAvailability;
@end
