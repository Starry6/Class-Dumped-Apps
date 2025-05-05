@interface IESECLiveAnchorAuthorGoodsListModel : IESECLiveApiBaseModel
@property (nonatomic) NSArray goodsList;
@property (nonatomic) NSString nextPage;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q maximumGoodsCanBeChosen;
@property (nonatomic) NSNumber totalGoods;
@property (nonatomic) IESECLiveAnchorAuthorGoodsListExtraModel extra;
- (id)goodsList;
- (long long)maximumGoodsCanBeChosen;
- (void)setExtra:;
- (void)setGoodsList:;
- (void)setMaximumGoodsCanBeChosen:;
- (void)setTotalGoods:;
- (id)totalGoods;
- (id)extra;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (id)nextPage;
- (void)setNextPage:;
+ (id)extraJSONTransformer;
+ (id)goodsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
