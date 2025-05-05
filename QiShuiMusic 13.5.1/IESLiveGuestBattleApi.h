@interface IESLiveGuestBattleApi : HTSLiveApi
- (void)finishGuestBattleWithRoomID:reason:callback:;
- (void)openGuestBattleWithRoomID:duration:isAnchorInvolved:loserNum:scoreType:uiType:callback:;
- (void)pauseGuestBattleWithRoomID:callback:;
- (void)resumeGuestBattleWithRoomID:callback:;
@end
