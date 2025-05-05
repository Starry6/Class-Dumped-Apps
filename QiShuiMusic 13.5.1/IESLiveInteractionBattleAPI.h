@interface IESLiveInteractionBattleAPI : HTSLiveApi
- (void)fetchAnnounceWithPlayMode:RoomID:completion:;
- (void)fetchPlayModeInfoWithRoomId:callback:;
- (void)getTeamFightConfigWithType:completion:;
- (void)readPlayModeAnnounceWithRoomId:announceIds:completion:;
@end
