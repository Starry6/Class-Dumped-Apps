@interface VKQuickDynamicAnimation : VKDynamicAnimation
@property (nonatomic) double lastTimestamp;
- (void)setLastTimestamp:;
- (void)onTimerFired:;
- (double)lastTimestamp;
@end
