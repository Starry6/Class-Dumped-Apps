@interface IESECGoodsSecKillPrice : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSNumber minPrice;
@property (nonatomic) NSNumber maxPrice;
@property (nonatomic) NSNumber marketPrice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMarketPrice:;
- (BOOL)hasGapPrice;
- (id)marketPrice;
- (id)maxPrice;
- (id)minPrice;
- (void)setMaxPrice:;
- (void)setMinPrice:;
- (void).cxx_destruct;
- (id)price;
+ (id)JSONKeyPathsByPropertyKey;
@end
