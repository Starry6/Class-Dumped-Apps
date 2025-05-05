@interface IESECLiveGoodsPageGetModel : IESECLiveApiBaseModel
@property (nonatomic) NSString logID;
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) NSDictionary promotions;
@property (nonatomic) NSDictionary products;
- (void)setPromotions:;
- (void)setServerTime:;
- (id)products;
- (void).cxx_destruct;
- (id)serverTime;
- (id)promotions;
- (void)setProducts:;
- (id)logID;
- (void)setLogID:;
+ (id)goodsModelDicJSONTransformer;
+ (id)productsJSONTransformer;
+ (id)promotionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
