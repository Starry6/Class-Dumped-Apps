@interface AWEIMShareLiveMessageCardAnchorContentView : UIView
@property (nonatomic) UILabel discountPriceLabel;
@property (nonatomic) UILabel originPriceLabel;
@property (nonatomic) UILabel discountInfoLabel;
- (void)__setupUI;
- (void)setOriginPriceLabel:;
- (id)originPriceLabel;
- (void)setDiscountPriceLabel:;
- (id)discountPriceLabel;
- (id)__regularPriceAttributedStringFromregularPrice:;
- (id)discountInfoLabel;
- (double)__caculateWidthForText:font:height:;
- (void)setDiscountInfoLabel:;
- (id)init;
- (void).cxx_destruct;
- (void)updateWithViewModel:;
@end
