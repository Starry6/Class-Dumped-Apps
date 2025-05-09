@interface AWESearchMusicListenMusicPlayerManager : NSObject
@property (nonatomic) NSObject<MusicService> lunaPlayer;
@property (nonatomic) UIView<AWEMusicStreamingBottomPlayer> playerView;
@property (nonatomic) NSMutableArray lunaPlayerArr;
@property (nonatomic) BOOL isPlayingAll;
@property (nonatomic) <AWESearchMusicListenMusicPlayerManagerDelegate> delegate;
@property (nonatomic) BOOL isLunaPlayShow;
@property (nonatomic) BOOL isSearchHasMore;
@property (nonatomic) BOOL isBottomPlayerShow;
@property (nonatomic) double bottomPlayerHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)musicService:playStatusChanged:;
- (void)onAudioPlay:model:;
- (void)onAudioOver:model:duration:;
- (BOOL)hasMoreOfScene:;
- (void)loadMoreScene:responseBlock:completion:;
- (void)feedGoBackDidTapped:;
- (void)bottomPlayerWillShow:;
- (void)bottomPlayerWillDismiss:;
- (void)playerViewDidTapBottomView:withMusicService:;
- (void)showPlayerViewIfNeeded;
- (void)playAll:;
- (void)addingPlayerInfoArrWithModel:;
- (BOOL)isLunaPlayShow;
- (void)pauseAndDismissBottomPlayerIfNeed;
- (void)setIsLunaPlayShow:;
- (void)resetPlayerInfo;
- (id)curMusiId;
- (id)curPlayStatus:;
- (id)getPlayStatusString:;
- (id)extractLunaModel:;
- (void)setIsSearchHasMore:;
- (id)findFirstLunaPlayerModel:;
- (void)openLunaPlayerWithSongId:trackParams:;
- (double)bottomPlayerHeight;
- (id)lunaPlayer;
- (id)lunaPlayerArr;
- (void)setIsPlayingAll:;
- (void)p_openLunaPlayerIfNeeded;
- (void)setLunaPlayer:;
- (void)p_openLunaPlayer;
- (void)setLunaPlayerArr:;
- (BOOL)isPlayingAll;
- (void)playMusicStart:;
- (void)playMusicEnd:;
- (void)playMusicStop:;
- (BOOL)isSearchHasMore;
- (BOOL)isBottomPlayerShow;
- (void)setIsBottomPlayerShow:;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (void)clear;
- (void)setPlayerView:;
- (id)playerView;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)stop;
+ (id)getLunaModel:;
@end
