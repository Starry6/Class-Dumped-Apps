@interface IESECGoodsDetailHeaderPreViewMetaModel : IESECBaseApiModel
@property (nonatomic) NSArray skuTabs;
@property (nonatomic) NSString goodGoodsItemID;
@property (nonatomic) q defaultPosition;
- (id)goodGoodsItemID;
- (id)skuTabs;
- (void)setDefaultPosition:;
- (void)setGoodGoodsItemID:;
- (void)setSkuTabs:;
- (void).cxx_destruct;
- (long long)defaultPosition;
+ (id)JSONKeyPathsByPropertyKey;
@end
