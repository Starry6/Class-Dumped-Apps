@interface IESLiveSaaSCloseCouponProductInfo : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString icon;
@property (nonatomic) NSAttributedString priceText;
- (void)convertPBProduct2Info:;
- (id)discountPriceAttributedText:;
- (id)initWithProductPBInfo:;
- (id)originPriceAttributedText:;
- (id)icon;
- (id)title;
- (void).cxx_destruct;
- (id)priceText;
@end
