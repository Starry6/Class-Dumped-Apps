@interface AWEHPChannelBottomBarLottieView : UIView
@property (nonatomic) BOOL isShowing;
@property (nonatomic) AWEHPChannelLottieContentView contentView;
@property (nonatomic) AWEHPBottomTabLottieParams params;
@property (nonatomic) double ratio;
@property (nonatomic) BOOL isValid;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lottieContentRect;
- (void)showLottieWithParams:showCallBack:exitCallBack:;
- (id)initWithFrame:ratio:;
- (void)updateRatio:;
- (void)hideLottie;
- (id)lottieContentRect;
- (BOOL)isShowing;
- (id)contentView;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)updateStatus:;
- (void)layoutSubviews;
- (id)params;
- (double)ratio;
- (void)setParams:;
- (void)setIsShowing:;
@end
