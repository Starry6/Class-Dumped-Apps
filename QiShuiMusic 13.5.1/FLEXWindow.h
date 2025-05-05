@interface FLEXWindow : UIWindow
@property (nonatomic) <FLEXWindowEventDelegate> eventDelegate;
@property (nonatomic) UIWindow previousKeyWindow;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_canAffectStatusBarAppearance;
- (id)initWithFrame:;
- (BOOL)pointInside:withEvent:;
- (BOOL)shouldAffectStatusBarAppearance;
- (BOOL)canBecomeKeyWindow;
- (void)makeKeyWindow;
- (void)resignKeyWindow;
- (BOOL)_shouldCreateContextAsSecure;
- (id)eventDelegate;
- (void)setEventDelegate:;
- (id)previousKeyWindow;
- (void).cxx_destruct;
@end
