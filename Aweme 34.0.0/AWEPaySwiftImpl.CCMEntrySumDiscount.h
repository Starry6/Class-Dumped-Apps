@interface AWEPaySwiftImpl.CCMEntrySumDiscount : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) q chargeAmount;
@property (nonatomic) NSArray discountSegments;
@property (nonatomic) NSString rulePageUrl;
- (long long)chargeAmount;
- (void)setChargeAmount:;
- (id)discountSegments;
- (void)setDiscountSegments:;
- (id)rulePageUrl;
- (void)setRulePageUrl:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)initWithCoder:;
+ (id)discountSegmentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
