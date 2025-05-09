@interface AWESimpleUserModel : AWEBaseApiModel
@property (nonatomic) NSString userID;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString signature;
@property (nonatomic) AWEURLModel avatarThumb;
@property (nonatomic) q followStatus;
@property (nonatomic) q status;
@property (nonatomic) q userRate;
@property (nonatomic) AWEURLModel avatarLarger;
@property (nonatomic) AWEHitTaskInfoModel hitTaskModel;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString alias;
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
- (id)userNameWithScene:;
- (id)aliasWithScene:;
- (id)avatarLarger;
- (long long)userRate;
- (void)setUserRate:;
- (void)setAvatarLarger:;
- (id)hitTaskModel;
- (void)setHitTaskModel:;
- (id)signature;
- (id)nickname;
- (void)setSignature:;
- (id)alias;
- (id)userID;
- (id)displayName;
- (void)setStatus:;
- (id)uniqueID;
- (void)setUniqueID:;
- (void).cxx_destruct;
- (long long)status;
- (id)initWithDict:;
- (void)setAlias:;
- (void)setNickname:;
- (void)setUserID:;
+ (id)statusJSONTransformer;
+ (id)avatarThumbJSONAdapter;
+ (id)followStatusJSONTransformer;
+ (id)userRateJSONTransformer;
+ (id)avatarLargerJSONAdapter;
+ (id)hitTaskModelJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;
@end
