@interface IESECListKitDemoPrice : MTLModel
@property (nonatomic) q minPrice;
@property (nonatomic) q maxPrice;
@property (nonatomic) q marketPrice;
@property (nonatomic) NSString typeText;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMarketPrice:;
- (long long)marketPrice;
- (long long)maxPrice;
- (long long)minPrice;
- (void)setMaxPrice:;
- (void)setMinPrice:;
- (void)setTypeText:;
- (id)typeText;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
