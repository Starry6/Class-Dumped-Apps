@interface IESECRelationPriceComponent : UIView
@property (nonatomic) IESECGoodsPriceLabel priceLabel;
- (void)p_setupUI;
- (void)updateUIWithModel:;
- (id)init;
- (void).cxx_destruct;
- (id)priceLabel;
- (void)setPriceLabel:;
+ (double)priceWidthWithModel:showSuffix:;
+ (double)priceNewWidthWithModel:integerFontSize:decimalFontSize:prefixFontSize:suffixFontSize:tagFontSize:showSuffix:;
+ (double)priceNewWidthWithModel:integerFontSize:decimalFontSize:prefixFontSize:suffixFontSize:tagFontSize:showSuffix:calculateLabel:;
+ (id)priceNewWithPriceWidth:Priceheight:integerFontSize:decimalFontSize:prefixFontSize:suffixFontSize:tagFontSize:padding:showSuffix:;
+ (double)priceWidthWithModel:integerFontSize:iphone5AlikeIntergerFontSize:decimalFontSize:prefixFontSize:suffixFontSize:tagFontSize:showSuffix:;
+ (id)priceWithPriceWidth:;
+ (id)priceWithPriceWidth:height:priceColor:padding:showSuffix:;
+ (id)priceWithPriceWidth:priceHeight:priceColor:integerFontSize:iphone5AlikeIntergerFontSize:decimalFontSize:prefixFont:suffixFontSize:tagFontSize:padding:showSuffix:;
+ (id)price;
@end
