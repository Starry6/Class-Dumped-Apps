@interface AWERelationReasonUserLite : AWEBaseApiModel
@property (nonatomic) NSString userID;
@property (nonatomic) NSString nickname;
@property (nonatomic) AWEURLModel avatarLarger;
@property (nonatomic) AWEURLModel avatarThumb;
@property (nonatomic) AWEURLModel avatarMedium;
@property (nonatomic) NSString mobileKey;
@property (nonatomic) q followStatus;
@property (nonatomic) q followerStatus;
@property (nonatomic) NSString relationDescText;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString signature;
@property (nonatomic) NSString remarkName;
@property (nonatomic) BOOL enableEditAlias;
@property (nonatomic) NSString contactName;
@property (nonatomic) NSString alias;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUserID;
- (void)setSecUserID:;
- (long long)followStatus;
- (id)avatarThumb;
- (id)avatarMedium;
- (id)remarkName;
- (void)setFollowStatus:;
- (void)setAvatarThumb:;
- (long long)followerStatus;
- (id)userNameWithScene:;
- (id)aliasWithScene:;
- (void)setAvatarMedium:;
- (void)setFollowerStatus:;
- (id)avatarLarger;
- (void)setEnableEditAlias:;
- (id)mobileKey;
- (void)setMobileKey:;
- (BOOL)enableEditAlias;
- (void)setRemarkName:;
- (void)setAvatarLarger:;
- (id)relationDescText;
- (void)setRelationDescText:;
- (id)signature;
- (id)nickname;
- (void)setSignature:;
- (id)alias;
- (id)userID;
- (id)contactName;
- (void).cxx_destruct;
- (void)setAlias:;
- (void)setNickname:;
- (void)setUserID:;
- (void)setContactName:;
+ (id)avatarThumbJSONTransformer;
+ (id)avatarMediumJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (id)avatarLargerJSONTransformer;
+ (id)followerStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
