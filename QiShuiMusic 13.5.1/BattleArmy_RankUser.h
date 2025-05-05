@interface BattleArmy_RankUser : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) NSString nickname;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) q score;
@property (nonatomic) NSString userIdStr;
+ (id)descriptor;
@end
