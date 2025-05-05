@interface TTAccountMediaUserEntity : TTAccountBaseEntity
@property (nonatomic) NSNumber mediaID;
@property (nonatomic) NSString name;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) BOOL userVerified;
@property (nonatomic) BOOL displayAppOcrEntrance;
- (id)avatarURL;
- (BOOL)displayAppOcrEntrance;
- (id)initWithMediaUserModel:;
- (void)setAvatarURL:;
- (void)setDisplayAppOcrEntrance:;
- (void)setUserVerified:;
- (void)setName:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)userVerified;
- (void)setMediaID:;
- (id)mediaID;
@end
