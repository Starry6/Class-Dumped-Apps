@interface HTSLiveLinkmicTeamfightScoreMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveLinkmicTeamfightInfo teamfightInfo;
@property (nonatomic) BOOL hasTeamfightInfo;
@property (nonatomic) HTSLiveLinkmicQuickInteract quickInteract;
@property (nonatomic) BOOL hasQuickInteract;
+ (id)descriptor;
@end
