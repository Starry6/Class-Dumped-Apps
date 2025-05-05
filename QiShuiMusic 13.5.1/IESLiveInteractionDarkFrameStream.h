@interface IESLiveInteractionDarkFrameStream : NSObject
@property (nonatomic) BOOL streamPushing;
@property (nonatomic) q fps;
@property (nonatomic) {CGSize=dd} outputSize;
@property (nonatomic) @? pushStreamCallback;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) UIImage customImage;
- (void)p_pushDarkFrame;
- (id)p_makeDarkFrame;
- (id)initWithFPS:outputSize:;
- (void)p_releaseDarkFrameIfNeeded;
- (id)pushStreamCallback;
- (void)setPushStreamCallback:;
- (void)setStreamPushing:;
- (void)startPushStream:;
- (void)stopPushStream;
- (BOOL)streamPushing;
- (id)displayLink;
- (void)setDisplayLink:;
- (void)dealloc;
- (id)outputSize;
- (void).cxx_destruct;
- (long long)fps;
- (id)customImage;
- (void)setCustomImage:;
- (void)setFps:;
- (void)setOutputSize:;
@end
