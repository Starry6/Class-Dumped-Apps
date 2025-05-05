@interface VNCreateImageFingerprintsRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (id)applicableDetectorTypeForRevision:error:;
+ (id)vcp_sceneRequest;
+ (Class)configurationClass;
+ (id)revisionAvailability;
@end
