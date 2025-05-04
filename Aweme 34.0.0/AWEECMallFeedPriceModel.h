@interface AWEECMallFeedPriceModel : MTLModel
@property (nonatomic) q type;
@property (nonatomic) q minPrice;
@property (nonatomic) q maxPrice;
@property (nonatomic) q marketPrice;
@property (nonatomic) NSString typeText;
@property (nonatomic) q originalPrice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)typeText;
- (void)setTypeText:;
- (long long)minPrice;
- (void)setMinPrice:;
- (long long)maxPrice;
- (void)setMaxPrice:;
- (long long)marketPrice;
- (void)setOriginalPrice:;
- (long long)originalPrice;
- (void)setMarketPrice:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
