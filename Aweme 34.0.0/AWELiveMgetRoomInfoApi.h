@interface AWELiveMgetRoomInfoApi : HTSLiveApi
- (void)checkUserOnline:completion:;
- (void)fetchRoomInfo:completion:;
- (void)trackCheckResultWithFeedModel:sceneId:;
@end
