@interface AWEUserPushStatusListResponseModel : NSObject
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSMutableArray userArray;
@property (nonatomic) q usersArrayCount;
@property (nonatomic) q total;
- (id)userArray;
- (id)getUserArray;
- (void)setUserArray:;
- (void)setUsersArrayCount:;
- (id)convertLiveLiveUserToLiveUserModel:;
- (long long)usersArrayCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
@end
