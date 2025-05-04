@interface AWERepoCoCreatorUserModel : MTLModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSDictionary avatarThumb;
@property (nonatomic) q roleId;
@property (nonatomic) NSString roleName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatarThumb;
- (void)setAvatarThumb:;
- (void)setRoleName:;
- (id)nickname;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
- (void)setNickname:;
- (long long)roleId;
- (void)setRoleId:;
- (id)roleName;
+ (id)JSONKeyPathsByPropertyKey;
@end
