@interface AWEIMFollowRequestResponseModel : IESIMBaseApiModel
@property (nonatomic) NSMutableArray requestUsers;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q maxTime;
@property (nonatomic) q minTime;
@property (nonatomic) q total;
- (id)requestUsers;
- (void)setRequestUsers:;
- (long long)maxTime;
- (long long)minTime;
- (void)setMinTime:;
- (void)setMaxTime:;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (long long)total;
- (void)setTotal:;
+ (id)hasMoreJSONTransformer;
+ (id)requestUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
