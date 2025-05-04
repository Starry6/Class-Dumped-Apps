@interface AWEIMCouponCardDiscountView : UIView
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) UILabel currencyLabel;
@property (nonatomic) UILabel discountTextLabel;
@property (nonatomic) UILabel detailLabel;
- (id)currencyLabel;
- (void)setCurrencyLabel:;
- (void)setDiscountTextLabel:;
- (id)discountTextLabel;
- (void)updateWithNumberText:detail:type:;
- (id)initWithColor:;
- (void).cxx_destruct;
- (id)detailLabel;
- (void)setDetailLabel:;
- (void)setNumberLabel:;
- (id)numberLabel;
@end
