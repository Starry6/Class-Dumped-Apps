@interface AWEMusicNewArtistModel : AWEBaseDataModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString handle;
@property (nonatomic) AWENewURLModel avatarURL;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) q type;
@property (nonatomic) NSString artistName;
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
- (void)setArtistName:;
- (void)setNickname:;
- (id)artistName;
- (BOOL)isVerified;
- (void)setIsVerified:;
+ (id)JSONKeyPathsByPropertyKey;
@end
