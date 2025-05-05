@interface AWEForcedStatusBarController : NSObject
+ (void)forceHideStatusBar;
+ (void)lockCurrentStatusBar;
+ (void)unlockCurrentStatusBar;
+ (void)updateCurrentStatusBarWith:;
@end
