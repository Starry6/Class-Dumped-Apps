@interface IESECLiveReplayAuthorNormalModel : MTLModel
@property (nonatomic) q followStatus;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSNumber userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) IESECLiveImageURLModel avatarThumb;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAvatarThumb:;
- (id)avatarThumb;
- (long long)followStatus;
- (id)secUserID;
- (void)setFollowStatus:;
- (void)setSecUserID:;
- (id)userID;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:;
- (void)setUserID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
