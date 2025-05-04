@interface AWEMusicStreamingImpl.MusicPlaylistEditViewController : UIViewController
@property (nonatomic) BOOL isFromPlaylistDetail;
@property (nonatomic) BOOL isOfflineMode;
@property (nonatomic) AWEPlaylistInfoModel playlistInfo;
@property (nonatomic) BOOL isMiniLuna;
- (void)backAction;
- (void)saveAction;
- (BOOL)isMiniLuna;
- (id)playlistInfo;
- (void)setPlaylistInfo:;
- (BOOL)isFromPlaylistDetail;
- (void)setIsFromPlaylistDetail:;
- (BOOL)isOfflineMode;
- (void)setIsOfflineMode:;
- (void)setIsMiniLuna:;
- (id)initWithPlaylistInfo:;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
