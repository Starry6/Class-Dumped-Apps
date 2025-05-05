@interface IESECShopFilterDiffableModel : IESECShopBaseFilterDiffableModel
@property (nonatomic) NSMutableArray goodsTypes;
@property (nonatomic) IESECShopGoodsTypeModel selectedGoodsType;
@property (nonatomic) NSArray goodsTypeNames;
- (id)goodsTypeNames;
- (id)goodsTypes;
- (id)selectedGoodsType;
- (void)setGoodsTypes:;
- (void)setSelectedGoodsType:;
- (void).cxx_destruct;
@end
