@interface IESLiveLinkMicAudiencePlaymodeInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGuestBattleInfo guestBattleInfo;
@property (nonatomic) BOOL hasGuestBattleInfo;
@property (nonatomic) HTSLiveLinkmicTeamfightInfo teamfightInfo;
@property (nonatomic) BOOL hasTeamfightInfo;
@property (nonatomic) IESLiveAdventurePlayModeInfo adventureInfo;
@property (nonatomic) BOOL hasAdventureInfo;
+ (id)descriptor;
@end
