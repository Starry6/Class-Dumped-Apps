@interface IESLiveRivalExtraInfo_LinkerInfo_UserInfo : IESLivePBBaseMessage
@property (nonatomic) q userId;
@property (nonatomic) NSString nickName;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) NSString openId;
+ (id)descriptor;
@end
