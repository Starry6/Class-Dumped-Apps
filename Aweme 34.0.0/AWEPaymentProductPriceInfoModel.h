@interface AWEPaymentProductPriceInfoModel : AWEBaseApiModel
@property (nonatomic) NSString currencyType;
@property (nonatomic) NSString currentPrice;
@property (nonatomic) NSString originPrice;
@property (nonatomic) NSString priceUnit;
@property (nonatomic) NSString startHint;
- (id)originPrice;
- (void)setOriginPrice:;
- (id)currencyType;
- (void)setCurrencyType:;
- (id)currentPrice;
- (void)setCurrentPrice:;
- (id)priceUnit;
- (void)setPriceUnit:;
- (id)startHint;
- (void)setStartHint:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
