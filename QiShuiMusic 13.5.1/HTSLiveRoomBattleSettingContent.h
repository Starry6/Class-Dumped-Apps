@interface HTSLiveRoomBattleSettingContent : IESLivePBBaseMessage
@property (nonatomic) q battleDuration;
@property (nonatomic) BOOL acceptInvite;
@property (nonatomic) BOOL onlyAcceptFollowingInvite;
@property (nonatomic) BOOL notAcceptLessThanThreeLinkedInvite;
@property (nonatomic) HTSLiveRoomBattleThemeParam roomBattleThemeParam;
@property (nonatomic) BOOL hasRoomBattleThemeParam;
@property (nonatomic) NSString introductionContent;
+ (id)descriptor;
@end
