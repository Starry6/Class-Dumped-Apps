@interface AWENearbySingleProductExpression : MTLModel
@property (nonatomic) AWENearbyPriceCalculationExpression priceCalculationExpression;
@property (nonatomic) AWENearbyMarketingExpression marketingExpression;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)priceCalculationExpression;
- (void)setPriceCalculationExpression:;
- (id)marketingExpression;
- (void)setMarketingExpression:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
