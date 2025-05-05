@interface UIAccessibilityHUDWindow : UIApplicationRotationFollowingWindow
- (double)_adjustedWindowLevelFromLevel:;
+ (id)sharedWindow;
+ (void)createSharedWindowWithScene:;
+ (void)removeSharedWindow;
@end
