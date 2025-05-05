@interface HTSLiveHostInfo : IESLivePBBaseMessage
@property (nonatomic) NSString nickname;
@property (nonatomic) NSInteger gender;
@property (nonatomic) NSString signature;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) HTSLiveImage avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (nonatomic) HTSLiveImage avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (nonatomic) HTSLiveUser_FollowInfo followInfo;
@property (nonatomic) BOOL hasFollowInfo;
@property (nonatomic) NSMutableDictionary schemas;
@property (nonatomic) Q schemas_Count;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
