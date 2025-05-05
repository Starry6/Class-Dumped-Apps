@interface VNRemoveBackgroundRequest : VNImageBasedRequest
@property (nonatomic) BOOL usesCPUOnly;
@property (nonatomic) BOOL performInPlace;
@property (nonatomic) BOOL cropResult;
@property (nonatomic) BOOL returnMask;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (BOOL)performInPlace;
- (void)setPerformInPlace:;
- (BOOL)cropResult;
- (void)setCropResult:;
- (BOOL)returnMask;
- (void)setReturnMask:;
+ (Class)configurationClass;
+ (id)revisionAvailability;
@end
