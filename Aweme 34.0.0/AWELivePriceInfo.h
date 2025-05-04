@interface AWELivePriceInfo : AWEBaseApiModel
@property (nonatomic) NSString currency;
@property (nonatomic) Q pos;
@property (nonatomic) NSString amount;
@property (nonatomic) NSArray payType;
- (id)payType;
- (void)setPayType:;
- (void)setPos:;
- (unsigned long long)pos;
- (void).cxx_destruct;
- (id)amount;
- (void)setAmount:;
- (id)currency;
- (void)setCurrency:;
+ (id)JSONKeyPathsByPropertyKey;
@end
