@interface AWEConcernBellPushVideoStrategyListResponse : AWEBaseApiModel
@property (nonatomic) NSArray userList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q nextCursor;
- (long long)nextCursor;
- (void)setNextCursor:;
- (id)userList;
- (void)setUserList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)userListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
