@interface HTSLiveLinkmicTeamfightMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) HTSLiveLinkmicTeamfightInfo teamfightInfo;
@property (nonatomic) BOOL hasTeamfightInfo;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLiveLinkmicTeamfightFinishContent finishContent;
@property (nonatomic) HTSLiveLinkmicTeamfightCreateContent createContent;
@property (nonatomic) HTSLiveLinkmicTeamfightSettleContent settleContent;
+ (id)descriptor;
@end
