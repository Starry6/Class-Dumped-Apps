@interface AWEMusicStreamingSwiftImpl.MusicCardService : HTSService
- (void)addCardInfoObserver:;
- (void)removeCardInfoObserver:;
- (void)prefetchCardInfoWithItemId:;
- (void)preloadModel:;
- (id)queryLyricsWithItemId:;
- (id)queryCardInfoWithItemId:;
- (id)musicCardUrl:;
- (Class)musicCardCellClass;
- (id)init;
- (void).cxx_destruct;
@end
