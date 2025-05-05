@interface IESECLiveAnchorCouponCardNumberView : UIView
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) UILabel currencyLabel;
@property (nonatomic) UILabel discountTextLabel;
@property (nonatomic) UILabel detailLabel;
- (id)currencyLabel;
- (id)discountTextLabel;
- (void)setCurrencyLabel:;
- (void)setDiscountTextLabel:;
- (void)updateWithNumberText:detail:type:;
- (id)initWithColor:;
- (void).cxx_destruct;
- (id)detailLabel;
- (void)setDetailLabel:;
- (id)numberLabel;
- (void)setNumberLabel:;
@end
