@interface ABPKSinglePerson2DResult : NSObject
@property (nonatomic) ABPK2dSkeleton skeleton2D;
@property (nonatomic) BOOL isPoseValid;
@property (nonatomic) I trackingId;
- (unsigned int)trackingId;
- (id)init;
- (void).cxx_destruct;
- (int)overlayResultOnImage:withResult:withColor:;
- (id)skeleton2D;
- (BOOL)isPoseValid;
- (void)set2dSkeleton:isPoseValid:trackingId:;
@end
