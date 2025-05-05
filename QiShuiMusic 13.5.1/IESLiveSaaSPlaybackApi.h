@interface IESLiveSaaSPlaybackApi : HTSLiveApi
- (void)fetchPlaybackWithRoomId:matchID:completion:;
- (void)fetchVideoInfoWithEpisodeID:completion:;
@end
