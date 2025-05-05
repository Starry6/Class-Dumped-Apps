@interface VNCreateSceneprintRequest : VNImageBasedRequest
@property (nonatomic) BOOL useCenterTileOnly;
@property (nonatomic) BOOL returnAllResults;
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
- (BOOL)hasCancellationHook;
- (id)supportedImageSizeSet;
- (BOOL)returnAllResults;
- (void)setReturnAllResults:;
- (BOOL)useCenterTileOnly;
- (void)setUseCenterTileOnly:;
+ (id)vcp_sceneRequest;
+ (id)vcp_sceneRequestForWallpaper;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:;
+ (id)defaultProcessingDeviceForRevision:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
@end
