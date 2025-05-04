@interface AWECodeGenEnPackagePriceInfoModel : AWEBaseDataModel
@property (nonatomic) q currencyType;
@property (nonatomic) q originPrice;
@property (nonatomic) q currentPrice;
@property (nonatomic) double discount;
@property (nonatomic) q singlePrice;
@property (nonatomic) NSString unitPriceStr;
- (long long)originPrice;
- (void)setOriginPrice:;
- (double)discount;
- (void)setDiscount:;
- (long long)currencyType;
- (void)setCurrencyType:;
- (long long)currentPrice;
- (void)setCurrentPrice:;
- (long long)singlePrice;
- (void)setSinglePrice:;
- (id)unitPriceStr;
- (void)setUnitPriceStr:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
