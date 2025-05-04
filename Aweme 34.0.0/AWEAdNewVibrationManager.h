@interface AWEAdNewVibrationManager : HTSService
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
@property (nonatomic) @? playerCurrentPlaybackTime;
- (void)onPlayer:didChangeStallState:actionType:reason:;
- (void)onUpdatePlayerController:withPlayVideoVC:;
- (void)onPlayer:didChangePlaybackStateWithAction:;
- (void)onPlayerWillLoopPlaying:;
- (void)preloadVibrationResourceFor:;
- (void)removeCacheFor:;
- (void)closeAdOperationGuide;
- (id)initWithAweme:;
- (id)commerceContext;
- (void)setCommerceContext:;
- (id)playerCurrentPlaybackTime;
- (void)setPlayerCurrentPlaybackTime:;
- (id)init;
- (void)prepareForDisplay;
- (void).cxx_destruct;
+ (BOOL)canShowComponentWithContext:;
@end
