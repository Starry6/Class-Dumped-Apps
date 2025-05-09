@interface IESECPriceElement : MTLModel
@property (nonatomic) IESECTextElement prefix;
@property (nonatomic) IESECGoodsPriceInfoModel priceInfo;
@property (nonatomic) IESECPriceFontStyle priceFont;
@property (nonatomic) BOOL isStrikethrough;
@property (nonatomic) IESECTextElement suffix;
@property (nonatomic) BOOL hasComma;
@property (nonatomic) Q priceType;
@property (nonatomic) Q discountBGType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isStrikethrough;
- (unsigned long long)discountBGType;
- (BOOL)hasComma;
- (id)priceFont;
- (id)priceInfo;
- (void)setDiscountBGType:;
- (void)setHasComma:;
- (void)setIsStrikethrough:;
- (void)setPriceFont:;
- (void)setPriceInfo:;
- (id)suffix;
- (void)setPrefix:;
- (id)prefix;
- (void).cxx_destruct;
- (void)setSuffix:;
- (unsigned long long)priceType;
- (void)setPriceType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
