@interface ABPKBreakthroughResult : NSObject
@property (nonatomic) ABPK2dSkeleton skeleton2D;
@property (nonatomic) BOOL isPoseValid;
@property (nonatomic) I trackingId;
@property (nonatomic) BOOL isFaceVisible;
@property (nonatomic) BOOL isRaisingHand;
@property (nonatomic) BOOL isWavingHand;
- (unsigned int)trackingId;
- (id)init;
- (void).cxx_destruct;
- (int)overlayResultOnImage:withResult:withColor:;
- (id)skeleton2D;
- (BOOL)isPoseValid;
- (id)initWith2dSkeleton:isPoseValid:trackingId:isFaceVisible:isRaisingHand:isWavingHand:;
- (void)set2dSkeleton:isPoseValid:trackingId:isFaceVisible:isRaisingHand:isWavingHand:;
- (BOOL)isFaceVisible;
- (BOOL)isRaisingHand;
- (BOOL)isWavingHand;
@end
