@interface AWEDetailTrendMusicListMusicPlayServiceImpl : NSObject
@property (nonatomic) <AWEDetailMusicListViewModelProtocol> musicListDataContext;
@property (nonatomic) AWEDetailTrendViewModel trendViewModel;
@property (nonatomic) <MusicService> musicPlayer;
@property (nonatomic) <AWEMusicStreamingPlayEventService> playEventService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)musicService:playStatusChanged:;
- (void)updateMusicPlayerParamsWhenMusicListDidFetch;
- (BOOL)switchToMusicInfoAtIndex:;
- (id)initWitServiceProvider:;
- (void)setMusicListDataContext:;
- (void)setTrendViewModel:;
- (id)musicListDataContext;
- (id)trendViewModel;
- (id)playEventService;
- (void)setPlayEventService:;
- (BOOL)isPlaying;
- (void)play;
- (void).cxx_destruct;
- (void)pause;
- (void)setMusicPlayer:;
- (id)musicPlayer;
@end
