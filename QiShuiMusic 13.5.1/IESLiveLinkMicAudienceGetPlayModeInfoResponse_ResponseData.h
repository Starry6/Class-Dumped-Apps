@interface IESLiveLinkMicAudienceGetPlayModeInfoResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGuestBattleInfo guestBattleInfo;
@property (nonatomic) BOOL hasGuestBattleInfo;
@property (nonatomic) HTSLiveLinkmicTeamfightInfo teamfightInfo;
@property (nonatomic) BOOL hasTeamfightInfo;
@property (nonatomic) IESLiveNormalPaidLinkmicInfo normalPaidLinkmicInfo;
@property (nonatomic) BOOL hasNormalPaidLinkmicInfo;
@property (nonatomic) HTSLiveBidPaidLinkmicContent bidPaidLinkmicInfo;
@property (nonatomic) BOOL hasBidPaidLinkmicInfo;
@property (nonatomic) HTSLiveSelfDisciplineInfo selfDisciplineInfo;
@property (nonatomic) BOOL hasSelfDisciplineInfo;
@property (nonatomic) NSString toast;
@property (nonatomic) HTSLiveInteractiveScreenCastInfo screenCastInfo;
@property (nonatomic) BOOL hasScreenCastInfo;
@property (nonatomic) IESLiveChorusInfo chorusInfo;
@property (nonatomic) BOOL hasChorusInfo;
@property (nonatomic) IESLiveThemedCompetitionInfo themedCompetitionInfo;
@property (nonatomic) BOOL hasThemedCompetitionInfo;
@property (nonatomic) HTSLiveOrderSingInfo orderSingInfo;
@property (nonatomic) BOOL hasOrderSingInfo;
@property (nonatomic) IESLiveAdventurePlayModeInfo adventurePlayModeInfo;
@property (nonatomic) BOOL hasAdventurePlayModeInfo;
@property (nonatomic) HTSLiveLinkmicGameInfo linkmicGameInfo;
@property (nonatomic) BOOL hasLinkmicGameInfo;
@property (nonatomic) HTSLiveLinkmicPlayModeInfo linkmicPlayModeInfo;
@property (nonatomic) BOOL hasLinkmicPlayModeInfo;
+ (id)descriptor;
@end
