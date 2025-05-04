@interface AWEAntiAddictMaskVideoPlayerWrapper : NSObject
@property (nonatomic) AWEAntiAddictMaskContext context;
@property (nonatomic) UIViewController<AWEAwemePlayVideoProtocol><AWEAwemePlayVideoControllerProtocol><AWEAwemePlayVideoTrackProtocol> videoController;
- (void)updatePlayerIfNeeded;
- (void)updateCoverImage;
- (void)setVideoViewFrame:;
- (BOOL)isPlaying;
- (void)play;
- (id)videoView;
- (void)prepareForDisplay;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
- (void)stop;
- (void)pause;
- (id)videoController;
- (void)setVideoController:;
- (void)willDisplay;
@end
