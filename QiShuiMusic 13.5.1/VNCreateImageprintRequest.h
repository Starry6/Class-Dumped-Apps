@interface VNCreateImageprintRequest : VNImageBasedRequest
@property (nonatomic) NSNumber timeStamp;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)timeStamp;
- (id)applicableDetectorTypeForRevision:error:;
- (void)setTimeStamp:;
+ (Class)configurationClass;
@end
