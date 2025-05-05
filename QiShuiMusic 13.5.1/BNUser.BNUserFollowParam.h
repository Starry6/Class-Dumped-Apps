@interface BNUser.BNUserFollowParam : BNCommonAdapter.BNRouteBasicParam
@property (nonatomic) NSString targetTab;
@property (nonatomic) BOOL followingExist;
@property (nonatomic) q followingCount;
@property (nonatomic) BOOL followerExist;
@property (nonatomic) q followerCount;
@property (nonatomic) NSString userNickName;
@property (nonatomic) NSString userId;
- (long long)followerCount;
- (BOOL)followerExist;
- (long long)followingCount;
- (BOOL)followingExist;
- (void)setFollowerCount:;
- (void)setFollowerExist:;
- (void)setFollowingCount:;
- (void)setFollowingExist:;
- (void)setTargetTab:;
- (void)setUserNickName:;
- (id)targetTab;
- (id)userNickName;
- (id)init;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
@end
