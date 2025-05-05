@interface IESLiveSaaSAdminApi : HTSLiveApi
- (void)changeAudienceRecordAuthWithRoomID:state:completion:;
- (void)changePlaybackAuthWithRoomID:state:completion:;
- (void)ieslive_switchAuthWithRoomID:type:state:completion:;
- (void)sendRoomAuthRequestWithRoomID:anchorID:showUserPreview:completion:;
@end
