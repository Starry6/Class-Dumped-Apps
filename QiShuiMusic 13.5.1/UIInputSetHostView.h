@interface UIInputSetHostView : UIView
- (void)_didChangeKeyplaneWithContext:;
- (int)textEffectsVisibilityLevel;
- (unsigned long long)_clipCornersOfView:;
- (void)layoutIfNeeded;
- (BOOL)pointInside:withEvent:;
- (void)_updateSafeAreaInsets;
- (id)hitTest:withEvent:;
+ (BOOL)_notifyOnExplicitLayout;
+ (BOOL)requiresConstraintBasedLayout;
+ (BOOL)_shouldHitTestInputViewFirst;
@end
