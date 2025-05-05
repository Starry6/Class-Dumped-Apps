@interface VNDetectHumanBodyPoseRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (id)applicableDetectorTypeForRevision:error:;
+ (Class)configurationClass;
+ (id)revisionAvailability;
+ (id)supportedJointNamesForRevision:error:;
+ (id)supportedJointsGroupNamesForRevision:error:;
@end
