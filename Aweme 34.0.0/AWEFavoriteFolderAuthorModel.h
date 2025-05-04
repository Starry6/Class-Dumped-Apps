@interface AWEFavoriteFolderAuthorModel : AWEBaseApiModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString nickName;
@property (nonatomic) AWEURLModel avatarURL;
- (id)avatarURL;
- (void)setAvatarURL:;
- (void)setUid:;
- (id)uid;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
