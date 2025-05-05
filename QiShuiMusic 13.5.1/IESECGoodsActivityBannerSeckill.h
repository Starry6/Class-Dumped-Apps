@interface IESECGoodsActivityBannerSeckill : IESECGoodsActivityBanner
@property (nonatomic) UILabel rightTopLabel;
@property (nonatomic) IESECGoodsActivityCountdownView countdownLabel;
- (id)countdownLabel;
- (void)handleActivityStateChangeNotification:;
- (void)handleActivityUpdateNotification:;
- (id)rightTopLabel;
- (void)setCountdownLabel:;
- (void)setRightTopLabel:;
- (void)setupActivityLabel;
- (void)setupGradientLayer;
- (void)setupRightViewForBigMode;
- (void)setupRightViewForIPActivity;
- (void)updateContent;
- (void).cxx_destruct;
@end
