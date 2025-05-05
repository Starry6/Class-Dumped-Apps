@interface ABPKGestureDetectionResult : NSObject
@property (nonatomic) ABPK2dSkeleton skeleton2D;
@property (nonatomic) BOOL isPoseValid;
@property (nonatomic) I trackingId;
@property (nonatomic) NSArray gestureTypes;
- (unsigned int)trackingId;
- (id)init;
- (void).cxx_destruct;
- (void)set2dSkeleton:isPoseValid:trackingId:gestureTypes:;
- (int)overlayResultOnImage:withResult:withColor:;
- (id)skeleton2D;
- (BOOL)isPoseValid;
- (id)gestureTypes;
@end
