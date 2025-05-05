@interface IESECGoodsActivityBannerOnlyIP : IESECGoodsActivityBanner
@property (nonatomic) UILabel countdownTipLabel;
@property (nonatomic) IESECGoodsActivityCountdownView countdownView;
- (id)countdownTipLabel;
- (void)handleActivityStateChangeNotification:;
- (void)handleActivityUpdateNotification:;
- (void)setCountdownTipLabel:;
- (void)setupActivityLabel;
- (void)setupRightViewForIPActivity;
- (void)updateContent;
- (void).cxx_destruct;
- (id)countdownView;
- (void)setCountdownView:;
@end
