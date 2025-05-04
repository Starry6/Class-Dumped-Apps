@interface AWENearbyPriceCalculationExpression : MTLModel
@property (nonatomic) AWENearbyPriceExpression priceExpression;
@property (nonatomic) AWENearbyPriceDiffExpression priceDiffExpression;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)priceExpression;
- (void)setPriceExpression:;
- (id)priceDiffExpression;
- (void)setPriceDiffExpression:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
