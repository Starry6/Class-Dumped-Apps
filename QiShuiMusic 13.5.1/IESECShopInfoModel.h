@interface IESECShopInfoModel : NSObject
@property (nonatomic) <IESECGoodsDetailShopEntryModel> shopEntry;
@property (nonatomic) NSArray shopRecommendGoods;
- (void)setShopEntry:;
- (void)setShopRecommendGoods:;
- (id)shopEntry;
- (id)shopRecommendGoods;
- (void).cxx_destruct;
@end
