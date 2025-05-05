@interface VNClassifyJunkImageRequest : VNImageBasedRequest
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
- (id)supportedIdentifiersAndReturnError:;
+ (id)vcp_sceneRequest;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
+ (id)knownClassificationsForRevision:error:;
@end
