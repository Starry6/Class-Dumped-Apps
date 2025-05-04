@interface AWERecycledWorksFetchResultResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSString nextCursor;
@property (nonatomic) q totalCount;
@property (nonatomic) BOOL hasMore;
- (id)nextCursor;
- (void)setNextCursor:;
- (id)awemeList;
- (void)setAwemeList:;
- (long long)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
