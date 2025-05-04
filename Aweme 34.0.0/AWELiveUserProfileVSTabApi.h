@interface AWELiveUserProfileVSTabApi : HTSLiveApi
- (void)fetchPreviousInfoWithUserID:completion:;
- (void)fetchAwemeVSTabEpisodeListWithUserID:isLoadMore:historyEpisodeID:cursor:completion:;
@end
