@interface CADynamicFrameRateSource : NSObject
@property (nonatomic) {CAFrameRateRange=fff} preferredFrameRateRange;
@property (nonatomic) BOOL paused;
- (void)dealloc;
- (id)preferredFrameRateRange;
- (BOOL)isPaused;
- (void)setPreferredFrameRateRange:;
- (void)setPaused:;
- (id)initWithDisplay:;
- (void)setHighFrameRateReasons:count:;
- (double)commitDeadline;
- (double)commitDeadlineAfterTimestamp:;
- (BOOL)shiftFramePhaseBy:;
@end
