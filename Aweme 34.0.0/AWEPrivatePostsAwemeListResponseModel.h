@interface AWEPrivatePostsAwemeListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber total;
@property (nonatomic) BOOL shouldAggregateSharedPosts;
- (id)awemeList;
- (id)minCursor;
- (BOOL)shouldAggregateSharedPosts;
- (void)setAwemeList:;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)setShouldAggregateSharedPosts:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)total;
- (void)setTotal:;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
