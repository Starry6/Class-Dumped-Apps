@interface AWEVCDUserModel : AWEBaseApiModel
@property (nonatomic) NSString nickName;
@property (nonatomic) q userID;
@property (nonatomic) AWEURLModel avatarUrl;
@property (nonatomic) q followersCount;
@property (nonatomic) q followingCount;
- (void)setAvatarUrl:;
- (id)avatarUrl;
- (long long)followingCount;
- (void)setFollowingCount:;
- (long long)userID;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
- (void)setUserID:;
- (long long)followersCount;
- (void)setFollowersCount:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)avatarUrlJSONTransformer;
@end
