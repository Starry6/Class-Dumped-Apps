@interface HTSLiveGuestBattleUIInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage openAnimation;
@property (nonatomic) BOOL hasOpenAnimation;
@property (nonatomic) HTSLiveImage scoreIcon;
@property (nonatomic) BOOL hasScoreIcon;
@property (nonatomic) HTSLiveImage hotBattleOpenAnimation;
@property (nonatomic) BOOL hasHotBattleOpenAnimation;
@property (nonatomic) HTSLiveImage sprintOpenAnimation;
@property (nonatomic) BOOL hasSprintOpenAnimation;
+ (id)descriptor;
@end
