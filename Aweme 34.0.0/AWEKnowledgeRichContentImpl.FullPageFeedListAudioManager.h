@interface AWEKnowledgeRichContentImpl.FullPageFeedListAudioManager : AWEKnowledgeSwiftBasic.FullPageBaseComponent
- (void)onScrollViewDidEndDraggingWithScrollView:willDecelerate:;
- (void)onScrollViewDidEndDeceleratingWithScrollView:;
- (void)onContainerViewDidAppear;
- (void)onContainerViewWillDisappear;
- (void)updatePlayerAudioOptionsWithIsMute:;
- (void)restorePlayerAudioOptions;
- (void)savePlayerInitialAudioOptionsWithAudioController:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
