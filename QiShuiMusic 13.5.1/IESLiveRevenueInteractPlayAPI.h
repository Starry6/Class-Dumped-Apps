@interface IESLiveRevenueInteractPlayAPI : HTSLiveApi
- (void)requestBattleOpenWithBattleConfig:members:extraParams:callback:;
- (id)anchorID;
- (void)askPropInfoNotifyWithNotifyType:callback:;
- (id)battleID;
- (void)changeMultiPKTeamWithBattleConfig:callback:;
- (void)changeToMultiPKModeWithBattleConfig:callback:;
- (void)requestBattleFinishWithReason:isManually:callback:;
- (void)requestBattleOnceMoreInviteWithBattleConfig:callback:;
- (void)requestBattleOnceMoreReplyWithInviterId:inviteType:toMultiPKMode:isAccept:callback:;
- (void)requestBattleStateTransition:stage:callback:;
- (void)requestBizEndWithConfig:callback:;
- (void)requestBizInviteWithConfig:callback:;
- (void)requestBizReplyWithConfig:callback:;
- (void)requestBizStartWithConfig:callback:;
- (id)theme;
- (unsigned long long)scene;
- (id)channelID;
- (id)roomID;
@end
