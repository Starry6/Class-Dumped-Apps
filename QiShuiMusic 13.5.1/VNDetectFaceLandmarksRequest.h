@interface VNDetectFaceLandmarksRequest : VNImageBasedRequest
@property (nonatomic) BOOL refineMouthRegion;
@property (nonatomic) BOOL refineLeftEyeRegion;
@property (nonatomic) BOOL refineRightEyeRegion;
@property (nonatomic) BOOL performBlinkDetection;
@property (nonatomic) NSNumber cascadeStepCount;
@property (nonatomic) Q constellation;
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray inputFaceObservations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (BOOL)refineMouthRegion;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (void)setRefineLeftEyeRegion:;
- (BOOL)refineLeftEyeRegion;
- (void)setProcessedResults:;
- (void)setConstellation:;
- (id)cascadeStepCount;
- (long long)dependencyProcessingOrdinality;
- (BOOL)performBlinkDetection;
- (unsigned long long)constellation;
- (void)resolvedRevisionDidChangeFromRevision:;
- (void)setRefineRightEyeRegion:;
- (void)setCascadeStepCount:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)description;
- (void)setRefineMouthRegion:;
- (BOOL)refineRightEyeRegion;
- (id)applicableDetectorTypeForRevision:error:;
- (void)setPerformBlinkDetection:;
- (id)initWithCompletionHandler:;
+ (id)dependentRequestCompatibility;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:;
+ (BOOL)revision:supportsConstellation:;
+ (id)supportedPrivateRevisions;
+ (id)dependentRequestMappingTable;
+ (id)revisionAvailability;
@end
