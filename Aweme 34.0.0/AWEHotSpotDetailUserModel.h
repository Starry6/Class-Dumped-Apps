@interface AWEHotSpotDetailUserModel : AWEBaseApiModel
@property (nonatomic) NSString userID;
@property (nonatomic) NSString userShortID;
@property (nonatomic) NSString nickName;
@property (nonatomic) AWEURLModel avatarThumbModel;
@property (nonatomic) q followerCount;
@property (nonatomic) NSString customVerification;
@property (nonatomic) q followStatus;
- (long long)followStatus;
- (void)setFollowStatus:;
- (long long)followerCount;
- (void)setFollowerCount:;
- (id)userShortID;
- (void)setUserShortID:;
- (id)avatarThumbModel;
- (void)setAvatarThumbModel:;
- (id)customVerification;
- (void)setCustomVerification:;
- (id)userID;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
- (void)setUserID:;
+ (id)avatarThumbModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
