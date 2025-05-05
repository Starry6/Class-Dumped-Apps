@interface LPFullScreenVideoController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dismiss;
- (void)present;
- (void)prepareForDisplayWithCompletionHandler:;
- (void).cxx_destruct;
- (void)playerViewController:willBeginFullScreenPresentationWithAnimationCoordinator:;
- (void)playerViewController:willEndFullScreenPresentationWithAnimationCoordinator:;
- (BOOL)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:;
- (id)initWithPlayer:sourceView:;
- (void)setUpFullScreenVideoViewControllerIfNeeded;
- (void)didCompleteDismissal;
@end
