@interface IESLiveLinkMicProfitFinishRoomBattleResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkmicTeamfightInfo teamfightInfo;
@property (nonatomic) BOOL hasTeamfightInfo;
@property (nonatomic) IESLiveLinkMicAudienceSwitchSceneResponse switchSceneResponse;
@property (nonatomic) BOOL hasSwitchSceneResponse;
+ (id)descriptor;
@end
