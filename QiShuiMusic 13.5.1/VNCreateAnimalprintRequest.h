@interface VNCreateAnimalprintRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray inputDetectedObjectObservations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)internalPerformRevision:inContext:error:;
- (long long)dependencyProcessingOrdinality;
- (id)applicableDetectorTypeForRevision:error:;
- (void)_determineAnimalsToProcessFrom:outputAnimalsThatNeedNoProcessing:outputAnimalsThatNeedAnimalprints:;
+ (id)descriptionForPrivateRevision:;
+ (id)createVNEntityIdentificationModelEntryPrintForRevision:fromDescriptorData:length:elementCount:error:;
+ (id)supportedPrivateRevisions;
+ (id)dependentRequestMappingTable;
+ (id)revisionAvailability;
@end
