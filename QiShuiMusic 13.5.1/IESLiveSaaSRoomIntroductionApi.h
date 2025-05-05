@interface IESLiveSaaSRoomIntroductionApi : HTSLiveApi
- (void)requestWithRoom:liveType:gameCategoryID:callback:;
- (void)updateRoom:liveType:gameCategoryID:withData:callback:;
@end
