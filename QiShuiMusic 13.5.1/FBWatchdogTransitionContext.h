@interface FBWatchdogTransitionContext : NSObject
@property (nonatomic) BOOL runIndependently;
@property (nonatomic) q watchdogBehavior;
@property (nonatomic) <FBProcessWatchdogProviding> watchdogProvider;
- (void)setWatchdogBehavior:;
- (void)setRunIndependently:;
- (BOOL)runIndependently;
- (void).cxx_destruct;
- (void)setWatchdogProvider:;
- (long long)watchdogBehavior;
- (id)watchdogProvider;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
@end
