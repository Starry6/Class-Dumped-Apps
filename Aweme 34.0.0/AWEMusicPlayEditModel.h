@interface AWEMusicPlayEditModel : NSObject
@property (nonatomic) NSString playlistTitle;
@property (nonatomic) NSString playlistDesc;
@property (nonatomic) UIImage playlistCover;
- (id)playlistCover;
- (id)playlistDesc;
- (void)setPlaylistDesc:;
- (void)setPlaylistCover:;
- (id)initWithPLaylist:;
- (void).cxx_destruct;
- (id)playlistTitle;
- (void)setPlaylistTitle:;
@end
