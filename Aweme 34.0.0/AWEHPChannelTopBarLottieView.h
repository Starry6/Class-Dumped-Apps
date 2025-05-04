@interface AWEHPChannelTopBarLottieView : UIView
@property (nonatomic) AWEHPChannelLottieContentView contentView;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isValid;
@property (nonatomic) AWEHPChannelLottieParams params;
- (void)hideLottie;
- (void)showLottieWithParams:playParams:showCallBack:exitCallBack:;
- (BOOL)isShowing;
- (id)initWithFrame:;
- (id)contentView;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)updateStatus:;
- (void)layoutSubviews;
- (id)params;
@end
