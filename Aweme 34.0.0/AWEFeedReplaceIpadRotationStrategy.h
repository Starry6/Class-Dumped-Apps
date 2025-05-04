@interface AWEFeedReplaceIpadRotationStrategy : AWEFeedReplaceStrategy
@property (nonatomic) BOOL hasReplace;
@property (nonatomic) q triggerFrequencyTimeThreshold;
@property (nonatomic) q delayTrigger;
@property (nonatomic) double lastHorizontalTimeStamp;
- (void)deviceOrientationDidChange;
- (void)onStrategyInitWithConfig:;
- (void)setHasReplace:;
- (void)setDelayTrigger:;
- (void)setTriggerFrequencyTimeThreshold:;
- (void)setLastHorizontalTimeStamp:;
- (BOOL)hasReplace;
- (long long)delayTrigger;
- (double)lastHorizontalTimeStamp;
- (long long)triggerFrequencyTimeThreshold;
- (void)dealloc;
@end
