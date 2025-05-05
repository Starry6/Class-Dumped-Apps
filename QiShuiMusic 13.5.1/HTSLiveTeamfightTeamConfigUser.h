@interface HTSLiveTeamfightTeamConfigUser : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString nickName;
@property (nonatomic) HTSLiveImage avatarThumn;
@property (nonatomic) BOOL hasAvatarThumn;
+ (id)descriptor;
@end
