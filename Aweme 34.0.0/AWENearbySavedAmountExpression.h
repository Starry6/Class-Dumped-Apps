@interface AWENearbySavedAmountExpression : MTLModel
@property (nonatomic) NSString prefix;
@property (nonatomic) NSString currencySign;
@property (nonatomic) double amount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currencySign;
- (void)setCurrencySign:;
- (id)prefix;
- (id)init;
- (void)setPrefix:;
- (void).cxx_destruct;
- (double)amount;
- (void)setAmount:;
+ (BOOL)automaticallyDefaultMapping;
@end
