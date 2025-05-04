@interface AWEInnerNotificationWindow : UIWindow
@property (nonatomic) @? customPointInsideTest;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_canAffectStatusBarAppearance;
- (void)clearBackgroundRecursivelyInView:;
- (void)setLabelsColorWhiteInView:;
- (void)applyBlurEffectToView:;
- (void)setupBlurEffectForNotificationView;
- (void)didAddSubview:;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (BOOL)shouldAffectStatusBarAppearance;
- (id)aAWEPadBizUIAdapter;
- (void)setCustomPointInsideTest:;
- (id)customPointInsideTest;
- (BOOL)canBecomeKeyWindow;
- (BOOL)pointInside:withEvent:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
+ (void)interfaceOrientationAdaptTo:;
+ (Class)aAWEPadBizUIAdapterClass;
@end
