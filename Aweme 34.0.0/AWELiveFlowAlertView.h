@interface AWELiveFlowAlertView : HTSEventForwardingView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIView animationView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? cancelBlock;
- (void)layoutSubviews;
- (void)actionButtonClicked;
- (void)showAlertWithAnimation;
- (id)initWithActionBlock:cancleBlock:;
- (void)_livetrackEvent:;
- (id)adapter_getCarrierService;
- (void)setCancelBlock:;
- (void)dismiss;
- (BOOL)isAnimating;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (id)titleLabel;
- (id)cancelBlock;
- (void)setupUI;
- (void)setActionBlock:;
- (id)actionBlock;
- (id)actionButton;
- (void)setActionButton:;
- (id)animationView;
- (void)setAnimationView:;
@end
