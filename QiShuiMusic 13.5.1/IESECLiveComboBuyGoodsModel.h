@interface IESECLiveComboBuyGoodsModel : MTLModel
@property (nonatomic) NSString coverURL;
@property (nonatomic) NSString promotionID;
@property (nonatomic) NSString productID;
@property (nonatomic) NSNumber minPrice;
@property (nonatomic) NSNumber maxPrice;
@property (nonatomic) q goodsState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPromotionID:;
- (long long)goodsState;
- (id)maxPrice;
- (id)minPrice;
- (id)promotionID;
- (void)setGoodsState:;
- (void)setMaxPrice:;
- (void)setMinPrice:;
- (id)productID;
- (void)setProductID:;
- (void).cxx_destruct;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
