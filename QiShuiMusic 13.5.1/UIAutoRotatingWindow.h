@interface UIAutoRotatingWindow : UIApplicationRotationFollowingWindow
- (id)_initWithFrame:debugName:windowScene:;
- (void)_didRemoveSubview:;
- (id)_initWithFrame:attached:;
- (void)updateForOrientation:;
- (void)commonInit;
- (id)hitTest:withEvent:;
@end
