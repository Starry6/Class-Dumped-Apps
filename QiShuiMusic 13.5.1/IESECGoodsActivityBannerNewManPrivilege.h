@interface IESECGoodsActivityBannerNewManPrivilege : IESECGoodsActivityBanner
@property (nonatomic) UILabel privilegeLabel;
@property (nonatomic) UILabel reducePriceLabel;
@property (nonatomic) UIView reducePriceView;
@property (nonatomic) UIImageView privilegeImageView;
@property (nonatomic) UILabel countDownTipLabel;
@property (nonatomic) IESECGoodsActivityCountdownView countdownLabel;
- (id)reducePriceView;
- (id)countDownTipLabel;
- (id)countdownLabel;
- (void)handleActivityStateChangeNotification:;
- (void)handleActivityUpdateNotification:;
- (id)initWithFrame:parameters:type:style:;
- (id)privilegeImageView;
- (id)privilegeLabel;
- (id)reducePriceLabel;
- (void)setCountDownTipLabel:;
- (void)setCountdownLabel:;
- (void)setPrivilegeImageView:;
- (void)setPrivilegeLabel:;
- (void)setReducePriceLabel:;
- (void)setReducePriceView:;
- (void)setupGradientLayer;
- (void)updateWithCountDown;
- (void)updateWithNoSeckillType;
- (void)updateWithSeckillType;
- (void)updateContent;
- (void).cxx_destruct;
@end
