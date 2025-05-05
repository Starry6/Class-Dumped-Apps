@interface ASOOverlayWindow : UIApplicationRotationFollowingWindow
- (id)initWithWindowScene:;
- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)isInternalWindow;
- (id)hitTest:withEvent:;
+ (BOOL)_isSystemWindow;
@end
