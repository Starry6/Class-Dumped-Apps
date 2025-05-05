@interface IESECGoodsDetailSKUPriceModel : MTLModel
@property (nonatomic) NSString specID;
@property (nonatomic) IESECPriceElement priceElement;
@property (nonatomic) IESECPriceElement marketPriceElement;
@property (nonatomic) IESECPriceElement discountPriceElement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)discountPriceElement;
- (id)marketPriceElement;
- (id)priceElement;
- (void)setDiscountPriceElement:;
- (void)setMarketPriceElement:;
- (void)setPriceElement:;
- (void)setSpecID:;
- (id)specID;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
