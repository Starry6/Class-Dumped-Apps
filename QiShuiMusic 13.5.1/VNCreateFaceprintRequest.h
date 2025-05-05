@interface VNCreateFaceprintRequest : VNImageBasedRequest
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
- (id)applicableDetectorTypeForRevision:error:;
- (void)setForceFaceprintCreation:;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:;
+ (id)defaultProcessingDeviceForRevision:;
+ (id)createVNEntityIdentificationModelEntryPrintForRevision:fromDescriptorData:length:elementCount:error:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
@end
