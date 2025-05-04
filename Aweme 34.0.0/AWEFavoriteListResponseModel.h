@interface AWEFavoriteListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray userList;
@property (nonatomic) q maxCursor;
@property (nonatomic) q minCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q totalCount;
@property (nonatomic) q insertCollectCanceled;
- (id)userList;
- (long long)minCursor;
- (long long)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)setUserList:;
- (long long)insertCollectCanceled;
- (void)setInsertCollectCanceled:;
- (long long)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
