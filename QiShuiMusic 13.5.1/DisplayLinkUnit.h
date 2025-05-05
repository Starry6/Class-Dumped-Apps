@interface DisplayLinkUnit : NSObject
@property (nonatomic) @? displayCallbackBlock;
- (id)displayCallbackBlock;
- (BOOL)isTimerPaused;
- (void)setDisplayCallbackBlock:;
- (void)setRenderInTimerEnable:;
- (void)setRenderTimerFrameRate:;
- (void)timerLoop:;
- (void)stopTimer;
- (id)init;
- (void)dealloc;
- (void)pauseTimer;
- (void).cxx_destruct;
- (void)resumeTimer;
@end
