@interface AWEAdEvaluatesListResponse : AWEBaseApiModel
@property (nonatomic) NSArray commentList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q totalCount;
@property (nonatomic) q nextPage;
- (id)commentList;
- (void)setCommentList:;
- (long long)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setTotalCount:;
- (long long)nextPage;
- (void)setNextPage:;
+ (id)commentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
