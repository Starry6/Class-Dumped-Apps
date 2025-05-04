@interface AWEOnPlayAndMonitorBaseHandler : NSObject
@property (nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> playerViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onPlayerWillLoopPlaying:;
- (void)onPlayer:didChangePlaybackStateWithAction:context:;
- (void)onBackgroundPlay;
- (id)paramsForVideoPlayQuality;
- (id)paramsForVideoPlayEnd;
- (id)paramsForVideoPlayFailed:;
- (id)paramsForVideoRequest:;
- (id)paramsForVideoRequestResponse;
- (id)paramsForVideoBlock;
- (void)onPrepareToPlay:;
- (void)onStopWithHold:async:;
- (id)init;
- (void).cxx_destruct;
- (id)playerViewController;
- (void)setPlayerViewController:;
- (void)onResume;
- (id)initWithPlayerController:;
- (void)onPause;
- (void)onPlay:;
@end
