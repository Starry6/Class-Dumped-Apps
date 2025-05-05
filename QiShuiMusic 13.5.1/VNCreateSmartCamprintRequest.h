@interface VNCreateSmartCamprintRequest : VNImageBasedRequest
@property (nonatomic) BOOL returnAllResults;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (BOOL)returnAllResults;
- (void)setReturnAllResults:;
+ (Class)configurationClass;
+ (id)defaultProcessingDeviceForRevision:;
@end
