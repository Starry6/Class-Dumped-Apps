@interface VNRecognizeAnimalsRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (long long)dependencyProcessingOrdinality;
- (id)applicableDetectorTypeForRevision:error:;
- (id)supportedIdentifiersAndReturnError:;
+ (id)descriptionForPrivateRevision:;
+ (id)knownAnimalIdentifiersForRevision:error:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
@end
