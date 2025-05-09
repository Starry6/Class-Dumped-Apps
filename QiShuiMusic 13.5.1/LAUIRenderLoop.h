@interface LAUIRenderLoop : NSObject
@property (nonatomic) I highFrameRateReason;
@property (nonatomic) UIScreen screen;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) BOOL drawing;
@property (nonatomic) BOOL inApplicationContext;
@property (nonatomic) {CAFrameRateRange=fff} preferredFrameRateRange;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL effectivePaused;
@property (nonatomic) BOOL runnable;
@property (nonatomic) <LAUIRenderLoopDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)_applicationDidEnterBackground:;
- (void)setHighFrameRateReason:;
- (void)_applicationWillEnterForeground:;
- (BOOL)isInvalidated;
- (void)setDelegate:;
- (void)_applicationDidBecomeActive:;
- (id)preferredFrameRateRange;
- (BOOL)isPaused;
- (void)setPreferredFrameRateRange:;
- (id)screen;
- (void)setPaused:;
- (unsigned int)highFrameRateReason;
- (id)delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_didInvalidate;
- (BOOL)isRunnable;
- (BOOL)isDrawing;
- (void)setInApplicationContext:;
- (void)_willDraw;
- (void)_didDraw;
- (BOOL)_isForcingPause;
- (BOOL)attachToScreen:;
- (BOOL)isInApplicationContext;
- (BOOL)effectiveIsPaused;
@end
