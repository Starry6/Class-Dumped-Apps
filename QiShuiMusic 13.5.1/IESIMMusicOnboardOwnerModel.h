@interface IESIMMusicOnboardOwnerModel : IESIMBaseApiModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString handle;
@property (nonatomic) IESIMURLModel avatarURL;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) q type;
- (id)avatarURL;
- (id)secUid;
- (void)setAvatarURL:;
- (void)setSecUid:;
- (id)uid;
- (id)handle;
- (void)setHandle:;
- (void)setUid:;
- (void)setType:;
- (id)nickname;
- (long long)type;
- (void).cxx_destruct;
- (void)setNickname:;
- (BOOL)isVerified;
- (void)setIsVerified:;
+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
