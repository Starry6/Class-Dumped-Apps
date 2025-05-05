@interface VNDetectFacePoseRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray inputFaceObservations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)internalPerformRevision:inContext:error:;
- (long long)dependencyProcessingOrdinality;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
+ (id)dependentRequestCompatibility;
+ (id)descriptionForPrivateRevision:;
+ (id)supportedPrivateRevisions;
+ (id)dependentRequestMappingTable;
@end
