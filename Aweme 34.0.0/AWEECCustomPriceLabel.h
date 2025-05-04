@interface AWEECCustomPriceLabel : UILabel
@property (nonatomic) UIFont priceTagFont;
@property (nonatomic) UIFont priceIntegerFont;
@property (nonatomic) UIFont priceDecimalFont;
@property (nonatomic) UIFont priceSuffixFont;
@property (nonatomic) {UIEdgeInsets=dddd} textInsets;
@property (nonatomic) q minimumFractionDigits;
- (id)priceTagFont;
- (id)priceIntegerFont;
- (id)priceDecimalFont;
- (void)updatePriceWithCentPrice:;
- (id)priceSuffixFont;
- (void)updatePriceWithCentPrice:withSuffix:;
- (void)setPriceTagFont:;
- (void)setPriceIntegerFont:;
- (void)setPriceDecimalFont:;
- (void)setPriceSuffixFont:;
- (id)init;
- (void)drawTextInRect:;
- (long long)minimumFractionDigits;
- (void)setTextInsets:;
- (id)textInsets;
- (void).cxx_destruct;
- (void)setMinimumFractionDigits:;
@end
