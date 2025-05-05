@interface VNClassifyPotentialLandmarkRequest : VNImageBasedRequest
@property (nonatomic) Q imageCropAndScaleOption;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
- (id)supportedIdentifiersAndReturnError:;
+ (id)vcp_sceneRequest;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:;
+ (id)knownClassificationsForRevision:error:;
@end
