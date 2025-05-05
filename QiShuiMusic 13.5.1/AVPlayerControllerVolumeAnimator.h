@interface AVPlayerControllerVolumeAnimator : NSObject
@property (nonatomic) double volumeToRestore;
@property (nonatomic) BOOL animatingTowardsZero;
@property (nonatomic) BOOL animatingAwayFromZero;
@property (nonatomic) AVPlayerController playerController;
- (BOOL)currentRouteHasVolumeControl;
- (id)playerController;
- (void).cxx_destruct;
- (id)initWithPlayerController:;
- (BOOL)canAnimateVolumeTowardsZero;
- (BOOL)canAnimateVolumeAwayFromZero;
- (void)setProgressTowardsZero:;
- (void)setProgressAwayFromZero:;
- (void)restoreVolumeIfNeeded;
- (double)volumeToRestore;
- (void)setVolumeToRestore:;
- (BOOL)isAnimatingTowardsZero;
- (void)setAnimatingTowardsZero:;
- (BOOL)isAnimatingAwayFromZero;
- (void)setAnimatingAwayFromZero:;
@end
