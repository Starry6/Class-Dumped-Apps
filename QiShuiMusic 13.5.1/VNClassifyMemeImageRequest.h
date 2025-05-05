@interface VNClassifyMemeImageRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)applicableDetectorTypeForRevision:error:;
- (id)supportedIdentifiersAndReturnError:;
+ (id)vcp_sceneRequest;
+ (id)revisionAvailability;
@end
