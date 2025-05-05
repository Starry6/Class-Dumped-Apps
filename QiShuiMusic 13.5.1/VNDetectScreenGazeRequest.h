@interface VNDetectScreenGazeRequest : VNStatefulRequest
@property (nonatomic) q temporalSmoothingFrameCount;
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray inputFaceObservations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (void).cxx_destruct;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)applicableDetectorTypeForRevision:error:;
- (id)initWithCompletionHandler:;
- (long long)temporalSmoothingFrameCount;
- (void)setTemporalSmoothingFrameCount:;
+ (id)dependentRequestCompatibility;
+ (Class)configurationClass;
+ (unsigned long long)applicableRevisionForDependentRequestOfClass:beingPerformedByRevision:;
@end
