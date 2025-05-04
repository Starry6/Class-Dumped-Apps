@interface AWEMusicOnboardOwnerModel : AWEBaseApiModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString handle;
@property (nonatomic) AWEURLModel avatarURL;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) q type;
- (id)secUid;
- (id)avatarURL;
- (void)setAvatarURL:;
- (void)setSecUid:;
- (id)nickname;
- (void)setUid:;
- (id)uid;
- (void)setHandle:;
- (id)handle;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setNickname:;
- (BOOL)isVerified;
- (void)setIsVerified:;
+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
