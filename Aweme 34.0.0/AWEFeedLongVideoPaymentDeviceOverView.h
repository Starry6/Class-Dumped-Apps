@interface AWEFeedLongVideoPaymentDeviceOverView : UIView
@property (nonatomic) UILabel mainTipLabel;
@property (nonatomic) UILabel subTipLabel;
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) UIStackView centerTipStack;
- (id)subTipLabel;
- (void)setSubTipLabel:;
- (id)centerTipStack;
- (id)mainTipLabel;
- (void)setMainTipLabel:;
- (void)setCenterTipStack:;
- (id)blurView;
- (void)setBlurView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
