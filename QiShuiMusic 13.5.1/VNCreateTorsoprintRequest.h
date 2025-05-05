@interface VNCreateTorsoprintRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray inputFaceObservations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray inputDetectedObjectObservations;
- (BOOL)internalPerformRevision:inContext:error:;
- (long long)dependencyProcessingOrdinality;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)applicableDetectorTypeForRevision:error:;
- (BOOL)_processFaceBasedInputInContext:revision:torsosThatNeedNoProcessing:torsosThatNeedTorsoprints:error:;
- (BOOL)_processHumanBodyBasedInputInContext:revision:torsosThatNeedNoProcessing:torsosThatNeedTorsoprints:error:;
- (id)_processHumanBodyObservations:revision:regionOfInterest:context:error:;
- (id)detectHumanBodiesInContext:error:;
+ (id)dependentRequestCompatibility;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
@end
