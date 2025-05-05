@interface HTSLiveGuestBattleScoreMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveGuestBattleInfo battleInfo;
@property (nonatomic) BOOL hasBattleInfo;
@property (nonatomic) BOOL crownUpgrade;
+ (id)descriptor;
@end
