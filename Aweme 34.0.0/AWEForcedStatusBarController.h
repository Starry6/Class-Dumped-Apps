@interface AWEForcedStatusBarController : NSObject
+ (void)lockCurrentStatusBar;
+ (void)forceHideStatusBar;
+ (void)updateCurrentStatusBarWith:;
+ (void)unlockCurrentStatusBar;
@end
