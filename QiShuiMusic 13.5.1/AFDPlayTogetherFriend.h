@interface AFDPlayTogetherFriend : IESIMBaseApiModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString sessionID;
@property (nonatomic) IESIMURLModel avatarURL;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString remarkName;
@property (nonatomic) q followStatus;
@property (nonatomic) BOOL isOnline;
@property (nonatomic) BOOL hasInvited;
@property (nonatomic) AWELiveRoomModel roomModel;
@property (nonatomic) Q inviteStatus;
@property (nonatomic) BOOL hasDisplayedInView;
@property (nonatomic) Q invitePage;
- (id)avatarURL;
- (long long)followStatus;
- (BOOL)hasDisplayedInView;
- (BOOL)hasInvited;
- (unsigned long long)invitePage;
- (id)remarkName;
- (id)roomModel;
- (id)secUid;
- (void)setAvatarURL:;
- (void)setFollowStatus:;
- (void)setHasDisplayedInView:;
- (void)setHasInvited:;
- (void)setInvitePage:;
- (void)setRoomModel:;
- (void)setSecUid:;
- (void)setSessionID:;
- (id)sessionID;
- (id)uid;
- (void)setUid:;
- (unsigned long long)hash;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:;
- (BOOL)isOnline;
- (BOOL)isEqual:;
- (unsigned long long)inviteStatus;
- (void)setInviteStatus:;
- (void)setIsOnline:;
- (void)setRemarkName:;
+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
