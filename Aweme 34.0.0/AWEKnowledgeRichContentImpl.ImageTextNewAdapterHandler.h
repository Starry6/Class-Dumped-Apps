@interface AWEKnowledgeRichContentImpl.ImageTextNewAdapterHandler : BDMultiContentContainer.ImageTextHandler
@property (nonatomic) q currentIndex;
- (id)infoProviders;
- (void)checkPlayStateForSyncState;
- (BOOL)shouldSpectialHandlePlayState;
- (void)updatePlayerController:;
- (BOOL)shouldFillProgressWhenScroll;
- (void)scrollToIndex:offset:;
- (long long)currentIndex;
- (void)updateAlbumHandlerWithOhterHandler:;
- (void)updatePlayStateWithAlbumHandler:playVideoVC:;
- (void)updateAllInfoWithOtherContentHandler:;
- (void).cxx_destruct;
@end
