@interface AWEUITracker : NSObject
- (void)track:event:params:;
+ (void)lazyLoad;
+ (void)awe_UITracker_run;
+ (void)enableUISwizzleIfNeeded;
+ (id)sharedInstance;
@end
