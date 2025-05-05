@interface IESECGoodsGroupBuyHelperPrice : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString header;
@property (nonatomic) NSNumber originMinPrice;
@property (nonatomic) NSNumber originMaxPrice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasGapPrice;
- (id)maxPrice;
- (id)minPrice;
- (id)originMaxPrice;
- (id)originMinPrice;
- (void)setOriginMaxPrice:;
- (void)setOriginMinPrice:;
- (void)setHeader:;
- (void).cxx_destruct;
- (id)header;
- (id)price;
+ (id)JSONKeyPathsByPropertyKey;
@end
