@interface VNClassifyFaceAttributesRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray inputFaceObservations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)warmUpSession:error:;
- (long long)dependencyProcessingOrdinality;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)applicableDetectorTypeForRevision:error:;
+ (id)descriptionForPrivateRevision:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
@end
