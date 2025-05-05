@interface IESLiveSaaSPBBattleUserInfo_BaseUserInfo : GPBMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) NSString nickName;
@property (nonatomic) IESLiveSaaSPBImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) NSInteger gender;
+ (id)descriptor;
@end
