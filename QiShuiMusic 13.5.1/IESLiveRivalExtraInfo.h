@interface IESLiveRivalExtraInfo : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger textType;
@property (nonatomic) NSString label;
@property (nonatomic) NSInteger anchorLayer;
@property (nonatomic) IESLiveRivalExtraInfo_LinkerInfo linkerInfo;
@property (nonatomic) BOOL hasLinkerInfo;
@property (nonatomic) IESLiveAnchorLinkmicUserSettings linkmicUserSettings;
@property (nonatomic) BOOL hasLinkmicUserSettings;
@property (nonatomic) IESLiveBattleUserSettings battleUserSettings;
@property (nonatomic) BOOL hasBattleUserSettings;
@property (nonatomic) q videoShowScore;
@property (nonatomic) IESLiveRivalExtraInfo_GameInfo gameInfo;
@property (nonatomic) BOOL hasGameInfo;
@property (nonatomic) NSString signExtra;
@property (nonatomic) NSString recommendInfo;
@property (nonatomic) NSInteger fromServerInviteType;
- (BOOL)isAllPlaceTaken;
- (BOOL)isFold;
- (BOOL)isInvitationAllowedWithFollowStatus:inInteractionOrNot:isFromRelationInviteeList:;
+ (id)descriptor;
@end
