@interface IESLiveRevenueInteractApi : HTSLiveApi
- (id)abMapJsonString;
- (void)battleRivalsWithEntrance:tabType:openTabName:recommendType:callback:;
- (void)getBattleChooseListWithChannelID:isPKing:panelScene:callback:;
- (void)resetInteractScoreWithChannlID:roomID:battleID:callback:;
- (void)setInteractScoreShowStatus:channelID:roomID:callback:;
- (void)updateLinkmicConfig:configId:forbidOthersInvite:forbidOthersApply:callback:;
@end
