@interface IESECGoodsActivityBannerPresale : IESECGoodsActivityBanner
@property (nonatomic) UILabel rightLabel;
@property (nonatomic) IESECGoodsActivityCountdownView countdownView;
@property (nonatomic) UILabel countdownTipLabel;
- (id)countdownTipLabel;
- (void)handleActivityUpdateNotification:;
- (void)setCountdownTipLabel:;
- (void)setupActivityLabel;
- (void)setupGradientLayer;
- (void)setupRightViewForBigMode;
- (void)setupRightViewForIPActivity;
- (void)updateContent;
- (void).cxx_destruct;
- (id)rightLabel;
- (id)countdownView;
- (void)setCountdownView:;
- (void)setRightLabel:;
@end
