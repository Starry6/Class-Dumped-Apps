@interface AWEInnerNotificationWindow : UIWindow
- (BOOL)shouldAffectStatusBarAppearance;
- (id)hitTest:withEvent:;
- (BOOL)canBecomeKeyWindow;
@end
