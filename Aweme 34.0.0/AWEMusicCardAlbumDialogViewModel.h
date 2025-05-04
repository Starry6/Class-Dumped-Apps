@interface AWEMusicCardAlbumDialogViewModel : NSObject
@property (nonatomic) NSMutableArray songList;
@property (nonatomic) BOOL hasMoreSong;
@property (nonatomic) _TtC21AWEMusicStreamingImpl9LunaAlbum album;
@property (nonatomic) NSString albumId;
@property (nonatomic) BOOL canShowSkeletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreWithCompletion:;
- (id)playlistInfo;
- (id)albumId;
- (void)setAlbumId:;
- (BOOL)hasMoreSong;
- (id)songList;
- (void)setHasMoreSong:;
- (void)setSongList:;
- (BOOL)canShowSkeletion;
- (void)setCanShowSkeletion:;
- (id)init;
- (void)setAlbum:;
- (void).cxx_destruct;
- (id)album;
@end
