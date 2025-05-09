@interface IESECRecommendItemRawAdOpenUrlParams : MTLModel
@property (nonatomic) NSString productId;
@property (nonatomic) NSString promotionId;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString kolId;
@property (nonatomic) NSString creativeId;
@property (nonatomic) BOOL isLuban;
@property (nonatomic) NSDictionary metaParams;
@property (nonatomic) NSDictionary adRequestAdditions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPromotionId:;
- (BOOL)isLuban;
- (id)adRequestAdditions;
- (id)kolId;
- (id)metaParams;
- (id)promotionId;
- (void)setAdRequestAdditions:;
- (void)setIsLuban:;
- (void)setKolId:;
- (void)setMetaParams:;
- (id)productId;
- (void).cxx_destruct;
- (void)setProductId:;
- (id)itemId;
- (void)setItemId:;
- (id)creativeId;
- (void)setCreativeId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
