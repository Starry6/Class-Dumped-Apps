@interface SCNDisplayLink : NSObject
@property (nonatomic) BOOL paused;
@property (nonatomic) float preferredFrameRate;
@property (nonatomic) @? adaptativeFrameRate;
- (BOOL)_isInvalidated;
- (id)init;
- (void)dealloc;
- (BOOL)isPaused;
- (void)setPaused:;
- (void)setNeedsDisplay;
- (void)invalidate;
- (void)setPreferredFrameRate:;
- (float)preferredFrameRate;
- (void)_caDisplayLinkCallback;
- (id)initWithQueue:screen:policy:block:;
- (BOOL)setPaused:nextFrameTimeHint:lastUpdate:;
- (id)adaptativeFrameRate;
- (void)setAdaptativeFrameRate:;
- (int)queuedFrameCount;
- (void)_callbackWithTime:;
@end
