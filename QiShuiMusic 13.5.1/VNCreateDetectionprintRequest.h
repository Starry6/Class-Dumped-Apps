@interface VNCreateDetectionprintRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)applicableDetectorTypeForRevision:error:;
+ (Class)configurationClass;
@end
