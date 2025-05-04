@interface AWENearbyPriceExpression : MTLModel
@property (nonatomic) NSString currencySign;
@property (nonatomic) double finalPrice;
@property (nonatomic) NSString finalPricePostfix;
@property (nonatomic) AWENearbySecondPrice secondPrice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currencySign;
- (void)setCurrencySign:;
- (double)finalPrice;
- (void)setFinalPrice:;
- (id)secondPrice;
- (void)setSecondPrice:;
- (id)finalPricePostfix;
- (void)setFinalPricePostfix:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
