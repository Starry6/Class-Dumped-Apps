@interface IESLiveBattleUserSettings : IESLivePBBaseMessage
@property (nonatomic) BOOL isTurnOn;
@property (nonatomic) BOOL acceptNotFollowerInvite;
@property (nonatomic) BOOL allowGiftToOtherAnchors;
@property (nonatomic) BOOL acceptFriendInvite;
@property (nonatomic) BOOL acceptHourlyRankInvite;
@property (nonatomic) BOOL acceptPopularityRankInvite;
@property (nonatomic) q inviteRejectPermanentTotal;
@property (nonatomic) q inviteRejectTemporaryTotal;
@property (nonatomic) NSString inviteRejectTemporaryText;
@property (nonatomic) BOOL pkAcceptVolumeUp;
@property (nonatomic) BOOL pkAutoConfirm;
@property (nonatomic) BOOL acceptUnionRecommendInvite;
+ (id)descriptor;
@end
