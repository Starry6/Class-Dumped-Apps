@interface AWEFeedAnimationDelayManager : NSObject
+ (BOOL)animationNeedsDelayWithType:;
+ (void)playAnimationAfterFeedReady:identifier:;
+ (void)cancelAnimationAfterFeedReadyWithIdentifier:;
+ (BOOL)enablePauseOnScrollWithType:;
+ (BOOL)enabledWithAnimationType:;
+ (void)triggerAnimationAfterFeedReady;
+ (id)config;
+ (BOOL)enabled;
@end
