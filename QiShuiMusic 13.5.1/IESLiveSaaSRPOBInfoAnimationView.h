@interface IESLiveSaaSRPOBInfoAnimationView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel topInfoLabel;
@property (nonatomic) UILabel bottomInfoLabel;
- (id)bottomInfoLabel;
- (id)p_getProperCountString:;
- (void)setBottomInfoLabel:;
- (void)setTopInfoLabel:;
- (id)topInfoLabel;
- (void)updateWithCoinCount:awardUnit:;
- (void)setupConstraints;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupViews;
@end
