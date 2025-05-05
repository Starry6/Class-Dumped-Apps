@interface IESLiveECommerceAuthorGoodsStatsModel : IESECLiveApiBaseModel
@property (nonatomic) NSArray goodsList;
@property (nonatomic) NSString descText;
@property (nonatomic) NSString descURL;
@property (nonatomic) NSString nextPage;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber totalGoods;
- (id)descURL;
- (id)descText;
- (id)goodsList;
- (void)setDescText:;
- (void)setDescURL:;
- (void)setGoodsList:;
- (void)setTotalGoods:;
- (id)totalGoods;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (id)nextPage;
- (void)setNextPage:;
+ (id)goodsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
