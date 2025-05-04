@interface AWEInteractionStickerSocialMentionModel : MTLModel
@property (nonatomic) NSString userID;
@property (nonatomic) NSString userName;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString signature;
@property (nonatomic) q followStatus;
@property (nonatomic) AWEURLModel avatarThumb;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUserID;
- (void)setSecUserID:;
- (long long)followStatus;
- (id)avatarThumb;
- (void)setFollowStatus:;
- (void)setAvatarThumb:;
- (id)signature;
- (void)setSignature:;
- (id)userID;
- (id)userName;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)setUserName:;
+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
