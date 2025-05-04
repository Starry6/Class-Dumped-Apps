@interface AWENearbyTapEnterDetailPageGuideView : UIView
@property (nonatomic) LOTAnimationView lottieView;
- (void)__setupUI;
- (id)lottieView;
- (void)setLottieView:;
- (void)beginAnimationForVisiableRect:completion:;
- (void)removeViewWithAnimate:completion:;
- (id)init;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (void)markDisplayed;
+ (BOOL)hasAlertInWindow;
+ (Class)layerClass;
+ (BOOL)isDisplayed;
@end
