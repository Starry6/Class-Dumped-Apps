@interface AWEStudioIdleTimerHandler : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) @? disableIdleTimerTrigger;
- (void)restoreIdleTimerIfNeeded;
- (void)disableIdleTimerIfNeeded;
- (void)setDisableIdleTimerTrigger:;
- (id)disableIdleTimerTrigger;
- (id)init;
- (void)setEnabled:;
- (BOOL)enabled;
- (void).cxx_destruct;
+ (id)idleTimerHandler;
@end
