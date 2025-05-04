@interface AWEGrouponSingleProductExpression : MTLModel
@property (nonatomic) AWEGrouponPriceCalculationExpression priceCalculationExpression;
@property (nonatomic) AWEGrouponMarketingExpression marketingExpression;
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
