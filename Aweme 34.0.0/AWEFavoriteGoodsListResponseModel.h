@interface AWEFavoriteGoodsListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray goodsList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber total;
@property (nonatomic) AWEFavoriteGoodsGuideBarModel guideBar;
- (id)goodsList;
- (void)setGoodsList:;
- (id)guideBar;
- (void)setGuideBar:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)total;
- (void)setTotal:;
+ (id)goodsListJSONTransformer;
+ (id)guideBarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
