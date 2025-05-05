@interface IESECShopGoodsTypeModel : MTLModel
@property (nonatomic) q goodsType;
@property (nonatomic) NSString name;
@property (nonatomic) q goodsNum;
@property (nonatomic) BOOL isCurrentTab;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)goodsNum;
- (long long)goodsType;
- (BOOL)isCurrentTab;
- (void)setGoodsNum:;
- (void)setGoodsType:;
- (void)setIsCurrentTab:;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
