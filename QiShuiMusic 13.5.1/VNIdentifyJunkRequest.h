@interface VNIdentifyJunkRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)applicableDetectorTypeForRevision:error:;
@end
