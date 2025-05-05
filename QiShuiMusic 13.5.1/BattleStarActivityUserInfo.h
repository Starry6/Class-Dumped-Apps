@interface BattleStarActivityUserInfo : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) NSString nickName;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) NSString roomIdStr;
@property (nonatomic) BattleStarActivityGrade grade;
@property (nonatomic) BOOL hasGrade;
+ (id)descriptor;
@end
