@interface IESLiveRoomBattleApi : HTSLiveApi
- (void)get:params:modelClass:callback:;
- (void)cancelInviteRoomBattleWithType:inviterRoomID:inviteeRoomID:callback:;
- (void)cancelRoomBattleMatch:matchType:callback:;
- (void)cancelRoomBattleReserve:matchType:callback:;
- (void)createRoomBattleWithRoomID:startType:callback:;
- (void)fetchInviteeListWithType:roomID:callback:;
- (void)fetchRoomBattleMatchInfo:matchType:callback:;
- (void)finishRoomBattleWithRoomID:finishType:finishReason:teamFightID:callback:;
- (void)inviteOneMoreWithInviterRoomID:InviteeRoomID:callback:;
- (void)inviteRoomBattleWithType:inviterRoomID:inviteeRoomID:inviteSource:callback:;
- (void)replyOneMoreInviterRoomID:inviteeRoomID:replyType:autoReject:callback:;
- (void)replyRoomBattleWithType:inviterRoomID:inviteeRoomID:replyType:autoReject:callback:;
- (void)searchForResultWith:offset:count:currentAnchorID:searchID:callback:;
- (void)searchForSuggestWordsWith:callback:;
- (void)selectGuestWithRoomBattleType:roomID:selectGuestsType:switchScene:toLayout:guestsUid:callback:;
- (void)startRoomBattleMatch:matchType:status:expectedTime:callback:;
- (void)startRoomBattleReserve:matchType:callback:;
@end
