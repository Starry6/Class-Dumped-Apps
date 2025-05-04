@interface AWEIMPictureInPictureGuide : NSObject
@property (nonatomic) AVQueuePlayer player;
@property (nonatomic) AVPlayerLayer playerLayer;
@property (nonatomic) AVPlayerLooper playerLooper;
@property (nonatomic) AVPictureInPictureController pipController;
@property (nonatomic) @ holdSelf;
@property (nonatomic) @? statusChangedBlock;
- (void)minimizeApp;
- (void)setHoldSelf:;
- (id)holdSelf;
- (void)p_updateStatus:;
- (void)startPIPGuideInView:URL:;
- (id)playerLayer;
- (id)init;
- (id)pipController;
- (void)dealloc;
- (void)setPipController:;
- (id)player;
- (void)setPlayerLayer:;
- (void)setPlayer:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)appDidBecomeActive;
- (id)playerLooper;
- (void)setPlayerLooper:;
- (void)setStatusChangedBlock:;
- (id)statusChangedBlock;
@end
