@interface AWEDouPlusProductCouponIconView : UIView
@property (nonatomic) AWEDouPlusCouponModel couponModel;
@property (nonatomic) UILabel givingLabel;
@property (nonatomic) UIImageView douplusImageView;
@property (nonatomic) UILabel amountLabel;
- (void)setCouponModel:;
- (id)couponModel;
- (id)givingLabel;
- (id)douplusImageView;
- (void)setGivingLabel:;
- (void)setDouplusImageView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setAmountLabel:;
- (id)amountLabel;
@end
