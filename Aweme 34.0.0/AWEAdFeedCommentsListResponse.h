@interface AWEAdFeedCommentsListResponse : AWEBaseApiModel
@property (nonatomic) NSArray commentList;
@property (nonatomic) NSArray filterList;
@property (nonatomic) AWEAdFeedCommentsAdInfo adInfo;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q totalCount;
- (void)setAdInfo:;
- (id)filterList;
- (id)adInfo;
- (id)commentList;
- (void)setCommentList:;
- (void)setFilterList:;
- (long long)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)commentListJSONTransformer;
+ (id)filterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
