@interface IESLiveTeamFightApi : HTSLiveApi
- (void)createTeamFightWithRoomId:duration:option:needSwitchScene:savedGuest:callback:;
- (void)finishTeamFightWithRoomId:reason:teamFightID:needSwitchScene:callback:;
- (void)startTeamFightWithRoomId:duration:callback:;
- (void)updateTeamFightPlayerTeamWithRoomID:teamFightID:targetTeam:updateType:guestID:postion:callback:;
@end
