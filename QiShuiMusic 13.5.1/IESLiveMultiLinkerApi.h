@interface IESLiveMultiLinkerApi : HTSLiveApi
- (void)cancelMultiAutoMatchWithType:matchType:cancelMultiMatch:participantsStr:completion:;
- (void)multiAutoMatchWithFirst:matchType:subType:isHighWay:extraParams:finished:;
- (void)rejectAutoMatchInvite:inviteUserID:extraParams:callback:;
- (void)updateBattleSettings:withRoomID:secUid:callback:;
- (void)updateStreamLayoutWithType:anchorUIOperationLayout:focusUid:callback:;
@end
