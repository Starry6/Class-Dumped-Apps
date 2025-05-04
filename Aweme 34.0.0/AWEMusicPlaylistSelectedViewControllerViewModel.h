@interface AWEMusicPlaylistSelectedViewControllerViewModel : NSObject
@property (nonatomic) NSArray<AWEMusicPlaylistTableViewCellViewModelProtocol> cellModels;
@property (nonatomic) Q playlistCreateType;
@property (nonatomic) NSMutableSet playlistIdSet;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL isMiniLuna;
- (BOOL)isMiniLuna;
- (void)setIsMiniLuna:;
- (void)setCellModels:;
- (id)cellModels;
- (id)curUserSecUid;
- (void)updatePlaylist:;
- (void)appendPlaylistModels:;
- (id)playlistIdSet;
- (void)setPlaylistIdSet:;
- (void)addObjectToPlaylistIdSet:;
- (void)loadMorePlaylistWithBlock:;
- (void)requstPlaylistAddSongToPlaylist:musicModels:completion:;
- (void)appendMiniLunaPlaylistModels:;
- (void)addPlaylist:;
- (void)delPlaylist:;
- (unsigned long long)playlistCreateType;
- (void)setPlaylistCreateType:;
- (long long)cursor;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
@end
