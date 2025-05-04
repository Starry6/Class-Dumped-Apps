@interface AWEFriendsImpl.AlbumHandler : AWEFriendsImpl.ContentHandler
@property (nonatomic) q currentIndex;
- (void)scrollToIndex:offset:;
- (long long)currentIndex;
- (BOOL)shouldFillProgressWhenScroll;
- (void)updateAlbumHandlerWithOhterHandler:;
- (void)updateAllInfoWithOtherContentHandler:;
- (BOOL)shouldSpectialHandlePlayState;
- (void)updatePlayerController:;
- (void)updatePlayStateWithAlbumHandler:playVideoVC:;
- (void).cxx_destruct;
@end
