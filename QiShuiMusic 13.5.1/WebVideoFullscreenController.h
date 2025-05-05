@interface WebVideoFullscreenController : NSObject
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setVideoElement:;
- (id)videoElement;
- (void)enterFullscreen:mode:;
- (void)exitFullscreen;
- (void)requestHideAndExitFullscreen;
- (void)didFinishFullscreen:;
@end
