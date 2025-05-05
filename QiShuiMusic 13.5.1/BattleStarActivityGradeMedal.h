@interface BattleStarActivityGradeMedal : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage gradeMedal;
@property (nonatomic) BOOL hasGradeMedal;
@property (nonatomic) HTSLiveImage levelImage;
@property (nonatomic) BOOL hasLevelImage;
@property (nonatomic) HTSLiveImage badgeImage;
@property (nonatomic) BOOL hasBadgeImage;
+ (id)descriptor;
@end
