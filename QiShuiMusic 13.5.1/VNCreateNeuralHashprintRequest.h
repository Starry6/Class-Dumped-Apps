@interface VNCreateNeuralHashprintRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)applicableDetectorTypeForRevision:error:;
+ (BOOL)warmUpSession:error:;
+ (Class)configurationClass;
+ (id)defaultProcessingDeviceForRevision:;
+ (id)revisionAvailability;
@end
