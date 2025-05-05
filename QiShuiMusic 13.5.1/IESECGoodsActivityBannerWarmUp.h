@interface IESECGoodsActivityBannerWarmUp : IESECGoodsActivityBanner
@property (nonatomic) UILabel rightTopLabel;
@property (nonatomic) UILabel bottomLeftLabel;
@property (nonatomic) UILabel bottomMiddleLabel;
@property (nonatomic) UILabel bottomRightLabel;
- (id)bottomLeftLabel;
- (id)bottomMiddleLabel;
- (id)bottomRightLabel;
- (void)handleActivityUpdateNotification:;
- (id)rightTopLabel;
- (void)setBottomLeftLabel:;
- (void)setBottomMiddleLabel:;
- (void)setBottomRightLabel:;
- (void)setRightTopLabel:;
- (void)setupActivityLabel;
- (void)setupGradientLayer;
- (void)setupRightViewForBigMode;
- (void)setupRightViewForIPActivity;
- (void)updateContent;
- (void).cxx_destruct;
- (id)bottomLabel;
@end
