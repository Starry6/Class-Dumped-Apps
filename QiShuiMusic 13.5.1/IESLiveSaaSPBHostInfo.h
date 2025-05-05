@interface IESLiveSaaSPBHostInfo : GPBMessage
@property (nonatomic) NSString nickname;
@property (nonatomic) NSInteger gender;
@property (nonatomic) NSString signature;
@property (nonatomic) IESLiveSaaSPBImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) IESLiveSaaSPBImage avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (nonatomic) IESLiveSaaSPBImage avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (nonatomic) IESLiveSaaSPBUser_FollowInfo followInfo;
@property (nonatomic) BOOL hasFollowInfo;
@property (nonatomic) NSMutableDictionary schemas;
@property (nonatomic) Q schemas_Count;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
