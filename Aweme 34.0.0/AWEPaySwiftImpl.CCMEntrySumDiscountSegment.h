@interface AWEPaySwiftImpl.CCMEntrySumDiscountSegment : MTLModel
@property (nonatomic) NSString desc;
@property (nonatomic) q toAmount;
@property (nonatomic) q fromAmount;
- (long long)toAmount;
- (void)setToAmount:;
- (long long)fromAmount;
- (void)setFromAmount:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
