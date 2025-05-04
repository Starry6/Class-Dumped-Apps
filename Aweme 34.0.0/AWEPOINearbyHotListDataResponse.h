@interface AWEPOINearbyHotListDataResponse : AWEBaseApiModel
@property (nonatomic) q curPage;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray awemeList;
- (id)awemeList;
- (void)setAwemeList:;
- (long long)curPage;
- (void)setCurPage:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
