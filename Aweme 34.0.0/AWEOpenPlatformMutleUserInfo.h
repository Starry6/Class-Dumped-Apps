@interface AWEOpenPlatformMutleUserInfo : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) NSString mobile;
@property (nonatomic) NSString secUserId;
@property (nonatomic) BOOL checked;
- (void)setSecUserId:;
- (id)secUserId;
- (id)avatarURL;
- (void)setAvatarURL:;
- (id)initWithName:avatarURL:mobile:secUserId:checked:;
- (void)setChecked:;
- (BOOL)checked;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)mobile;
- (void)setMobile:;
@end
