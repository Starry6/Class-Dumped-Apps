@interface IESLiveSaaSPBBattleArmy_RankUser : GPBMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) NSString nickname;
@property (nonatomic) IESLiveSaaSPBImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) q score;
+ (id)descriptor;
@end
