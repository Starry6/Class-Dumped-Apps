@interface CBFrameLink : NSObject
@property (nonatomic) double targetTimestamp;
- (id)init;
- (void)dealloc;
- (void)setPreferredFramesPerSecond:;
- (BOOL)isPaused;
- (void)resume;
- (double)targetTimestamp;
- (void)pause;
- (void)invalidate;
- (void)frameSync:;
- (id)initWithDisplay:andQueue:;
- (void)scheduleWithDispatchQueue:;
- (void)setFrameNotificationBlock:;
@end
