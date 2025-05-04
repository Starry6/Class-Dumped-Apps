@interface AWEFansLocalUserResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray users;
@property (nonatomic) q maxTime;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isFull;
@property (nonatomic) q lastFullTime;
@property (nonatomic) q lastCursor;
- (void)setLastCursor:;
- (long long)lastCursor;
- (long long)lastFullTime;
- (void)setLastFullTime:;
- (void)setMaxTime:;
- (id)users;
- (long long)maxTime;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (BOOL)isFull;
- (void)setUsers:;
- (void)setIsFull:;
+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
