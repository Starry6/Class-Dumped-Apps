@interface AWEOpenPlatformUserInfoItem : NSObject
@property (nonatomic) NSString nickName;
@property (nonatomic) NSArray avatarUrlList;
@property (nonatomic) BOOL granted;
@property (nonatomic) BOOL virtualed;
@property (nonatomic) NSString identityId;
@property (nonatomic) BOOL isSystemProfile;
- (id)avatarUrlList;
- (void)setGranted:;
- (void)setAvatarUrlList:;
- (id)initWithNickname:avatarUrlList:granted:virtualed:identityId:isSystemProfile:;
- (BOOL)virtualed;
- (void)setVirtualed:;
- (void)setIsSystemProfile:;
- (BOOL)isSystemProfile;
- (void)setNickName:;
- (void).cxx_destruct;
- (BOOL)granted;
- (id)nickName;
- (id)identityId;
- (void)setIdentityId:;
@end
