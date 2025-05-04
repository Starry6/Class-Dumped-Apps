@interface AWEEnterpriseProfileInterceptModel : MTLModel
@property (nonatomic) BOOL needLimitEditProfile;
@property (nonatomic) NSString nicknameEditLimitToast;
@property (nonatomic) NSString avatarEditLimitToast;
@property (nonatomic) NSArray alternativeNickNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needLimitEditProfile;
- (void)setNeedLimitEditProfile:;
- (id)nicknameEditLimitToast;
- (void)setNicknameEditLimitToast:;
- (id)avatarEditLimitToast;
- (void)setAvatarEditLimitToast:;
- (id)alternativeNickNames;
- (void)setAlternativeNickNames:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
