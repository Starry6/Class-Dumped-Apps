@interface AWEVideoProductPriceView : UIView
@property (nonatomic) AWEVideoProductPriceLabel priceLabel;
@property (nonatomic) UILabel unitLabel;
- (void)setPriceFont:;
- (void)setPriceColor:;
- (void)setUnitColor:;
- (id)accessibilityLabel;
- (id)init;
- (BOOL)accessibilityElementsHidden;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)setupSubviews;
- (id)priceLabel;
- (void)setPriceLabel:;
- (void)setUnitLabel:;
- (void)setUnitText:;
- (id)unitLabel;
- (void)setUnitFont:;
- (void)setPriceText:;
@end
