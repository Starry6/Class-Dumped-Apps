@interface AWEShareUserModel : AWEBaseApiModel
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString userID;
@property (nonatomic) AWEURLModel avatarURL;
- (id)avatarURL;
- (void)setAvatarURL:;
- (id)userID;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
- (void)setUserID:;
+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
