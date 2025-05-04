@interface AWEFansPushListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray userList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber total;
@property (nonatomic) BOOL hasHistory;
@property (nonatomic) q nextUserType;
@property (nonatomic) NSNumber lastTimestamp;
- (id)userList;
- (void)setHasHistory:;
- (void)setUserList:;
- (long long)nextUserType;
- (void)setNextUserType:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setLastTimestamp:;
- (void).cxx_destruct;
- (id)lastTimestamp;
- (id)total;
- (BOOL)hasHistory;
- (void)setTotal:;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
