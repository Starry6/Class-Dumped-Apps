@interface AWEMusicStreamingSwiftImpl.FavoriteMusicContainerViewModel : AWEBaseListViewModel
@property (nonatomic) q dataState;
- (void)musicService:playStatusChanged:;
- (void)musicServiceMusicChanged:;
- (void)favoriteActionWithNotice:;
- (void)setupViewModel;
- (void)setDataState:;
- (id)init;
- (void).cxx_destruct;
- (long long)dataState;
@end
