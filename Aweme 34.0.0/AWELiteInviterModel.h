@interface AWELiteInviterModel : MTLModel
@property (nonatomic) NSString avatarUrl;
@property (nonatomic) NSString followTitle;
@property (nonatomic) NSString sharerUID;
@property (nonatomic) NSString secSharerUID;
@property (nonatomic) NSString followText;
@property (nonatomic) q followType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sharerUID;
- (void)setAvatarUrl:;
- (id)avatarUrl;
- (id)followText;
- (void)setSharerUID:;
- (id)followTitle;
- (void)setFollowTitle:;
- (id)secSharerUID;
- (void)setSecSharerUID:;
- (void)setFollowText:;
- (long long)followType;
- (void)setFollowType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
