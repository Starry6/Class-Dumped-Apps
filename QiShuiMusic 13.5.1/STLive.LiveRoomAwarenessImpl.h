@interface STLive.LiveRoomAwarenessImpl : NSObject
- (void)audienceRoomAwareness:;
- (void)disableFullscreenPopTransitionFor:;
- (void)enableFullscreenPopTransitionFor:;
- (void)enableFullscreenPopTransitionFor:panBegin:restoreBlock:endBlock:;
- (void)forbidInteractivePopGestureRecognizerFor:;
- (void)hideNavigationBarFor:;
- (void)setStatusBarStyleFor:style:;
- (id)init;
@end
