@interface AWEGrouponPriceCalculationExpression : MTLModel
@property (nonatomic) AWEGrouponPriceExpression priceExpression;
@property (nonatomic) AWEGrouponPriceDiffExpression priceDiffExpression;
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
