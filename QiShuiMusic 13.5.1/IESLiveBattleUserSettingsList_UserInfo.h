@interface IESLiveBattleUserSettingsList_UserInfo : IESLivePBBaseMessage
@property (nonatomic) q userId;
@property (nonatomic) NSString nickName;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) q autoRemoveTime;
@property (nonatomic) NSInteger sex;
@property (nonatomic) q rivalLivingRoomId;
@property (nonatomic) NSString userOpenId;
+ (id)descriptor;
@end
