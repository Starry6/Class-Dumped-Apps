@interface IESECGoodsFeedResourceCardCouponView : UIView
@property (nonatomic) @? clickCouponButtonBlock;
@property (nonatomic) BOOL hasCoupon;
- (void)clickCouponButton:;
- (id)clickCouponButtonBlock;
- (BOOL)hasCoupon;
- (void)setClickCouponButtonBlock:;
- (void)setCountDownTimer;
- (void)setHasCoupon:;
- (void)setUpCouponViewInVersion3WithModel:;
- (void)setUpCouponedViewInVersion3WithModel:;
- (void)setUpLeftPartOfCouponViewInVersion3WithModel:;
- (void)setUpLinkInfoArrowView;
- (void)setupUIWithModel:;
- (void)updateButtonView;
- (void)updateCountdownLabel;
- (void)updateCountdownLabelInVersion3WithHour:minute:second:;
- (void)dealloc;
- (void).cxx_destruct;
@end
