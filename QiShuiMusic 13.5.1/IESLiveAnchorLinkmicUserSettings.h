@interface IESLiveAnchorLinkmicUserSettings : IESLivePBBaseMessage
@property (nonatomic) BOOL isTurnOn;
@property (nonatomic) BOOL acceptMultiLinkmic;
@property (nonatomic) BOOL acceptNotFollowerInvite;
@property (nonatomic) BOOL allowGiftToOtherAnchors;
@property (nonatomic) BOOL acceptFriendInvite;
@property (nonatomic) BOOL acceptHourlyRankInvite;
@property (nonatomic) BOOL acceptPopularityRankInvite;
@property (nonatomic) BOOL acceptRecommendSearchInvite;
@property (nonatomic) BOOL acceptBigSmallLayout;
+ (id)descriptor;
@end
