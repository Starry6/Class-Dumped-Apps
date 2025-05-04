@interface AWEFollowUserModel : AWEBaseApiModel
@property (nonatomic) NSString nickName;
@property (nonatomic) NSArray avatarList;
- (id)avatarList;
- (void)setAvatarList:;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
+ (id)avatarListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
