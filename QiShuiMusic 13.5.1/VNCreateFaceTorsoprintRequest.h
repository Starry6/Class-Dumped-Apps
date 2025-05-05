@interface VNCreateFaceTorsoprintRequest : VNImageBasedRequest
@property (nonatomic) BOOL forceFaceprintCreation;
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray inputFaceObservations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)internalPerformRevision:inContext:error:;
- (BOOL)warmUpSession:error:;
- (long long)dependencyProcessingOrdinality;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (BOOL)forceFaceprintCreation;
- (void)setForceFaceprintCreation:;
- (id)initWithCompletionHandler:;
+ (id)dependentRequestCompatibility;
+ (BOOL)warmUpSession:error:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
+ (unsigned long long)faceprintRequestRevisionForFaceTorsoRequestRevision:error:;
+ (unsigned long long)torsoprintRequestRevisionForFaceTorsoRequestRevision:error:;
@end
