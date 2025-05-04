@interface AWEECommerceFeedGoodsVideoResponse : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSDictionary sourceTypeDic;
@property (nonatomic) q totalCount;
- (id)awemeList;
- (void)setAwemeList:;
- (id)sourceTypeDic;
- (void)setSourceTypeDic:;
- (long long)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
